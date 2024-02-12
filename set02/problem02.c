#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
    int a,b,c;
    a = input_side();
    b = input_side();
    c = input_side();
    int isscalene = check_scalene(a,b,c);
    output(a,b,c,isscalene);
}
int input_side(){
    int x;
    printf("Enter sides: ");
    scanf("%d",&x);
    return x;
}
int check_scalene(int a, int b, int c){
    if(a!=b&&a!=c&&b!=c){
        return 1;
    }   
    else{
        return 0;
    }
}
void output(int a, int b, int c, int isscalene){
    if(isscalene==0){
        printf("The triangle with sides %d, %d and %d is not scalene",a,b,c);
    }
    else{
        printf("The triangle with sides %d, %d and %d is scalene",a,b,c);
    }

}