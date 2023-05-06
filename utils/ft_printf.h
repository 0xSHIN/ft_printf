#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdio.h>
# include	<stdarg.h>
# include	<stddef.h>
# include	<stdint.h>
# include	<string.h>
# include	<stdlib.h>
# include	<unistd.h>

void	ft_putstr(char *str);
void    ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void    ft_putnbr_base(unsigned long long int nb, char *base);


#endif
