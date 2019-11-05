include<stdio.h>
int main()      
{               
        int n,a[1000],i,sum=0;
        float avg;
        printf("Enter total number you want to find that average:");
        scanf("%d",&n);
        
        printf("Enter numbers:\n");
        for(i=1;i<=n;i++)
        {
                scanf("%d",&a[i]);
                sum=sum+a[i];                            
        }

        avg=sum/n;

        printf("AVERAGE of all %d number=%.2f",n,avg);
        return 0;
}
