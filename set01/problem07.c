#include <stdio.h>

int input_n(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    return n;
}
int sum_n_nos(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
void output(int n, int sum){
    printf("\nThe sum of first %d natural numbers is :%d\n", n, sum);
}

int main(){
    int n = input_n();
    int sum = sum_n_nos(n);
    output(n,sum);
}