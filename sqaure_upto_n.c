#include<stdio.h>
int main()
{
    int n,i;
    int s=0;
    scanf("%d",&n);
    if(n>2)
    {
        for(i=1;i<=(n-2);i++)
        {
            s = s + (i * i);
        }
        printf("%d\n",s);
    }
    else
    {
        printf("0\n");
    }  
}