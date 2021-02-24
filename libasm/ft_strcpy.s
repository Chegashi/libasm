
global _ft_strcpy

_ft_strcpy:
    mov rax , 0

ft_strcpy :
    cmp  [rsi + rax] , byte 0 
    je return
    mov bl ,  [rsi + rax]
    mov [rdi + rax] ,  bl
    inc rax
    jmp ft_strcpy

return :
    mov [rdi + rax] , byte 0
    mov rax , rdi
    ret