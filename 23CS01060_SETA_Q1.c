#include<stdio.h>
int main()
{   float r,sa,vol;
    printf("enter the radius of the sphere\n");
    scanf("%f",&r);
    sa=4*3.14*r*r;
    vol=4.0/3*3.14*r*r*r;
    printf("the surface area is %.2f and the volume is %.2f",sa,vol);
    return 0;
}