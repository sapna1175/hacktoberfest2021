#include<stdio.h>
int main()
{
    int buy_year,cur_year,diff;
    float buy_price,c;
    printf("\n");
    printf("Current year ------------------------------- ");
    scanf("%d",&cur_year);
    printf("Purchase year ------------------------------ ");
    scanf("%d",&buy_year);
    printf("Purchsing price ------------------------- Rs.");
    scanf("%f",&buy_price);
    diff = cur_year - buy_year + 1;
    c = buy_price;
    printf("\n");
    printf("--------------------------------------------------------\n");
    for(int i=1;i<=diff;i++)
    {
        c = c - (c * 0.3);
    }
    printf("Net value of product today -------------- Rs.%.2f\n",c);
    printf("--------------------------------------------------------\n");

    printf("Type exit to leave...\n");
    scanf("\n");
}