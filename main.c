#include "printf.h"

int main(void)
{
    int x = ft_print("Hello %s, how are you %s?, Are you under %d?\n", "Noreddine", "today", 18);  // Output: Hello Noreddine, how are you today?
	ft_print("%d\n", x);
    int y = printf("Hello %s, how are you %s?, Are you under %d?\n", "Noreddine", "today", 18);  // Output: Hello Noreddine, how are you today?
	printf("%d\n", y);
    // int x = ft_print("Hello %c %s %c %c %d %i\n", 'n', "oreddi", 'n', 'e', 2004, -2);  // Output: Hello Noreddine, how are you today?
	// ft_print("%d\n", x);
    // int y = printf("Hello %c %s %c %c %d %i\n", 'n', "oreddi", 'n', 'e', 2004, -2);  // Output: Hello Noreddine, how are you today?
	// printf("%d\n", y);
	//printf("%u", -1);
	// int x = printf("%u\n", 1200);
	// int y = ft_print_hex_dig(1200, 3, 10);
	//printf("\n %d %d", x, y);
	// int x = ;
	
	// uintptr_t addr = (uintptr_t)x;

	// printf("0x%x\n", x);
	// char *s = "hjdshjds";
	// int s = 15;
	// printf("%p\n", s);
	// ft_print_p(s);
	//printf("%p\n", s);
	//ft_putstrc(s);
	return 0;
}