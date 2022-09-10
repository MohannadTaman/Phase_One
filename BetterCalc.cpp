#include <stdio.h>
#include <math.h>

using namespace std;

double add(double x, double y){

double result;
result = x + y;
return result;

}
double sub(double x, double y){

double result;
result = x - y;
return result;

}
double mul(double x, double y){

double result;
result = x * y;
return result;

}
double div(double x, double y){

double result;
result = x / y;
return result;

}
double log_(double x, double y){

double result;
x = log2(y);
y = log2(y);
result = x/y;
return result;

}
double power(double x1 , double y2){
return pow(x1 , y2);}
double factorial(double x){

for(int i=x-1; i>0; i--){
    x*=i;
}
return x;

}

int main(){

    char operation;
    double x, y, res;

   printf("Enter the fitsr Num: ");
    scanf("%lf" , &x);
    printf("Ener sec Number: ");
    scanf("%lf" , &y);
    printf( "Enter the type of op ");
    scanf("%lf" , &operation);

    switch (operation)
    {
    case '+':
        res = add(x,y);
        break;
    
    case '-':
        res = sub(x,y);
        break;
    
    case '*':
        res = mul(x,y);
        break;
    
    case '/':
        res = div(x,y);
        break;
    
    case '^':
        res = power(x,y);
        break;

    case '!':
        res = factorial(x);
        break;
    
    case 'g':
        res = log_(x,y);
        break;

    default:
         printf("Invalid");
        break;
    }

    printf("result: %lf" , res);

    return 0;
}