#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
int sn= 5;
int guess;
int gc=0;
int gl=3;
int done=0;
while(guess!=sn && done == 0)
{
    if(gc < gl){

    
    printf("enter number: ");
scanf("%d", &guess);
gc++;
    }
    else{
        done=1;
    }
}
if(done == 1)
{
    printf("out of guessses");
}
else{
    printf("you win");
}
return 0;
}