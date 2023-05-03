// The distance between two cities (in kilometers) is input through the keyboard.
// Write a program to convert and print this distance in meters, feet, inches and centimeters.


#include<stdio.h>
#include<conio.h>
int main ()
{
    float km, m, cm, ft, inch;
    printf("\n Enter The Distance in Kilometer : ");
    scanf("%f", &km);
    m = km*1000;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;
    printf("Distance In Meters = %f\n", m);
    printf("Distance in Centimetre = %f\n", cm);
    printf("Distance In Feet = %f\n", ft);
    printf("Distance in Inch = %f\n", inch);
    return 0;
}
