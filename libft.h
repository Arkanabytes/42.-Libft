/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 02:53:39 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/25 03:21:06 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define LIBFT_H
#endif

void *      ft_memalloc(size_t size);
void        ft_memdel(void **ap);
char *      ft_strnew(size_t size);
void        ft_strdel(char **as);
void        ft_strclr(char *s);
void        ft_striter(char *s, void (*f)(char *));
void        ft_striteri(char *s, void(*f)(unsigned int, char *));
char *      ft_strmap(char const *s, char (*f)(char));
char *      ft_strmapi(char const *s, char(*f)(unsigned int, char));
int         ft_strequ(char const *s1, char const *s2);
int         ft_strnequ(char const *s1, char const *s2, size_t n);
int         ft_strsub(char*  const *s, unsigned int start, size_t len);
char *      ft_strjoin(char const *s1, char const *s2);
char *      ft_strtrim(char const *s);
char **     ft_strsplit(char const *s, char c);
char *      ft_itoa(int n);
void        ft_putchar(char c);
void        ft_putstr(char const *s);
void        ft_putendl(char const *s);
void        ft_putnbr(int n);
void        ft_putchar(int n);
void        ft_putstr_fd(char const *s, int fd);
void        ft_putendl_fd(char const *s, int fd);
void        ft_putnbr_fd(int n, int fd);
void ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void ft_lstdel(t_list **alst, void (*del)(void *,size_t));
void ft_lstadd(t_list **alst, t_list *new);
void ft_lstiter(t_list *lst, void (*f)(t_list*elem));
t_list * ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int         main(int argc, char **argv)
{
	int result;
	int rig;

	if (argc != 4)
		return (0);
