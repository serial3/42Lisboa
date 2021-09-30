echo -------------- Norminette --------------
echo "\n- - - - - - - - - - - "
norminette -R CheckForbiddenSourceHeader
echo "\n- - - - - - - - - - -00- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra  main00.c ex00/ft_strcmp.c && ./a.out
echo "\n- - - - - - - - - - -01- - - - - - - - - - - -"
gcc -Wall -Werror -Wextra  main01.c ex01/ft_strncmp.c && ./a.out
echo "\n- - - - - - - - - - -02- - - - - - - - - - - - "
 gcc -Wall -Werror -Wextra  main02.c ex02/ft_strcat.c && ./a.out | cat -e
echo "\n- - - - - - - - - - -03- - - - - - - - - - - -"
gcc -Wall -Werror -Wextra  main03.c ex03/ft_strncat.c && ./a.out | cat -e 
echo "\n- - - - - - - - - - -04- - - - - - - - - - - -"
gcc -Wall -Werror -Wextra  main04.c ex04/ft_strstr.c && ./a.out | cat -e
echo "\n- - - - - - - - - - -05- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra  main05.c ex05/ft_strlcat.c  && ./a.out | cat -e
