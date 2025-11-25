#include <stdio.h>
 void triangle(int b,int h);

void main(void) {
    int b,h;
    printf("Enter Basa:");
    scanf("%d",&b);
    printf("Enter Hidht:");
    scanf("%d",&h);
    triangle(b,h);
}




void triangle(int b,int h){
    float ans;
ans = 0.5*b*h;
printf("Answer = %f \n", ans) ;
}

