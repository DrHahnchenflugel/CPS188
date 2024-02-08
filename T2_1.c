#include <stdio.h>
#include <math.h>


double spsound(double t_Fahrenheit){
    double v;
    
    v = 1086*sqrt((5*t_Fahrenheit+297)/247);
    v *= 1.09728;
    
    return (v);
}


int main(void){
    double t_celsius;
    printf("Enter temperature in degrees celsius: ");
    scanf("%lf", &t_celsius);
    double speed_sound = spsound(((t_celsius*9)/5) + 32);
    printf("The speed of sound at %lf degrees C is %lf km/h.\n", t_celsius, speed_sound);
}
