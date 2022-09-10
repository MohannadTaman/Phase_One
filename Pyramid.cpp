#include <stdio.h>  
int main()  
{  
      
    int i, j, h, k = 0;  
    printf("enter height: ");
    scanf ("%d", &h);   
    if(h>=2 && h<=5)
    {
	
    for ( i =1; i <= h; i++)  
    {   
        for ( j = 1; j <= h - i; j++)  
        {  
            printf ("  ");   
        }  
        for ( k = 1; k <= (i*2) - 1; k++)  
        {  
            printf ("* "); 
        }  
        printf ("\n");  
    }  
}
else printf("Please enter a number between 2 and 5");
return 0;
}  

/*             
                        *
                       ***
					  *****
					 *******
					*********    
*/