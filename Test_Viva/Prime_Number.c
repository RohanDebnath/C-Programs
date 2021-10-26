//prime_number_in _range

#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter your range \n");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i++)
    {
        c=0;
        for (int  j=1; j <=i; j++)
        {
            if(i%j==0){
                c++;
            }
        }
        if(c==2)
        {
            printf("The number %d is a prime number \n", i);
        }
        else
        {
            printf("No %d is not a prime number\n",i);
        }
    }
    return 0;
}