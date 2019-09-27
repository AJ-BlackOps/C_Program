#include<stdio.h>

int main()
{

    float velocity,distance,time;

    printf("Enter the Distance covered by the body(in meters): ");
    scanf("%0.2f", &distance);

    printf("Enter the Time taken by the body(in seconds): ");
    fflush(stdin);
    scanf("%0.2f", &time);

    if("distance>=0 && time>=0")
       {
        velocity= (distance/time);
        printf("Velocity or Speed of the Body is %0.2f meter per second square \n\n\n\n\n", velocity);
       }

    else
        printf("Entered amount can never be negative, Enter the appropriate value");

    return 0;
}
