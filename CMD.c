#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;
    for(i=0; i<argc; i++)
        printf("Arguments are: %s\n", argv[i]);
}

/*In Main(), it has two arguments

    1. Argument Count
    2. Argument vector: Arrays of Character's pointer


    Main(4, "CMD", 3, 5, Garima)

*/


