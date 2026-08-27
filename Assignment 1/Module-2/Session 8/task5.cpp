#include<stdio.h>
void capitalizeFirst(char str[]) 
{
    if (str[0]>='a'&&str[0]<='z') 
	{
        str[0]=str[0]-32;
    }
}
main() 
{
    char product[] = "laptop";
    char username[] = "rahul";
    capitalizeFirst(product);
    capitalizeFirst(username);
    printf("%s\n", product);
    printf("%s\n", username);
}
