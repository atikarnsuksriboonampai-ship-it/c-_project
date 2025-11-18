#include <stdio.h>

int main(){

     int a =0;
     int c;
     int b;

     printf(" enter NUMBER :");
     scanf("%d" , &b);

     
     while (a<=12) {
         c = b * a;
         printf ("2 * %d = %d \n", a,c);
         a++;
     }



     return 0;
    
    

}
    