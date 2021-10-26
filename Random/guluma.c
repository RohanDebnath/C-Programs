#include <stdio.h>

int main()
{
    int maths, science;
    printf("Enter your marks in maths\n");
    scanf("%d", &maths);

    printf("Enter your marks in science\n");
    scanf("%d", &science);

    printf("You have entered %d for maths and %d for science\n", maths, science);

    if ((maths > 20) && (science > 20))
    {
        printf("You will get Rs45 as gift");
    }
    else if (maths > 20)
    {
        printf("you will get Rs15 as gift");
    }
    else if (science > 20)
    {
        printf("you will get Rs15 as gift");
    }
    else
    {
        printf("you are not applicable for any of the gifts");
    }

    return 0;
}