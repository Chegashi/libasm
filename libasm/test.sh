nasm -f macho64 ft_strcpy.s -o ft_strcpy.o 
gcc main.c ft_strcpy.o 
./a.out