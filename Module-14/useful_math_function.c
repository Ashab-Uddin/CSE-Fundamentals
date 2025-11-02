#include<stdio.h>
#include<math.h>
int main(){
    int c = ceil(4.3);
    int f = floor(4.3);
    int r = round(4.5);
    int r2 = round(4.6);
    int r3 = round(4.2);
    double s = sqrt(20);
   printf("4.3 Ceilling Value:%d\n",c);
   printf("4.3 Floor Value:%d\n",f);
   printf("4.5 round valur:%d\n",r);
   printf("4.6 round value:%d\n",r2);
   printf("4.2 round value:%d\n",r3);
   printf("20 square value:%lf",s);
    return 0;
}