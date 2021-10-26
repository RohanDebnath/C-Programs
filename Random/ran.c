#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min_sum=0,max_sum=0;
    for (int i=0; i<n; i++) {
    scanf("%d ",&arr[i]);
    }
    for (int i=0; i<n; i++) {
        max_sum=max_sum+arr[i+1];
    }
    for (int i=0; i<n-1; i++) {
        min_sum=min_sum+arr[i];
    }
    printf("%d\n",min_sum);
    printf("%d",max_sum);
}