// expension_of_e.c                                                                        

#include<stdio.h>
int main()
{
        int n,a;
        float b=1,sum=1;
        printf("Enter number of terms for expension  you want\n");
        scanf("%d",&n);
        for(a=1;a<=n;a++)
        {
                b=b/a;
                sum=sum+b;
        }
        printf("Value of e=%f\n",sum);
        return 0;
}
