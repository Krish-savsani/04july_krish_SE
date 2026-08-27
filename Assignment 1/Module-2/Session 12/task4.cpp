#include<stdio.h>
struct Bio 
{
    char description[100];
    int age;
};

struct InstaProfile 
{
    char username[50];
    int followers;
    struct Bio bio;
};
main() 
{
    struct InstaProfile myProfile= 
	{
        "gemini_ai",
        1000000,
        {"AI built by Google",2}
    };
    printf("=== Instagram Profile ===\n");
    printf("Username: %s\n",myProfile.username);
    printf("Followers: %d\n",myProfile.followers);
    printf("Bio Description: %s\n",myProfile.bio.description);
    printf("Bio Age: %d\n",myProfile.bio.age);
}
