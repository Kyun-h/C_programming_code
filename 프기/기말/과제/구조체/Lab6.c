#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
 double x;
 double y;
 } Point;

 typedef struct {
 double slope;
 double yintercept;
 } Line;

int main(void){
    Point A;
    Point B;
    Line line;

    scanf("%lf %lf",&A.x,&A.y);
    scanf("%lf %lf",&B.x,&B.y);

    line.slope=(B.y-A.y) / (B.x-A.x);
    line.yintercept=(A.y)-line.slope*(A.x);
    printf("%.1lf %.1lf",line.slope,line.yintercept);
    return 0;
}