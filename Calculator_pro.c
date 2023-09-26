#include <stdio.h>  
int main()  
{  
    // declare local variables  
    char op;  
    int n1, n2;   
    float res;  
    printf (" Choose an opetation:\n ");  
    scanf ("%c", &op);  
    /*if (op == '/' )  
    {  
        printf ("Division");  
    }  
    else if (op == '*')  
    {  
        printf ("Multiplication");  +
     }  
       
    else if (op == '-')  
    {  
        printf ("Subtraction");  
     }  
        else if (op == '+')  
    {  
        printf ("Addition");  
     }   */  
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1);  
    printf (" Enter the second number: ");  
    scanf (" %d", &n2);  
      
    switch(op)  
    {  
        case '+':  
            res = n1 + n2;
            printf (" Answer:", res);  
            break;  
          
        case '-':  
            res = n1 - n2;
            printf (" Answer:", res);  
            break;  
              
        case '*':  
            res = n1 * n2;
            printf (" Answer:", res);  
            break;            
          
        case '/':  
            if (n2 == 0)
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            res = n1 / n2;
            printf (" Answer:", res);  
            break;  
        default:
            printf (" Something is wrong!! Please check the options ");               
    }  
    return 0;  
}