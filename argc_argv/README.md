Tasks
0. It ain't what they call you, it's what you answer to
mandatory
Write a program that prints its name, followed by a new line.

If you rename the program, it will print the new name, without having to compile it again
You should not remove the path before the name of the program
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: argc_argv
File: 0-whatsmyname.c
  
0/7 pts
1. Silence is argument carried out by other means
mandatory
Write a program that prints the number of arguments passed into it.

Your program should print a number, followed by a new line
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/argc, argv$ ./nargs 
0
julien@ubuntu:~/argc, argv$ ./nargs hello
1
julien@ubuntu:~/argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: argc_argv
File: 1-args.c
  
0/7 pts
2. The best argument against democracy is a five-minute conversation with the average voter
mandatory
Write a program that prints all arguments it receives.

All arguments should be printed, including the first one
Only print one argument per line, ending with a new line
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/argc, argv$ ./args 
./args
julien@ubuntu:~/argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: argc_argv
File: 2-args.c
  
0/7 pts
3. Neither irony nor sarcasm is argument
mandatory
Write a program that multiplies two numbers.

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/argc, argv$ ./mul 2 3
6
julien@ubuntu:~/argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/argc, argv$ ./mul 2 0
0
julien@ubuntu:~/argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/argc, argv$ ./mul
Error
julien@ubuntu:~/argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: argc_argv
File: 3-mul.c
  
0/8 pts
4. To infinity and beyond
mandatory
Write a program that adds positive numbers.

Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored in an int
julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/argc, argv$ ./add 1 1
2
julien@ubuntu:~/argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/argc, argv$ ./add
0
julien@ubuntu:~/argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: argc_argv
File: 4-add.c
