#include<stdio.h>
#include<string.h>
union rohan
{
    float page; // Ask sir 
    float number;
    char c1[29];
};

int main()
{
    union rohan s1;
    s1.page=79;
    s1.number=99.3948;
//    s1.c1='roh';
    printf("%f\n",s1.number);
    strcpy(s1.c1,"Rohan");
    printf("%s\n",s1.c1);
    printf("%f\n", s1.page);
}