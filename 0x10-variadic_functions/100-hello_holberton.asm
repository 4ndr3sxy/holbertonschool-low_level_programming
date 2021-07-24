; .model small
; .stack 0100H
; .data
; string1 db 'Hello, Holberton', 40H, '$'
; .code
; mov ax, @data
; mov ds, ax

; lea dx, string1     ;load effective addres
; mov ah, 9           ;write string to stdout
; int 21H

; mov ah, 4ch
; int 21h
; int 20h
; end

; global _start

; section .text:

; _start:
;     mov eax, 0x4            ;use the write syscall
;     mov ebx, 1              ;use stdout as the fd
;     mov ecx, message        ;use de message as the buffer
;     mov edx, message_length ; and supply the length
;     int 0x80

;     mov eax, 0x1
;     mov ebx, 0
;     int 0x80

; section .data:
;     message: db "Hello, Holberton", 0xA
;     message_length equ $-message

section .data
    text db "Hello, Holberton",10

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, text
    syscall

    mov rax, 60
    mov rdi, 0
    syscall
