#include<stdio.h>

int largestnum(int a, int b, int c);
int secondlargest(int largest, int a, int b, int c);

int main(){
    int a, b, c;

    printf("Enter 3 number: ");
    scanf("%d%d%d",&a,&b,&c);

    int largest = largestnum(a, b, c);
    printf("Largest = %d\n",largest);

    int slargest = secondlargest(largest, a, b, c);
    printf("Second Largest: %d\n",slargest);

    return 0;
}

int largestnum(int a, int b, int c){

    int largest = -999999999;
    if(largest < a){
        largest = a;
    }
    if(largest < b){
        largest = b;
    }
    if(largest < c){
        largest = c;
    }

    return largest;
}

int secondlargest(int largest, int a, int b, int c){

    int slargest= -999999999;

    if(slargest < a && largest > a){
        slargest = a;
    }
    if(slargest < b && largest > b){
        slargest = b;
    }
    if(slargest < c && largest > c){
        slargest = c;
    }

    return slargest;
}
