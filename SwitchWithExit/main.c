#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main()
{

    //Menu Driven Program using Switch

    int choice;
    int a,b,c;
    int a1, b1, c1;
    int a2;
    int b3;
    int number, remainder;
    //const int MONTHS = 12;
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    int leftshift;
    int rightshift;
    int a4, b4, c4;


    while(1){
        printf("\nEnter your choice");
        printf("\nPress 1. for Addition");
        printf("\nPress 2. for Modulus");
        printf("\nPress 3. for Pre-Increment");
        printf("\nPress 4. for Post-Decrement");
        printf("\nPress 5. for Even-Odd");
        printf("\nPress 6. for Months-Days");
        printf("\nPress 7. for Left Shift");
        printf("\nPress 8. for Right Shift");
        printf("\nPress 9. for X-OR");
        printf("\nPress 10. for Exit \n\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:



            printf("Enter value for a");
            scanf("%d",&a);

            printf("Enter value for b");
            scanf("%d",&b);

            c = a + b;

            printf("\nAddition is: %d\n\n", c);

            break;

        case 2:


            printf("Enter value for a");
            scanf("%d",&a1);

            printf("Enter value for b");
            scanf("%d",&b1);

            c1 = a1 % b1;

            printf("\nModulus is: %d\n\n", c1);

            break;

        case 3:


            printf("Enter value for a");
            scanf("%d",&a2);

            printf("\nPre-Increment is: %d\n\n", ++a2);

            break;

        case 4:


            printf("Enter value for a");
            scanf("%d",&b3);

            printf("\nPost-Decrement is: %d\n\n", b3--);

            break;


        case 5:


            printf("Enter any value");
            scanf("%d",&number);

            remainder = number % 2;

            (remainder == 0) ? printf("Number is Even\n\n") : printf("Number is Odd\n\n");

            break;

        case 6:

            for(index = 0; index<MONTHS; index++)
                printf("Month %d has %d days.\n\n", index+1, days[index]);

            break;

        case 7:


            printf("Enter any value");
            scanf("%d", &leftshift);

            printf("\nLeftShift is: %d\n\n", leftshift<<1);

            break;

        case 8:


            printf("Enter any value");
            scanf("%d", &rightshift);

            printf("\nRightShift is: %d\n\n", rightshift>>1);

            break;

        case 9:


            printf("Enter value for a");
            scanf("%d",&a4);

            printf("Enter value for b");
            scanf("%d",&b4);

            c4 = a4 ^ b4;

            printf("\nX-OR is: %d\n\n", c4);

            break;

        case 10:
            exit(0);

        default:
            printf("You Entered Wrong Choice");

        }
    }
    return 0;
}
