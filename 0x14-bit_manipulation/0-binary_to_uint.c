#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    int i = 0, val = 0, log = 0;
    unsigned int valueInt = 0;

    while (b[i])
    {
        if (b[i] != '1' && b[i] != '0')
        {
            return (0);
        }
        
        if (b[i] == '1' || val)
        {
            if (val)
                log *= 2;
            else
                log = 1;
            val = 1;
        }
        i++;
    }
    i = 0;
    val = 0;
    while (b[i])
    {
        if (b[i] == '1' || val)
        {
            if (b[i] == '1')
                valueInt += log;
            log /= 2;
            val = 1;
        }
        i++;
    }
    return (valueInt);
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}