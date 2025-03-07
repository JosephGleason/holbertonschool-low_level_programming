Tasks
0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
mandatory
Write a function that prints a string, followed by a new line.

Prototype: void _puts_recursion(char *s);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

julien@ubuntu:~/Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/Recursion$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: recursion
File: 0-puts_recursion.c
  
0/7 pts
1. Why is it so important to dream? Because, in my dreams we are together
mandatory
Write a function that prints a string in reverse.

Prototype: void _print_rev_recursion(char *s);
julien@ubuntu:~/Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/Recursion$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: recursion
File: 1-print_rev_recursion.c
  
0/7 pts
2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
mandatory
Write a function that returns the length of a string.

Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

julien@ubuntu:~/Recursion$ cat 2-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/Recursion$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: recursion
File: 2-strlen_recursion.c
  
0/7 pts
3. You mustn't be afraid to dream a little bigger, darling
mandatory
Write a function that returns the factorial of a given number.

Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1
julien@ubuntu:~/Recursion$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/Recursion$
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: recursion
File: 3-factorial.c
  
0/7 pts
4. Once an idea has taken hold of the brain it's almost impossible to eradicate
mandatory
Write a function that returns the value of x raised to the power of y.

Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1
FYI: The standard library provides a different function: pow. Run man pow to learn more.

julien@ubuntu:~/Recursion$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/Recursion$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: recursion
File: 4-pow_recursion.c
  
0/7 pts
5. Your subconscious is looking for the dreamer
mandatory
Write a function that returns the natural square root of a number.

Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

julien@ubuntu:~/Recursion$ cat 5-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/Recursion$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: recursion
File: 5-sqrt_recursion.c
  
0/7 pts
6. Inception. Is it possible?
mandatory
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

Prototype: int is_prime_number(int n);
julien@ubuntu:~/Recursion$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/Recursion$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: recursion
File: 6-is_prime_number.c
