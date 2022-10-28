#include<stdio.h>
#include<math.h>

int main(){

    int cx, cy, px, py, r;
    printf("Enter cx and cy: ");
    scanf("%d%d",&cx, &cy);

    printf("Enter x and y point for check: ");
    scanf("%d%d",&px,&py);

    printf("Enter Radius: ");
    scanf("%d",&r);

    double d; // distance of two point
    d = sqrt( pow( (px-cx),2 ) + pow( (py - cy),2 ));

    if(d > r){
        printf("Point is out of Circle");
    }else if(d < r){
        printf("Point is inside of circle");
    }else{
        printf("Point is on the circle");
    }


    return 0;
}
