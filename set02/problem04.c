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
void input_array(int n, int a[n]){
    for(int i=0;i<n;i++){
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n]){
    int sum = 0;
    int comp = 0;
    for(int i=0;i<n;i++){
        if(a[i]<2){
            comp=0;
        }
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                comp=1;
            }
        }
        if (comp == 1) {
            sum+=a[i];
        }
        comp = 0;
    }
    return sum;
}

void output(int sum){
    printf("Sum of composite numbers is : %d\n", sum);
}