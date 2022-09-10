#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
double arr[20];
double sum=0;
printf("please enter total numbers: ");
int n;
scanf("%d" , &n);
for(int i=0; i<n; i++){
    scanf("%lf" , &arr[i]);
}
for (int i = 0; i < n; i++)
{
   sum+=arr[i];
}
double average = sum/n;
printf("\n sum = %lf and average = %lf" , sum , average);
return 0;
}