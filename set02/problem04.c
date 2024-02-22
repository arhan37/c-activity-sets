#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
    int n = input_array_size();
    int a[n];
    input_array(n,a);
    int sum = sum_composite_numbers(n,a);
    output(sum);
}
int input_array_size() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    return n;
}
void input_array(int n,int a[n]){
int num;
printf("enter the array");
scanf("%d",&num);
}
int sum_composite_numbers(int n, int a[n]){
    int i , j, sum ;
    for (i=0,i<=n,i++){
        for(j=2,j<a[i] j++){
            sum+=a[i];
        }
    }
    return sum;
}

void output(int sum){
    printf("%d",sum);
}