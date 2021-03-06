/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 18:33:14 by wvaara            #+#    #+#             */
/*   Updated: 2021/09/13 10:32:23 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define GNL_BUFF_SIZE 4096
# include <string.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct s_gnl
{
	int				ret;
	char			buf[GNL_BUFF_SIZE + 1];
	char			*temp;
}				t_gnl;

void				ft_bzero(void *str, size_t len);
void				ft_putnbr(int n);
void				ft_putlonglong(long long int n);
void				ft_put_uns_longlong(unsigned long long n);
void				ft_putlonglong_fd(long long int n, int fd);
void				ft_put_uns_ll_fd(unsigned long long n, int fd);
void				ft_putaddr(void **ptr);
void				ft_strclr(char *str);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putaddr_fd(void **ptr, int fd);
void				ft_putendl(char const *str);
void				ft_putstr(char const *str);
void				ft_memdel(void **ap);
void				ft_free_array(char **array);
void				ft_strdel(char **as);
void				ft_striter(char *str, void (*f)(char *));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				*ft_memset(void *str, int c, size_t len);
void				*ft_memmove(void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_print_array(char **array);
int					ft_isupper(char c);
int					ft_intlen(long long int n);
int					ft_arrlen(char **array);
int					ft_uns_longlong_len(unsigned long long n);
int					ft_long_long_len(long long n);
int					ft_addr_len(void **ptr);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t len);
int					ft_isalpha(int c);
int					ft_atoi(const char *str);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_find_char(char *str, char c);
int					ft_isprint(int c);
int					ft_isinf(double nbr);
int					ft_check_needle(const char *haystack, const char *needle);
int					ft_isdigit(int c);
int					ft_isspace(char c);
int					ft_isnan(double nbr);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_gnl(const int fd, char **line);
char				**ft_realloc_array(char **array, int i);
char				**ft_arr_trim(char **array);
char				*ft_get_next_word(char *str, int i);
char				*ft_extract_word(char *str, int i, char c);
char				*ft_str_char_trim(char *str, char c);
char				*ft_strndup(const char *src, int len);
char				*ft_itoa(int n);
char				*ft_skip_white_space(char *str);
char				*ft_uns_itoa(unsigned long long n);
char				*ft_strrev(char *str);
char				*ft_strcjoin(char const *s1, char c, char const *s2);
char				*ft_strtrim(char const *str);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strsub(char const *str, unsigned int start, size_t len);
char				*ft_strmap(char const *str, char (*f)(char));
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				*ft_extract_word_with_char(char *str, int i, char end);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strdup(const char *src);
char				*ft_remove_last_word(char *str, char c);
char				*ft_strcdup(const char *src, char c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *hay, const char *need, size_t len);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				**ft_strsplit(char const *str, char c);
char				**ft_arrdup(char **array);
size_t				ft_strlcpy(char *dst, const char *src, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t len);
size_t				ft_strlen(const char *str);
size_t				ft_wordcount(const char *str, char c);
size_t				ft_linecount(const char *str, char c);
size_t				ft_wordlength(const char *str, char c);
size_t				ft_linelength(const char *str, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
