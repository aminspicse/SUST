#include<stdio.h>

int main(){
    int largest = -999999999;
    printf("Enter Size: ");
    int size;
    scanf("%d",&size);

    int n[size]; // array for input n number;

    printf("Enter %d Number\n",size);

    for(int i=0; i<size; i++){
        scanf("%d",&n[i]);

        if(largest < n[i]){
            largest = n[i];
        }
    }

    printf("Largest Number is = %d",largest);


    return 0;
}
