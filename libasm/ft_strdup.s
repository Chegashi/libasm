global _ft_strdup
extern _malloc
; char	*ft_strdup(const char *src)
; {
; 	char	*p;
; 	size_t	i;

; 	i = 0;
; 	p = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
; 	if (p == 0)
; 		return (0);
; 	while (i < ft_strlen(src))
; 	{
; 		p[i] = src[i];
; 		i++;
; 	}
; 	p[i] = '\0';
; 	return (p);
; }

_ft_strdup:
    mov rax , 0

ft_strdup :
    mov rax , rdi
	call _ft_strlen
	call ft_strcpy
    ret
