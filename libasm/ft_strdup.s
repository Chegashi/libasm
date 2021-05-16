global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy
extern ___error

_ft_strdup:
    mov rax , 0
    push rdi
    call _ft_strlen
    mov rdi, rax
    call _malloc
    cmp rax , 0
    je ernno
    mov rdi , rax
    pop rsi
    mov rax , 0
    jmp _ft_strcpy
    ret

ernno:
    call ___error
    mov [rax] , byte 12
    mov rax , 0
    ret