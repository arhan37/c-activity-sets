#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle(){
    Triangle t;
    printf("Height: ");
    scanf("%f",&t.altitude);
    printf("Base: ");
    scanf("%f",&t.base);
    return t;
}
void input_n_triangles(int n, Triangle t[n]){
    for(int i=0;i<n;i++){
        t[i]=input_triangle();
    }
}
void find_area(Triangle *t){
    t->area = (t->altitude*t->base)/2;
}
void find_n_areas(int n, Triangle t[n]){
    for(int i=0;i<n;i++){
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n]){
    float small= t[0].area;
    int index = 0;
    for(int i=1;i<n;i++){
        if(t[i].area<small){
            small = t[i].area;
            index = i;
        }
    }
    return t[index];
}
void output(int n, Triangle t[n], Triangle smallest){
    printf("The smallest triangle out of triangles with base and height:\n");
    for (int i = 0; i < n; i++) {
        printf("(%.2f, %.2f) ", t[i].base, t[i].altitude);
    }
    printf("is the triangle having base %.2f, height %.2f, and area %.2f\n",
           smallest.base, smallest.altitude, smallest.area);
}

int input_n(){
    int x; 
    printf("Enter the numbers of triangles to be compared with: ");
    scanf("%d",&x);
    return x;
}

int main(){
    int n = input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_n_areas(n,t);
    Triangle smallest = find_smallest_triangle(n,t);
    output(n,t,smallest);
}