#include<stdio.h>

int fibo(int num);

int main(){

    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("%d\n",fibo(i));
    }

    return 0;
}

int fibo(int num){

    if(num == 0){
        return 0;
    }else if(num == 1){
        return 1;
    }else{
        return (fibo(num-1) + fibo(num-2));
    }
}
