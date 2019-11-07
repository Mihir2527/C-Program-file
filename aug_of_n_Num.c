#include<stdio.h>
void main()     
{
        int n;
        float sum=0;
        printf("Enter number of elements \n");

        scanf("%d",&n);
        int a[n];
        printf(" now enter %d elements\n",n);
        for(int i=1;i<=n;i++)
        {       
                scanf("%d",&a[i]);
                sum+=a[i];
        }
        float avg;
        avg = sum/n;
        printf("Average of %d elements is %0.2f \n",n,avg);
}       
