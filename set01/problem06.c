#include <stdio.h>


int input(int *a, int *b, int *c){
    printf("a: ");
    scanf("%d",a);
    printf("b: ");
    scanf("%d",b);
    printf("c: ");
    scanf("%d",c);
}
void compare(int a, int b, int c, int *largest){
    if (a > b && a > c) {
        *largest = a;
        }
    else if (b > c) {
        *largest = b;
    }
    else{
        *largest=c;
    }
}

void output(int a, int b, int c, int largest){
    printf("%d",largest);
}
int main(){
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
}