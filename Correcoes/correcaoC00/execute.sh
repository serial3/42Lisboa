echo -------------- Norminette --------------
echo "\n- - - - - - - - - - - "
norminette -R CheckForbiddenSourceHeader
echo "\n- - - - - - - - - - -00- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra ex00/ft_putchar.c  main00.c  && ./a.out
echo "\n- - - - - - - - - - -01- - - - - - - - - - - -"
gcc -Wall -Werror -Wextra ex01/ft_print_alphabet.c  main01.c  && ./a.out
echo "\n- - - - - - - - - - -02- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra ex02/ft_print_reverse_alphabet.c  main02.c  && ./a.out
echo "\n- - - - - - - - - - -03- - - - - - - - - - - -"
gcc -Wall -Werror -Wextra ex03/ft_print_numbers.c  main03.c  && ./a.out
echo "\n- - - - - - - - - - -04- - - - - - - - - - - -"
gcc -Wall -Werror -Wextra ex04/ft_is_negative.c  main04.c  && ./a.out
echo "\n- - - - - - - - - - -05- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra ex05/ft_print_comb.c  main05.c  && ./a.out
echo "\n- - - - - - - - - - -06- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra ex06/ft_print_comb2.c  main06.c  && ./a.out
echo "\n- - - - - - - - - - -07- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra ex07/ft_putnbr.c  main07.c  && ./a.out
echo  "\n- - - - - - - - - - -08- - - - - - - - - - - - "
gcc -Wall -Werror -Wextra ex08/ft_print_combn.c  main08.c  && ./a.out



