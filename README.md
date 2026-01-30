# Intro
This is the first and only project of milestone 0 of 42Beirut's curriculum.
In it, I created a library called libft that reimplements various functions 
from the standard C library as well as other useful functions from libraries such as BSD.

# Skills demonstrated
- C programming (pointers, memory management, structs, string manipulation...)
- Understanding of standard C library functions
- Makefile usage
- Adherence to 42 Norm coding standards/practices.

# How to run
> **Note:** This project assumes a Linux environment. It won't work on Windows.
## Main functions
1. Clone this repo in your working directory.
2. Run `make all`
3. Add your .c source file that includes main (we'll call it main.c). Don't forget to include "libft.h" in it to use the functions in the library.
4. Run `cc main.c libft.a -o my_program`
5. Run `./my_program`

## Bonus functions
Same steps as in the **main functions** section, except in step 2, run `make bonus`.

## Main + bonus functions
Same steps as in the **main functions** section, except in step 2, run `make all bonus`.

# Cleanup
After compiling the library, you can run
1. `make clean` to delete all .o files created previously (This keeps libft.a)
2. `make fclean` to delete all .o files created previously and libft.a
3. `make re` as a shortcut for "make fclean" followed by "make all"

# List of functions
  ## Main functions
    - ft_tolower
    - ft_toupper
    - ft_isprint
    - ft_isascii
    - ft_isalnum
    - ft_isdigit
    - ft_isalpha
    - ft_atoi
    - ft_strlen
    - ft_strlcat
    - ft_strncmp
    - ft_strdup
    - ft_calloc
    - ft_memcpy
    - ft_strchr
    - ft_strrchr
    - ft_strnstr
    - ft_bzero
    - ft_memchr
    - ft_memcmp
    - ft_memset
    - ft_memmove
    - ft_strlcpy
    - ft_substr
    - ft_strjoin
    - ft_itoa
    - ft_split
    - ft_strtrim
    - ft_strmapi
    - ft_striteri
    - ft_putchar_fd
    - ft_putstr_fd
    - ft_putendl_fd
    - ft_putnbr_fd
  ## Bonus functions
    - ft_lstnew_bonus
    - ft_lstadd_front_bonus
    - ft_lstsize_bonus
    - ft_lstlast_bonus
    - ft_lstadd_back_bonus
    - ft_lstdelone_bonus
    - ft_lstclear_bonus
    - ft_lstiter_bonus
    - ft_lstmap_bonus
