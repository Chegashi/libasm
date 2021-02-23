
global _ft_strcpy

_ft_strcpy:
    mov rax , 0

ft_strcpy :
    cmp  [rsi + rax] , byte 0 
    je return
    mov [rdi + rax] , [rsi + rax]
    inc rax
    jmp ft_strcpy

return :
    mov [rdi + rax] , [rsi + rax]
    mov rax , rdi
    ret