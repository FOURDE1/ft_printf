# Libft - A Custom C Library

## Introduction

`libft` is a custom C library that implements a variety of standard functions from the C standard library, as well as additional utility functions that can be useful in various projects. This README serves as a quick reference guide to understand the purpose, parameters, and return values of each function.

---

## Part 1: Libc Functions

### 1. `ft_memset`
- **Description**: Fills a block of memory with a specified value.
- **Prototype**: `void *ft_memset(void *b, int c, size_t len);`
- **Parameters**:
  - `b`: Pointer to the memory area to fill.
  - `c`: Value to set.
  - `len`: Number of bytes to fill.
- **Returns**: Pointer to the memory area `b`.

### 2. `ft_bzero`
- **Description**: Sets all bytes in a memory area to zero.
- **Prototype**: `void ft_bzero(void *s, size_t n);`
- **Parameters**:
  - `s`: Pointer to the memory area.
  - `n`: Number of bytes to set to zero.
- **Returns**: None.

### 3. `ft_memcpy`
- **Description**: Copies `n` bytes from memory area `src` to `dest`.
- **Prototype**: `void *ft_memcpy(void *dest, const void *src, size_t n);`
- **Parameters**:
  - `dest`: Destination memory area.
  - `src`: Source memory area.
  - `n`: Number of bytes to copy.
- **Returns**: Pointer to `dest`.

### 4. `ft_memmove`
- **Description**: Copies `n` bytes from `src` to `dest`, handling overlap.
- **Prototype**: `void *ft_memmove(void *dest, const void *src, size_t len);`
- **Parameters**:
  - `dest`: Destination memory area.
  - `src`: Source memory area.
  - `len`: Number of bytes to copy.
- **Returns**: Pointer to `dest`.

### 5. `ft_memchr`
- **Description**: Locates the first occurrence of `c` in the first `n` bytes of `s`.
- **Prototype**: `void *ft_memchr(const void *s, int c, size_t n);`
- **Parameters**:
  - `s`: Pointer to the memory area.
  - `c`: Character to locate.
  - `n`: Number of bytes to search.
- **Returns**: Pointer to the located byte, or `NULL` if not found.

### 6. `ft_memcmp`
- **Description**: Compares the first `n` bytes of `s1` and `s2`.
- **Prototype**: `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- **Parameters**:
  - `s1`, `s2`: Memory areas to compare.
  - `n`: Number of bytes to compare.
- **Returns**: Negative, zero, or positive integer depending on the comparison.

### 7. `ft_strlen`
- **Description**: Returns the length of the string `s`.
- **Prototype**: `size_t ft_strlen(const char *s);`
- **Parameters**:
  - `s`: Pointer to the string.
- **Returns**: Length of the string.

### 8. `ft_strlcpy`
- **Description**: Copies up to `size - 1` characters from `src` to `dst`, null-terminating the result.
- **Prototype**: `size_t ft_strlcpy(char *dst, const char *src, size_t size);`
- **Parameters**:
  - `dst`: Destination buffer.
  - `src`: Source string.
  - `size`: Size of the destination buffer.
- **Returns**: Total length of the string `src` tried to create.

### 9. `ft_strlcat`
- **Description**: Appends `src` to `dst`, null-terminating the result, respecting `size`.
- **Prototype**: `size_t ft_strlcat(char *dst, const char *src, size_t size);`
- **Parameters**:
  - `dst`: Destination buffer.
  - `src`: Source string.
  - `size`: Size of the destination buffer.
- **Returns**: Total length of the string `src` tried to create.

### 10. `ft_strchr`
- **Description**: Locates the first occurrence of `c` in the string `s`.
- **Prototype**: `char *ft_strchr(const char *s, int c);`
- **Parameters**:
  - `s`: Pointer to the string.
  - `c`: Character to locate.
- **Returns**: Pointer to the located character, or `NULL` if not found.

### 11. `ft_strrchr`
- **Description**: Locates the last occurrence of `c` in the string `s`.
- **Prototype**: `char *ft_strrchr(const char *s, int c);`
- **Parameters**:
  - `s`: Pointer to the string.
  - `c`: Character to locate.
- **Returns**: Pointer to the located character, or `NULL` if not found.

### 12. `ft_strncmp`
- **Description**: Compares up to `n` characters of the strings `s1` and `s2`.
- **Prototype**: `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- **Parameters**:
  - `s1`, `s2`: Strings to compare.
  - `n`: Maximum number of characters to compare.
- **Returns**: Negative, zero, or positive integer depending on the comparison.

