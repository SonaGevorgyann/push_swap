//#include "push_swap.h"
#include <unistd.h>

int	consist(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int plus_minus(char *s)
{
	inti;

	i = 0;
	while(s[i])
	{
		if(s[i] == '-' || s[i] == '+')
		{
			if(i == 0 && s[i+1]  '0' && s[i+1] <= '9')
		}
	}
}
int	has_char(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		if (!consist(s1[i], s2))
			return (0);
		i++;
	}
	return (1);
}

int	valid(char *str, char *s)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!has_char(str, s))
		{
			write(1, "Error", 5);
			return (1);
		}
	}
}

#include <stdio.h>
int main(int argc, char **argv)
{
    int i = 0;
	char *a = "1234567890 +-";
    if(argc == 2)
    {
        printf("%d\n", has_char(argv[1], a));
    }
}