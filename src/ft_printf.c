#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

int	ft_puchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while(*str)
		len += ft_puchar(*str++);
	return (len);
}

int	ft_num(unsigned long int nbr, int base, char *str, int mod)
{
	int	nbr_list[100];
	int	len;
	int	i;

	mod = 0;
	len = 0;
	i = 0;
	while(nbr)
	{
		nbr_list[i++] = nbr % base;
		nbr /= base;
	}
	while (i--)
		len += ft_puchar(str[nbr_list[i]]);
	return (len);
}

int	convert_var(va_list args, char curr_format)
{
	int	len;

	len = 0;

	if (curr_format == 'd')
		len += ft_num(va_arg(args, int), 10, "0123456789", 0);
	return (len);
}

// format = last element of the list
int	ft_printf(const char *format_str, ...)
{
	va_list	args;
	int	len;

	len = 0;
	va_start(args, format_str);
	while (*format_str)
	{
		//printf("%c", format[i]);
		if (*format_str == '%' )
		{
			format_str++;
			len += convert_var(args, *format_str);
		}
		else
			len += ft_putchar(*format_str);
		format_str++;
	}

	va_end(args);
	return (len);
}

// int	main ()
// {
// 	// int a;
// 	// int *ptr;
// 	// a = 10;
// 	// ptr = &a;
// 	//ft_putnbr(a);
// 	//ft_printf("%s /n","sfdfs2321312");
// 	//ft_printf("1", 123213);
// 	ft_printf("test %s aaa %X \n", "testing", 1523533);
// 	//printf("test %s aaa %d", "testing", 123);
// 	//ft_printf("1", ptr);
// 	//printf("11%s11", "asss");
// 	return (0);
// }
