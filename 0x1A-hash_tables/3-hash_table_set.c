#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int valKey = 0;
    hash_node_t *newNode = NULL;
    hash_node_t *temp = NULL;
    int val = 0;

    if (!key || !value)
        return (0);

    valKey = key_index((unsigned char *)key, ht->size);

    newNode = malloc(sizeof(hash_node_t));
    if (!newNode)
        return (0);

    newNode->key = (char *) key;
    newNode->value =(char *) value;
    newNode->next = NULL;
    if (!ht->array[valKey])
    {
        ht->array[valKey] = newNode;
        /*printf("%s ", ht->array[valKey]->key);*/
        /*printf("%s\n", ht->array[valKey]->value);*/
        return (1);
    }

    temp = ht->array[valKey];
    while(temp->next)
    {
        if (temp->key == (char *)key)
        {
            printf("Igualdad\n");
            temp->value = (char *) value;
            free(newNode);
            val = 1;
            break;
        }
        temp = temp->next;
    }
    if (val == 0)
    {
        temp->next = newNode;
    }

    /*hash_node_t *tempHt = ht->array[valKey];*/
    /*while (tempHt)*/
    /*{*/
    /*    printf("%s ", tempHt->key);*/
    /*    printf("%s\n", tempHt->value);*/
    /*    tempHt = tempHt->next;*/
    /*}*/
    return (1);
}
