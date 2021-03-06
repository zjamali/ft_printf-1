/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <helkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 17:40:12 by ybolles           #+#    #+#             */
/*   Updated: 2019/12/14 10:07:54 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <time.h>
# include <stdint.h>

typedef struct		s_flag
{
	int				len;
	int				i;
	va_list			args;
	char			*frmt;
	char			c;
	int				it;
	char			*p;
	char			*s;
	int				x;
	unsigned int	u;
	char			flage;
	int				size;
}					t_flag;

void				ft_putnbr_fd(int n, int fd);
size_t				ft_strlen(const char *s);
int					ft_putstr(char const *s);
char				*ft_strchr(const char *s, int c);
void				ft_putnstr(char const *s, int i);
int					print_m(t_flag *t);
void				presion_zero(char *fmt, t_flag *t);
void				print_intger(t_flag *t, int w, int p);
void				get_flage(char *fmt, t_flag *t);
size_t				digit_count(long nb, int base);
void				ze_d_u(t_flag *t, int i);
int					checkflags(char *fmt, t_flag *t);
void				pre_st(t_flag *t, int w, int p);
void				zero_d_u(char *fmt, t_flag *t);
int					ft_printf(const char *fmt, ...);
void				presicion_zer_tw(t_flag *t, char *fmt);
int					print_zero(int p);
void				negative_val(int *it, t_flag *t);
int					zero_w(t_flag *t, int p, int s, int w);
int					get_number(char *fmt, int *i, t_flag *t);
int					searchprecision(char *fmt, t_flag *t);
void				pointer_pre(int w, t_flag *t, int p);
int					print_neg(int *it);
void				presition_p_td(t_flag *t, char *fmt, int w, int p);
void				presionpoint(char *fmt, t_flag *t);
void				print_unsigned(t_flag *t, int w, int p);
void				*ft_calloc(unsigned int nitems, unsigned int size);
int					print_space(int p);
char				*ft_strdup(const char *str);
void				presionpoint_prime(char *fmt, t_flag *t);
int					ft_putchar(char c);
int					print_address_hex(void *p0, int *len, int b);
int					print_p(t_flag *t, void *p);
int					print_di(t_flag *t, int it);
int					ft_isdigit(int c);
void				presion_zero(char *fmt, t_flag *t);
int					print_c(t_flag *t, int c);
void				printpresi_c(int w, t_flag *t, int c);
void				hexa_presition(int w, int p, t_flag *t);
int					print_s(t_flag *t, char *s);
int					check_space(int w, int p, t_flag *t);
int					print_u(t_flag *t, unsigned int u);
int					zapper_neg(char *fmt, int d);
void				ft_pre_tw(t_flag *t, int w, int p);
void				ft_pre(int p, int w, t_flag *t);
char				*ft_itoa_base(int value, int base, int c);
int					ft_atoi(char *str);
char				*ft_to_hexa(unsigned int num, char c, int i);
void				presicion_str(t_flag *t, int w, int p);
int					print_hexa(t_flag *t, long x, char cap);
void				presionpoint_trime(char *fmt, t_flag *t);
int					checkpresicion(char *fmt, t_flag *t);

#endif
