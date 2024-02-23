#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon:\n");
    scanf("%d", &n); 
    return n;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg); 
    scanf("%f,%f", &p.x, &p.y); 
    return p;
}

int input_polygon(Polygon *p) {
    p->sides = input_n();
    for (int i = 0; i < p->sides; i++) {
        char prompt[50];
        sprintf(prompt, "Enter the coordinates of point %d (x,y): ", i + 1);
        p->p[i] = input_point(prompt); 
    }
    return p->sides;
}

float find_distance(Point a, Point b) {
    float distance = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2)); 
    return distance;
}4

void find_perimeter(Polygon *p) {
    float perimeter = 0.0;
    for (int i = 0; i < p->sides - 1; i++) {
        perimeter += find_distance(p->p[i], p->p[i + 1]); 
    }
    
    perimeter += find_distance(p->p[p->sides - 1], p->p[0]);
    p->perimeter = perimeter;
}

void output(Polygon p) {
    printf("The perimeter of the polygon is %.2f\n", p.perimeter); 
}

int main() {
    Polygon p;
    int n = input_polygon(&p);
    find_perimeter(&p); 
    output(p);
    return 0; // Added a return statement to end the main function
}