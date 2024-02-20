#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main(){
    Triangle t;
    t = input_triangle();
    find_area(&t);
    output(t);
}
Triangle input_triangle(){
	Triangle t;
    printf("Enter base: ");
    scanf("%f",&t.base);
    printf("Enter altitude: ");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(Triangle *t){
    t->area = (t->base*t->altitude)/2;
}
void output(Triangle t){
    printf("The area of the traingle with base %f and height %f is %f",t.base,t.altitude,t.area);
}