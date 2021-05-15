global _ft_strcmp

_ft_strcmp:
    mov rax , -1
    mov rcx , 0
    mov rdx , 0

ft_strcmp :
    inc rax
    mov cl , byte [rdi + rax] ; cl = s1[i]
    mov dl , byte [rsi + rax] ; dl = s2[i]
    cmp cl , 0                ; if(!*s1)
    je return
    cmp dl , 0                ; if(!*s2)
    je return
    cmp  cl , dl
    jne return
    je ft_strcmp

return :
    cmp cl , dl
    jl  inf 
    jg sup
    je equal

inf:
    mov rax , -1
    ret

sup:
    mov rax , 1
    ret

equal :
    mov rax , 0
    ret
