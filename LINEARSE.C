#include<stdio.h>
//#include<conio.h>

int main()
{

int array[100], search, c , n;
//clrscr();

printf("Enter the number of elements:\n");
scanf("%d", &n);

printf("Enter %d Integers\n", n);

for(c=0; c<n; c++)
scanf("%d", &array[c]);

printf("Enter the number that you want to search:\n");
scanf("%d", &search);

for(c=0; c<n; c++)
{
if(array[c]==search)
{
printf("%d Number is found at location:%d", search, c+1);
break;
}
}

if(c==n)
printf("%d isn't found in the list", search);

//getch();

return 0;
}