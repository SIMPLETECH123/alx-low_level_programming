#include <stdio.h>

int main(void)
{
	char *str = "my School";
	while (*str)
		printf("%c\n",*str++);
	return (0);
}
