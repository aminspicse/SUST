#include<stdio.h>

int main(){

    double total=0;

    int product;
    printf("Enter Number of Total Product: ");
    scanf("%d",&product);

    for(int i=0; i<product; i++){
        int bprice, sprice, unit, profit;
        scanf("%d%d%d",&bprice, &sprice, &unit);

        total += (sprice - bprice)*unit;

    }

    if(total >= 0)
        printf("Profit: %lf",total);
    else
        printf("Loss: %lf",total);


    return 0;
}
