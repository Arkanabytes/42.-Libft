![](libft.jpg)

# Libft

## Objectives 

C programming can be very tedious when one doesn’t have access to those highly useful
standard functions. This project makes you to take the time to re-write those functions,
understand them, and learn to use them. This library will help you for all your future C
projects.
Through this project, we also give you the opportunity to expand the list of functions
with your own. Take the time to expand your libft throughout the year.

### What's in it?

As you can see from the project, there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_capitalize 
bzero		| ft_memdel		| ft_lstdelone	| ft_countwords 
memcpy		| ft_strnew		| ft_lstdel		| ft_islower    
memccpy		| ft_strdel		| ft_lstadd		| ft_isupper    
memmove		| ft_strclr		| ft_lstiter	| ft_strndup    
memchr		| ft_striter	| ft_lstmap		| ft_lst_reverse
memcmp		| ft_striteri	|				| ft_realloc
strlen		| ft_strmap		|				| ft_strjoinch
strdup		| ft_strmapi	|				| ft_strnchr
strcpy		| ft_strequ		|				| ft_copyuntil
strncpy		| ft_strnequ	|			| ft_strstartswith
strcat		| ft_strsub		| | ft_intlen
strlcat		| ft_strjoin	| | ft_strendswith
strchr		| ft_strtrim	| | ft_pathjoin
strrchr		| ft_strsplit	| | ft_lstaddback
strstr		| ft_itoa		| | get_next_line
strnstr		| ft_putchar	| | ft_putnstr
strcmp		| ft_putstr		| | ft_strreplace
strncmp		| ft_putendl	| | ft_isemptystr
atoi		| ft_putnbr		| | ft_strsplitall
isalpha		| ft_putchar_fd	| | ft_countwordsall
isdigit		| ft_putstr_fd	| | ft_freestrarr
isalnum		| ft_putendl_fd	| | ft_strjoincl
isascii		| ft_putnbr_fd	| | ft_strjoinchcl
isprint		|| | ft_count2darray
toupper		| | | ft_strarrmax
tolower		| | | ft_get_parent_path

### Compilation:

`make all` | First time compilation.

`make fclean` | Delete files generated from compilation.

`make re` | Delete files generated from compilation and recompile.

### Execution:

`gcc "file_main" libft.a && ./a.out` | Compile a main with the library, and then run the program.


## Authors


* [*Consuelo Alejandra Pinto Toro*](https://github.com/hatejandra)
