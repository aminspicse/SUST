#include<stdio.h>
void markcal(int mark);

int main(){
    int mark;
    printf("Enter Mark: ");
    scanf("%d",&mark);

    markcal(mark);

    return 0;
}

void markcal(int mark){

    if(mark >= 80 && mark <= 100){
        printf("A+");
    }else if(mark >= 75 && mark <= 79){
        printf("A");
    }else if(mark >= 70 && mark <= 74){
        printf("A-");
    }else if(mark >= 65 && mark <= 69){
        printf("B+");
    }else if(mark >= 60 && mark <= 64){
        printf("B");
    }else if(mark >= 55 && mark <= 59){
        printf("B-");
    }else if(mark >= 50 && mark <= 54){
        printf("C+");
    }else if(mark >= 45 && mark <= 49){
        printf("C");
    }else if(mark >= 40 && mark <= 44){
        printf("C-");
    }else{
        printf("F");
    }
}
