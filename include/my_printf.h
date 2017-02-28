/*
** my_printf.h for my in /home/remy.machado/Pool_Second_Try/include
**
** Made by remy machado
** Login   <remy.machado@epitech.net>
**
** Started on  Tue Oct 18 14:53:02 2016 remy machado
** Last update Tue Feb 28 13:16:45 2017 jack
*/

#ifndef MY_PRINTF_H_
# include <stdarg.h>
# include <stdbool.h>
# define MY_PRINTF_H_
# define UNUSED(parameter)      (void)(parameter)

typedef void (*t_ptrf)(va_list);

int	format_leftj(const char *str, int j, char mod, va_list apcpy);
int	format_leftj2(int *lengthstr, char mod, va_list apcpy);
int	format_mod(const char *str, int *i, char mod, va_list ap);
int	format_mod2(const char *str, int j, char mod, va_list apcpy);
int	format_sharp(char mod);
int	format_zero(const char *str, int j, char mod, va_list apcpy);
int	format_zero2(int *lengthstr, char mod, va_list apcpy);
char	identify_mod(char c);
void	my_aff_params(int argc, char **argv);
int	my_char_isalpha(char c);
int	my_char_isalphanum(char c);
int	my_char_islowcase(char c);
int	my_char_isnum(char c);
int	my_char_isprintable(char c);
int	my_char_isupcase(char c);
char	my_charlowcase(char c);
char	my_charupcase(char c);
char	*my_evil_str(char *str);
int	my_fact_it(int nbr);
int	my_fact_rec(int nbr);
int	my_find_prime_sup(int nbr);
int	my_getnbr(const char *str);
int	my_getnbr_base(char *str, char *base);
char	my_init_printf(const char *str, int *i, int *stop, va_list ap);
char	my_init_printf2(const char *str, int *i, int *stop, va_list ap);
int	my_nbr_isneg_ap(va_list apcpy);
int	my_nbrlen(long nbr);
int	my_power_it(int nbr, int power);
int	my_power_rec(int nbr, int power);
int	my_printf(const char *str, ...);
int	my_printf_core(const char *str, int *i, int *stop, va_list ap);
void	my_putchar(char c);
void	my_putchar_ap(va_list ap);
void	my_putchar_mod(va_list ap);
void	my_putmod_ap(va_list ap);
void	my_putnbr(int nbr);
void	my_putnbr_ap(va_list ap);
int	my_putnbr_base(long nbr, char* base);
void	my_putnbr_base_b(va_list ap);
void	my_putnbr_base_o(va_list ap);
void	my_putnbr_base_p(va_list ap);
void	my_putnbr_base_x(va_list ap);
void	my_putnbr_base_X(va_list ap);
void	my_putstr(char *str);
void	my_putstr_ap(va_list ap);
void	my_show_wordtab(char **tab);
void	my_showstr_octal(va_list ap);
int	my_square_root(int nbr);
int	my_str_got_num(char *str);
int	my_str_isalpha(char *str);
int	my_str_islowcase(char *str);
bool	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_isupcase(char *str);
char	**my_str_to_wordtab(char *str);
char	**my_str_to_wordtab2(char *str, int i, int j, int k);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
int	my_strcmp(char *str1, char *str2);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char	*src);
int	my_strlen(char *str);
int	my_strlen_alphanum(const char *str);
int	my_strlen_argcargv(int argc, char **argv);
int	my_strlen_num(const char *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int n);
int	my_strncmp(char *str1, char *str2, int n);
char	*my_strncpy(char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	*my_strupcase(char *str);
void	my_rev_params(int argc, char **argv);
char	*my_revstr(char *str);
char	*my_sum_params(int argc, char **argv);
int	my_words_counter(char *str);
int	my_zero_isfirst(const char *str, char mod);

#endif	/* !MY_PRINTF_H_ */
