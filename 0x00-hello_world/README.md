Exercises for 0x00-hello_world. Day  of C.

Task 0: gcc -E $CFILE -o c = script that runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable ```$CFILE```. The output should be saved in the file ```c```.

Task 1: gcc -c $CFILE = script that compiles a C file but does not link. The C file name will be saved in the variable ```$CFILE```. The output file should be named the same as the C file, but with the extension ```.o``` instead of ```.c```.

Task 2: gcc -s $CFILE =  script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable ```$CFILE```. The output file should be named the same as the C file, but with the extension ```.s``` instead of ```.c```.

Task 3: gcc $CFILE -o cisfun =  script that compiles a C file and creates an executable named ```cisfun```.   

Task 4: #include <stdio.h>
/**
* main - should print exactly "Programming is like building a multilingual puzzle
* return:0 program should end with the value 0
*/
int main(void)
{
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
} = Write a C program that prints exactly ```"Programming is like building a multilingual puzzle```, followed by a new line.

Task 5:
#include <stdio.h>
/**
 * main - should print the phrase
 * with proper grammar, but the outcome is a piece of art,
 * Return: 0
 */
int main(void)
{
        printf("with proper grammar, but the outcome is a piece of art,\n");
        return (0);
} = Write a C program that prints exactly ```with proper grammar, but the outcome is a piece of art,```, followed by a new line 

Task 6:
#include <stdio.h>
/**
 * main - Entry point
 * Description - a C program that prints the size of various types on
 * the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
        printf("Size of a char: %i byte(s)\n", sizeof(char));
        printf("Size of an int: %i byte(s)\n", sizeof(int));
        printf("Size of a long int: %i byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
        printf("Size of a float: %i byte(s)\n", sizeof(float));
        return (0);
} = Write a C program that prints the size of various types on the computer it is compiled and run on.

Task 7: gcc -S -masm=intel $CFILE =  script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

Task 8:
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description - a C program that prints exactly
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: 1
 */
int main(void)
{
        int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

        write(2,
              "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
              s);
        return (1);
} = Write a C program that prints exactly ```and that piece of art is useful" - Dora Korpar, 2015-10-19```, followed by a new line, to the standard error. 


Submitting the above task has an error of Betty coding style because the line 12 had more than 80 characters and that was above the prefered limit. So instead of that, the code was revised to this;
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
