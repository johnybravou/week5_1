#include<stdio.h>
int main()
{
    int a,num,sum;
    while(a!=num)
    {
        printf("Enter num :");
        scanf("%d",&num);
        sum=0;
        for(int i=2;i<=num;i++)
        {
            if(num%i ==0) 
            {
                sum=sum+i;
            }
        }
        if(sum==num)
        {
            a=num;
        }
    }
}