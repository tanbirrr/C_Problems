#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int last=n%10;
        int first=n;
        while(first>=10)
        {
            first/=10;
        }
        int sum=first+last;
        printf("Sum = %d\n",sum);
    }
}
