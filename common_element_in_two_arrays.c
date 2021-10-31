// program to find common element in two array
#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,c,n;
    printf("Enter the number of elements in an arrays\n");
    scanf("%d",&n);
    printf("Enter the elements of 1st array\n");
    // using for loop
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of 2nd array\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(a[i]==b[j])
        {
            printf("%d\n",a[i]);
        }
    }
}
