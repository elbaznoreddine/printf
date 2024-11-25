#include "ft_printf.h"

int main(void)
{
	char s[] = "jello";
	int i = 16;
    int x = ft_printf("Hello %s, how are %%%%%%%%%%you %s?, Are you under %d?   , %p %p %c %u %i %x %X %\nnjdjd %\n", "Noreddine", "today", 18, s, i, 'o', 10, 1233455, s,s);
	int y = printf("Hello %s, how are %%%%%%%%%%you %s?, Are you under %d?   , %p %p %c %u %i %x %X %\nnjdjd %\n", "Noreddine", "today", 18, s, i, 'o', 10, 1233455, s,s);
	// int x = ft_print(NULL);
  	// int y = printf(NULL);
	printf("%d %d\n", x, y);
    
	return 0;
}