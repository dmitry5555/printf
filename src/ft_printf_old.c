#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

int	ft_num(unsigned long int n)
{
	int	len;

	len = 0;
	if (16 <= n)
	{
		ft_num(n / 10);
		ft_num(n % 10);
	}
	if (n < 16)
	{
		if (n < 10)
			ft_num(n + 55);
		else
			ft_num(n + 87);
		len++;
	}
	return (1);
}

int	convert_var(char format, char *str)
{
	int	i;

	i = 0;
	if (format == 'c')
		return (ft_putchar((char)&str[0]));
	if (format == 's')
	{
		if (!str)
			str = "(null)";
		return (ft_putstr((char *)str));
	}
	if (format == 'd' || format == 'i' || format == 'u')
		return (ft_putstr(ft_itoa((int)str)));
	if (format == 'x')
		return(ft_hex((int)str, 0));
	if (format == 'X')
		return(ft_hex((int)str, 1));
	if (format == 'p')
		return (ft_pointer((unsigned long int) str));
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

// format = last element of the list
int	ft_printf(const char *format, ...)
{
	va_list arguments;
	int	len;

	va_start(arguments, format);
	while (*format)
	{
		//printf("%c", format[i]);
		if (*format == '%' )
		{
			format++;
			len += convert_var(arguments, *format);
		}
		else
			len += ft_putchar(*format);

		format++;
	}

	va_end(arguments);
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

