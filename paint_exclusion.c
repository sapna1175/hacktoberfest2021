// this program calculates the rate of paint per wall by excluding the unused area.
#include<stdio.h>
int main()
{
    int n,i;
    float r,c,t1,t2,t,e=0;
    printf("Enter the dimensions in the format (2x5)\n");
    printf("Enter the dimensions of wall(in ft.) = ");
    scanf("%fx%f",&t1,&t2);
    t=t1*t2;
    printf("Enter the number of exclusion parts = ");
    scanf("%d",&n);
    float a[n],b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the dimensions(in ft.) of exclusion %d = ",i+1);
        scanf("%fx%f",&a[i],&b[i]);
        e=e+(a[i]*b[i]);
    }
    t=t-e;
    printf("Enter the price(/sq.ft) = Rs. ");
    scanf("%f",&r);
    c=t*r;
    printf("The final rate of the wall is Rs. %.2f\n",c);
}