#include <stdio.h>
  
//function for calculating factorial which takes an integer value as a parameter and returns an int type value
long factorial(int num)     
{
  int i;
  long fact = 1;
  
            for (i = 1; i <= num; i++)
            fact = fact * i;
           //returns to function call
               return fact;       
}
            //execution begins from main() method 
            int main()                                          
        {
            int num;
  
            printf("Enter a number to calculate its factorial");
            scanf("%d", &num);

            //if the input is a negative integer
            if(num<0)                                            
        {

        printf("Factorial is not defined for negative numbers.");

        }
        //call to factorial function passing  the input as parameter

        printf("Factorial of %d = %d", num, factorial(num));                                
        return 0;
}