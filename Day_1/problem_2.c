#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        scanf("%s",&s);
        char a=strlen(s)-1;
        if(s[a]%2==0)printf("even\n");
        else printf("odd\n");
    }
}