### 13. `ft_strnstr`
- **Description**: Locates the first occurrence of `needle` in `haystack`, searching at most `len` bytes.
- **Prototype**: `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
- **Parameters**:
  - `haystack`: String to search in.
  - `needle`: Substring to search for.
  - `len`: Maximum length to search.
- **Returns**: Pointer to the beginning of the located substring, or `NULL` if not found.

### 14. `ft_atoi`
- **Description**: Converts the string `str` to an integer.
- **Prototype**: `int ft_atoi(const char *str);`
- **Parameters**:
  - `str`: String to convert.
- **Returns**: The integer value.

### 15. `ft_isalpha`
- **Description**: Checks if the character `c` is alphabetic.
- **Prototype**: `int ft_isalpha(int c);`
- **Parameters**:
  - `c`: Character to check.
- **Returns**: `1` if true, `0` otherwise.

### 16. `ft_isdigit`
- **Description**: Checks if the character `c` is a digit (0-9).
- **Prototype**: `int ft_isdigit(int c);`
- **Parameters**:
  - `c`: Character to check.
- **Returns**: `1` if true, `0` otherwise.

### 17. `ft_isalnum`
- **Description**: Checks if the character `c` is alphanumeric.
- **Prototype**: `int ft_isalnum(int c);`
- **Parameters**:
  - `c`: Character to check.
- **Returns**: `1` if true, `0` otherwise.

### 18. `ft_isascii`
- **Description**: Checks if the character `c` is an ASCII character (0-127).
- **Prototype**: `int ft_isascii(int c);`
- **Parameters**:
  - `c`: Character to check.
- **Returns**: `1` if true, `0` otherwise.

### 19. `ft_isprint`
- **Description**: Checks if the character `c` is printable.
- **Prototype**: `int ft_isprint(int c);`
- **Parameters**:
  - `c`: Character to check.
- **Returns**: `1` if true, `0` otherwise.

### 20. `ft_toupper`
- **Description**: Converts lowercase letter `c` to uppercase.
- **Prototype**: `int ft_toupper(int c);`
- **Parameters**:
  - `c`: Character to convert.
- **Returns**: Uppercase equivalent if `c` is lowercase, otherwise returns `c`.

### 21. `ft_tolower`
- **Description**: Converts uppercase letter `c` to lowercase.
- **Prototype**: `int ft_tolower(int c);`
- **Parameters**:
  - `c`: Character to convert.
- **Returns**: Lowercase equivalent if `c` is uppercase, otherwise returns `c`.

### 22. `ft_calloc`
- **Description**: Allocates and zeroes out memory for an array of `count` elements of `size` bytes each.
- **Prototype**: `void *ft_calloc(size_t count, size_t size);`
- **Parameters**:
  - `count`: Number of elements.
  - `size`: Size of each element.
- **Returns**: Pointer to the allocated memory, or `NULL` if allocation fails.

### 23. `ft_strdup`
- **Description**: Duplicates the string `s1`.
- **Prototype**: `char *ft_strdup(const char *s1);`
- **Parameters**:
  - `s1`: String to duplicate.
- **Returns**: Pointer to the duplicated string, or `NULL` if allocation fails.

---

## Part 2: Additional Functions

### 24. `ft_substr`
- **Description**: Extracts a substring from the string `s`, starting at index `start` and of maximum length `len`.
- **Prototype**: `char *ft_substr(char const *s, unsigned int start, size_t len);`
- **Parameters**:
  - `s`: Source string.
  - `start`: Start index.
  - `len`: Maximum length of the substring.
- **Returns**: Pointer to the substring, or `NULL` if allocation fails.

### 25. `ft_strjoin`
- **Description**: Concatenates the strings `s1` and `s2` into a new string.
- **Prototype**: `char *ft_strjoin(char const *s1, char const *s2);`
- **Parameters**:
  - `s1`: First string.
  - `s2`: Second string.
- **Returns**: Pointer to the concatenated string, or `NULL` if allocation fails.

### 26. `ft_strtrim`
- **Description**: Trims the characters in `set` from both ends of the string `s1`.
- **Prototype**: `char *ft_strtrim(char const *s1, char const *set);`
- **Parameters**:
  - `s1`: String to trim.
  - `set`: Set of characters to trim.
- **Returns**: Pointer to the trimmed string, or `NULL` if allocation fails.

### 27. `ft_split`
- **Description**: Splits the string `s` into an array of substrings using the character `c` as a delimiter.
- **Prototype**: `char **ft_split(char const *s, char c);`
- **Parameters**:
  - `s`: Source string.
  - `c`: Delimiter character.
- **Returns**: Pointer to the array of substrings, or `NULL` if allocation fails.

### 28. `ft_itoa`
- **Description**: Converts the integer `n` to a string.
- **Prototype**: `char *ft_itoa(int n);`
- **Parameters**:
  - `n`: Integer to convert.
- **Returns**: Pointer to the string representation of `n`, or `NULL` if allocation fails.

### 29. `ft_strmapi`
- **Description**: Applies the function `f` to each character of the string `s` to create a new string.
- **Prototype**: `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- **Parameters**:
  - `s`: Source string.
  - `f`: Function to apply.
