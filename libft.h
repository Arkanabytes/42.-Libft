/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 00:30:35 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/05 06:35:06 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putstr(char const *s);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcat(char *s1, const char *s2);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
int					ft_copinto_space(const int c);
char				*ft_strncpy(char *dst, const char *src, size_t n);
void				ft_striter(char *s, void(*f)(char *));
int					ft_isdigit(int c);
void				ft_putnbr(int n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
void				ft_putstr_fd(char const *s, int fd);
int					ft_toupper(int c);
char				*ft_strcpy(char *dst, char *src);
char				*ft_strdup(const char *src);
void				ft_putnbr_fd(int nb, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar(char c);
int					ft_isascii(int c);
size_t				ft_strlen(const char *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
void				ft_putendl(char const *s);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_itoa(int n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strtrim(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_memdel(void **ap);
void				*ft_memset(void *b, int c, size_t len);
int					ft_isalpha(int c);
char				*ft_strcat(char *s1, const char *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_tolower(int c);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_strclr(char *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_isprint(int c);
char				*ft_strchr(const char *s, int c);
int					ft_copinto_islower(int c);
int					ft_copinto_issuper(int c);
int					ft_copinto_lol(long c, int len);
int					ft_copinto_contador(char const *str, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelone(t_list **list, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
