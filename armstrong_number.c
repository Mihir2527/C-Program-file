include<stdio.h>
int main()
{
        int sum=0,digit;
        int number,temp;
        printf("Enter any positive integer\n");
        scanf("%d",&number);
        temp=number;

        while(temp>0)
        {
                digit=temp%10;
                //temp/=10;
                sum=sum+digit*digit*digit;
                temp/=10;
        }
        if(number==sum)
                printf("\n%d is a Armstrong number\n",number);
        else
                printf("%d is not a Armstrong number",number);
        return 0;
}
