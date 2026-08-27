#include<stdio.h>
int isEven(int num) 
{
    int remainder=num % 2;
    int result=1;
    int i;
    
    for (i=0;i<remainder;i++) 
	{
        result = 0;
    }
    
    return result;
}
main() 
{
    int number = 4;
    printf("Result: %d\n", isEven(number));
}
