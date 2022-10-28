#include<stdio.h>

int main(){
    int first=0, second = 1, sw, size, n, position;

    printf("Enter Size for Fibonacci series: ");
    scanf("%d",&size);

    printf("Find Position: ");
    scanf("%d",&position);
    int fibo[size];

    int j=1;
    for(int i=0; i<=size; i++){
        printf("%d\t",first);
        fibo[j] = first;
        sw = first;
        first = second;
        second = sw+first;
        j++;
    }

    printf("\n%d th positions Number: %d\n", position, fibo[position]);

    return 0;
}
