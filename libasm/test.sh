nasm -f macho64 hello.s -o hello.o
gcc main.c hello.o 
./a.out