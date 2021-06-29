// Age for casting vote
#include<stdio.h>

int main()
{
    int age;
    printf("Enter the age of the person\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Yes the person is eligible for casting vote\n");
    }
    else{
        printf("NO he is not eligible \n");
    }
}