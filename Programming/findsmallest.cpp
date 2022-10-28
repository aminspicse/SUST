#include<stdio.h>

int main(){

    int smallest = 999999999;

    int size;
    printf("Enter Size: ");
    scanf("%d", &size);

    int n[size];
    printf("Enter %d Number: ", size);

    for(int i=0; i<size; i++){
        scanf("%d", &n[i]);

        if(smallest > n[i]){
            smallest = n[i];
        }
    }

    printf("%d",smallest);

    return 0;
}
