gcc -Werror -Wextra -Wall -c *.c
ar cr libft.a *.o
rm -f *.o
ranlib libft.a