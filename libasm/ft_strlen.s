
global _ft_strlen

_ft_strlen:
    mov rax , 0 

ft_strlen :
    cmp  [rdi + rax] , byte 0 
    je return
    inc rax
    jmp ft_strlen

return :
    ret