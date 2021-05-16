global _ft_read
extern ___error

_ft_read:
    mov rax , 0x2000003
    syscall
    jc ernno
    ret

ernno:
    push rax
    call ___error
    pop r15
    mov [rax] , r15
    mov rax , -1
    ret