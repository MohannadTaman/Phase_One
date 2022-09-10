#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
char c1[50];
char c2[50];
char c3[50];
char c4[50];
printf("please enter a color: ");
scanf("%s" , c1);
printf("please enter a plural: ");
scanf("%s" , c2);
printf("please enter a celebrityFirstName: ");
scanf("%s" , c3);
printf("please enter a celebrityLastName: ");
scanf("%s" , c4);
printf("i love color %s \n" , c1);
printf("%s is black \n" , c2);
printf("my favorite actor is %s %s \n" , c3 , c4);

return 0;
}