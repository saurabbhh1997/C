//Profit or loss

#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter the cost price and selling price:\n");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        printf("Seller has made profit\n");
        profit=sp-cp;
        printf("profit=%d\n",profit);
    }
    else if(cp>sp)
    {
        printf("Seller has incurred loss\n");
        loss=cp-sp;
        printf("loss=%d\n",loss);
    }
    return 0;
}