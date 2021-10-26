// Printing all unique element of array
#include <stdio.h>
int main()
{
    int arr[20], freq[20];
    int n, c = 0;
    printf("Select the Number of element which you want to have in array \n");
    printf("Please Note the Maxminum Number of elements should be 20 \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Select the %d elemnt of the Array \n", i + 1);
        scanf("%d", &arr[i]);
    }
  
  for(int i=0; i<n; i++)
    {
        c=1;
        if(arr[i]!=-1)
		{
		    for(int j=i+1; j<n; j++)
           {
        	   if(arr[i]==arr[j])
        	    {
			       c++;
			       arr[j]=-1;
		       }
	       }
	       freq[i]=c;
		}
                  
    }  
 printf("unique numbers in the  array :\n");         
 for(int i=0; i<n; i++)
    {
         if(arr[i]!=-1)
        {
        	if(freq[i]==1)
        	printf("%d\n",arr[i]);
		} 
    }    
}