- **Returns**: Pointer to the new string, or `NULL` if allocation fails.

### 30. `ft_striteri`
- **Description**: Applies the function `f` to each character of the string `s`, passing its index as the first argument.
- **Prototype**: `void ft_striteri(char *s, void (*f)(unsigned int, char *));`
- **Parameters**:
  - `s`: Source string.
  - `f`: Function to apply.
- **Returns**: None.

### 31. `ft_putchar_fd`
- **Description**: Outputs the character `c` to the file descriptor `fd`.
- **Prototype**: `void ft_putchar_fd(char c, int fd);`
- **Parameters**:
  - `c`: Character to output.
  - `fd`: File descriptor.
- **Returns**: None.

### 32. `ft_putstr_fd`
- **Description**: Outputs the string `s` to the file descriptor `fd`.
- **Prototype**: `void ft_putstr_fd(char *s, int fd);`
- **Parameters**:
  - `s`: String to output.
  - `fd`: File descriptor.
- **Returns**: None.

### 33. `ft_putendl_fd`
- **Description**: Outputs the string `s` to the file descriptor `fd`, followed by a newline.
- **Prototype**: `void ft_putendl_fd(char *s, int fd);`
- **Parameters**:
  - `s`: String to output.
  - `fd`: File descriptor.
- **Returns**: None.

### 34. `ft_putnbr_fd`
- **Description**: Outputs the integer `n` to the file descriptor `fd`.
- **Prototype**: `void ft_putnbr_fd(int n, int fd);`
- **Parameters**:
  - `n`: Integer to output.
  - `fd`: File descriptor.
- **Returns**: None.

---

## Part 3: Bonus Functions (Linked List Functions)

### 35. `ft_lstnew`
- **Description**: Allocates and returns a new node for a linked list with content initialized to `content`.
- **Prototype**: `t_list *ft_lstnew(void *content);`
- **Parameters**:
  - `content`: Content to initialize.
- **Returns**: Pointer to the new node, or `NULL` if allocation fails.

### 36. `ft_lstadd_front`
- **Description**: Adds the node `new` at the beginning of the linked list `lst`.
- **Prototype**: `void ft_lstadd_front(t_list **lst, t_list *new);`
- **Parameters**:
  - `lst`: Pointer to the head of the list.
  - `new`: New node to add.
- **Returns**: None.

### 37. `ft_lstsize`
- **Description**: Counts the number of nodes in the linked list `lst`.
- **Prototype**: `int ft_lstsize(t_list *lst);`
- **Parameters**:
  - `lst`: Head of the list.
- **Returns**: Number of nodes.

### 38. `ft_lstlast`
- **Description**: Returns the last node of the linked list `lst`.
- **Prototype**: `t_list *ft_lstlast(t_list *lst);`
- **Parameters**:
  - `lst`: Head of the list.
- **Returns**: Last node of the list.

### 39. `ft_lstadd_back`
- **Description**: Adds the node `new` at the end of the linked list `lst`.
- **Prototype**: `void ft_lstadd_back(t_list **lst, t_list *new);`
- **Parameters**:
  - `lst`: Pointer to the head of the list.
  - `new`: New node to add.
- **Returns**: None.

### 40. `ft_lstdelone`
- **Description**: Frees the memory of the node `lst`'s content using the function `del`, and then frees the node itself.
- **Prototype**: `void ft_lstdelone(t_list *lst, void (*del)(void *));`
- **Parameters**:
  - `lst`: Node to delete.
  - `del`: Function to free content.
- **Returns**: None.

### 41. `ft_lstclear`
- **Description**: Deletes and frees the nodes of the linked list `lst` and sets the list's head to `NULL`.
- **Prototype**: `void ft_lstclear(t_list **lst, void (*del)(void *));`
- **Parameters**:
  - `lst`: Pointer to the head of the list.
  - `del`: Function to free content.
- **Returns**: None.

### 42. `ft_lstiter`
- **Description**: Iterates through the list `lst` and applies the function `f` to each node's content.
- **Prototype**: `void ft_lstiter(t_list *lst, void (*f)(void *));`
- **Parameters**:
  - `lst`: Head of the list.
  - `f`: Function to apply.
- **Returns**: None.

### 43. `ft_lstmap`
- **Description**: Iterates through the list `lst`, applies the function `f` to each node's content, and creates a new list from the results. The `del` function is used to free the content if needed.
- **Prototype**: `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
- **Parameters**:
  - `lst`: Head of the list.
  - `f`: Function to apply.
  - `del`: Function to free content if needed.
- **Returns**: New list, or `NULL` if allocation fails.

---

## Conclusion

This `libft` library is designed to be a flexible and foundational set of utilities that can be reused across various projects. Each function is carefully crafted to meet the requirements of common C programming tasks, with additional functionality provided in the bonus section for handling linked lists. For detailed usage and examples, please refer to individual function documentation.

