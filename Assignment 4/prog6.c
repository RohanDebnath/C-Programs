    // 1 + 11 + 111 + 1111 .... n 
    #include<stdio.h>
    int main()
    {
        int n ,a = 1, sum = 0;
        printf("Enter your N term\n");
        scanf("%d",&n);
        for (int i = 1; i <= n; i++)
        {
            sum = sum +a;
            printf(" %d ",a);
            a = (a*10) +1;
            if(i<n)
            {
            printf("+");
            }
        }
        printf("\nThe Sum upto %d term is %d",n, sum);
    }