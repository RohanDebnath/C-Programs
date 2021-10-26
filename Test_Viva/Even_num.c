#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the range : ");
    scanf("%d",&n);
    printf("Even Natural Numbers\t|\tSquares\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d\t\t\t|\t%d\n",i,(i*i));
    }
    return 0;
}