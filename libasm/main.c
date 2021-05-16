/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:16:24 by mochegri          #+#    #+#             */
/*   Updated: 2021/05/16 19:42:51 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libasm.h"
#define BUFFER_SIZE 600

void    strlen_test(char *s)
{
	int t1 = strlen(s);
	int t2 = ft_strlen(s);
    printf("TEST[%s] :\nOriginal = %d\nAssembly = %d\n", s, t1, t2);
    printf("-----------------------------\n");
}
 
void	strcpy_test(char *s)
{
	char s1[BUFFER_SIZE];
	char s2[BUFFER_SIZE];
	strcpy(s1, s);
	ft_strcpy(s2, s);
	printf("TEST[%s] :\nOriginal = %s\nAssembly = %s\n", s, s1, s2);
	printf("-----------------------------\n");
}

void	strcmp_test(char *s1, char *s2)
{
	int	t1 = strcmp(s1, s2);
	int t2 = ft_strcmp(s1, s2);
	printf("S1[%s] S2[%s]:\nOriginal = %d\nAssembly = %d\n", s1, s2, t1, t2);
	printf("-----------------------------\n");
}

void	strdup_test(char *s)
{
	char *s1 = strdup(s);
	char *s2 = ft_strdup(s);
	printf("TEST[%s] :\nOriginal = %s\nAssembly = %s\n", s, s1, s2);
	printf("-----------------------------\n");
}

void	test_read()
{
	char buffer[500];
	int fd;
	fd = open("read.txt", O_RDONLY);
	ft_read(fd, buffer, 150);
	printf("%s\n", buffer);
	printf("\n===================== The End ==============================\n");
}

int     main(int argc, char**argv)
{
	printf("************* Hello It's ayghazal main for libasm project **********\n\n\n\n");
	printf("============ [ft_strlen] ===============\n");
	strlen_test("Hello");
	strlen_test("");    
	strlen_test("hello world hello world hello world");
	strlen_test("aaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbfffffffffffff");
	printf("============ [ft_strcpy] ===============\n");
	strcpy_test("Hello");
	strcpy_test("");
	strcpy_test("hello world hwllo world hello world hello world");
	strcpy_test("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbdddddddddddddddddddddd");
	printf("============ [ft_strcmp] ===============\n");
	strcmp_test("", "");
	strcmp_test("1", "");
	strcmp_test("", "1");
	strcmp_test("a", "b");
	strcmp_test("b", "a");
	strcmp_test("123455", "assddddd");
	strcmp_test("assddddd", "123455");
	printf("============ [ft_strdup] ===============\n");
	strdup_test("hello");
	strdup_test("");
	strdup_test("Hello world it's me");
	strdup_test("sdsdfjshdfgjshdD;GOH;djghsDUGHOUDGHK;DGHUYEWGRJKDSHEFHDFGSDHFDSLFHL");
	printf("============ [ft_write] ===============\n");
	write(1, "hello\n", 6);
	ft_write(1, "hello\n", 6);
	printf("-----------------------\n");
	write(1, "", 1);
	ft_write(1, "", 1);
	printf("-----------------------\n");
	write(1, "hello world\n", 12);
	ft_write(1, "hello world\n", 12);
	printf("-----------------------\n");
	write(1, "oBPpfjnjWhBZJgvEcLHBoBPpfjnjWhBZJgvEcLHB\n", 41);
	ft_write(1, "oBPpfjnjWhBZJgvEcLHBoBPpfjnjWhBZJgvEcLHB\n", 41);
	printf("-----------------------\n");
	printf("============ [ft_read] ===============\n");
	test_read();
}