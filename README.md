*This project has been created as part of the 42 curriculum by tkazmina <tkazmina@student.codam.nl>* 

# Libft – 42 Project

## Description

Libft is the very first project at 42. The goal is to recreate a selection of standard C library functions, as well as some additional utility functions that will be useful throughout the cursus.

This project helps you understand:

- **Character checks & conversions** — `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Memory manipulation** — `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String manipulation** — `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- **Conversions & output** — `ft_atoi`, `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Linked list utilities** — `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```

### Available Makefile rules

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

---

## Part 1 – Libc Functions

Reimplementation of standard C library functions:

| Function        | Prototype                              | Description |
|----------------|----------------------------------------|-------------|
| ft_isalpha     | int ft_isalpha(int c)                  | Returns non-zero if c is an alphabetic character |
| ft_isdigit     | int ft_isdigit(int c)                  | Returns non-zero if c is a digit (0-9) |
| ft_isalnum     | int ft_isalnum(int c)                  | Returns non-zero if c is alphanumeric |
| ft_isascii     | int ft_isascii(int c)                  | Returns non-zero if c is within ASCII range (0-127) |
| ft_isprint     | int ft_isprint(int c)                  | Returns non-zero if c is a printable character |
| ft_toupper     | int ft_toupper(int c)                  | Converts lowercase letter to uppercase |
| ft_tolower     | int ft_tolower(int c)                  | Converts uppercase letter to lowercase |
| ft_strlen      | size_t ft_strlen(const char *s)        | Returns the length of string s |
| ft_memset      | void *ft_memset(void *s, int c, size_t n) | Fills memory area with byte c |
| ft_bzero       | void ft_bzero(void *s, size_t n)       | Sets n bytes of memory to zero |
| ft_memcpy      | void *ft_memcpy(void *dst, const void *src, size_t n) | Copies n bytes from src to dst (no overlap) |
| ft_memmove     | void *ft_memmove(void *dst, const void *src, size_t n) | Copies n bytes handling overlap safely |
| ft_strlcpy     | size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) | Copies string with size limit |
| ft_strlcat     | size_t ft_strlcat(char *dst, const char *src, size_t dstsize) | Concatenates string with size limit |
| ft_strchr      | char *ft_strchr(const char *s, int c)  | Returns pointer to first occurrence of c in s |
| ft_strrchr     | char *ft_strrchr(const char *s, int c) | Returns pointer to last occurrence of c in s |
| ft_strncmp     | int ft_strncmp(const char *s1, const char *s2, size_t n) | Compares two strings up to n bytes |
| ft_memchr      | void *ft_memchr(const void *s, int c, size_t n) | Scans memory for byte c |
| ft_memcmp      | int ft_memcmp(const void *s1, const void *s2, size_t n) | Compares two memory areas |
| ft_strnstr     | char *ft_strnstr(const char *haystack, const char *needle, size_t len) | Finds substring within len |
| ft_atoi        | int ft_atoi(const char *nptr)          | Converts string to integer |
| ft_calloc      | void *ft_calloc(size_t nmemb, size_t size) | Allocates zero-initialized memory |
| ft_strdup      | char *ft_strdup(const char *s)         | Duplicates a string |

---

## Part 2 – Additional Functions
| Function        | Prototype                              | Description |
|----------------|----------------------------------------|-------------|
| ft_substr      | char *ft_substr(const char *s, unsigned int start, size_t len) | Extracts substring from s |
| ft_strjoin     | char *ft_strjoin(const char *s1, const char *s2) | Joins two strings |
| ft_strtrim     | char *ft_strtrim(const char *s1, const char *set) | Trims characters from start and end |
| ft_split       | char **ft_split(const char *s, char c) | Splits string into array using delimiter |
| ft_itoa        | char *ft_itoa(int n)                   | Converts integer to string |
| ft_strmapi     | char *ft_strmapi(const char *s, char (*f)(unsigned int, char)) | Applies function to each char (new string) |
| ft_striteri    | void ft_striteri(char *s, void (*f)(unsigned int, char*)) | Applies function to each char (in-place) |
| ft_putchar_fd  | void ft_putchar_fd(char c, int fd)     | Writes character to file descriptor |
| ft_putstr_fd   | void ft_putstr_fd(char *s, int fd)     | Writes string to file descriptor |
| ft_putendl_fd  | void ft_putendl_fd(char *s, int fd)    | Writes string with newline to fd |
| ft_putnbr_fd   | void ft_putnbr_fd(int n, int fd)       | Writes integer to file descriptor |

---

## Part 3 – Linked List Functions

| Function        | Prototype                              | Description |
|----------------|----------------------------------------|-------------|
| ft_lstnew      | t_list *ft_lstnew(void *content)       | Creates new list node |
| ft_lstadd_front| void ft_lstadd_front(t_list **lst, t_list *new) | Adds node at beginning |
| ft_lstsize     | int ft_lstsize(t_list *lst)            | Counts number of nodes |
| ft_lstlast     | t_list *ft_lstlast(t_list *lst)        | Returns last node |
| ft_lstadd_back | void ft_lstadd_back(t_list **lst, t_list *new) | Adds node at end |
| ft_lstdelone   | void ft_lstdelone(t_list *lst, void (*del)(void*)) | Takes a node as parameter and frees its content using the function ’del’. Free the node itself but does NOT free the next node. |
| ft_lstclear    | void ft_lstclear(t_list **lst, void (*del)(void*)) | Deletes entire list |
| ft_lstiter     | void ft_lstiter(t_list *lst, void (*f)(void *)) | Iterates through the list ’lst’ and applies the function ’f’ to the content of each node. |
| ft_lstmap      | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) | Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new ist resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed. |

---

## Resources

### Documentation & references

- [cppreference.com](https://en.cppreference.com/w/c)
- [man pages online — Linux man-pages project](https://man7.org/linux/man-pages/)
- [Stack Overflow](https://stackoverflow.com/)
- [libc source code](https://github.com/openbsd/src/tree/master/lib/libc)