#include <stdio.h>
#include <math.h>
//calc two points distance - return value function
float dist(float x1,float y1,float x2,float y2){
    float distance;
    distance=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}


int main(){
    float x1,y1,x2,y2,distance;
    printf("enter x and y of 2 points each parameter separated by enter:\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    distance=dist(x1,y1,x2,y2);
    printf("The distance between the points is: %2f\n", distance);
return 0;
}