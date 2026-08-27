#include<stdio.h>
main() 
{
    char fullName[50];
    char username[6];
    int i;

    printf("Enter your full name: ");
    scanf("%s", fullName);

    for (i=0;i<5;i++) 
	{
        if (fullName[i]==0) 
		{
            break;
        }
        username[i]=fullName[i];
    }
    printf("Generated Username:%s\n",username);
}
