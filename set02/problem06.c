#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
    char a[100],rev_str[100];
    input_string(a);
    str_reverse(a,rev_str);
    output(a,rev_str);
}
void input_string(char *a){
    printf("Enter string: ");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str){
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    // printf("len: %d",len);
    int e = 0;
    for(int i=len-1;i>=0;i--){
        rev_str[e]=str[i];
        // printf("i: %d\n",i);
        // printf("rev_str: %c\n",str[i]);
        e++;
    }
}
void output(char *a, char *reverse_a){
    int len=0;
    for(int i=0;a[i]!='\0';i++){
        len++;
    }
        for(int i=0;i<len;i++){
            printf("%c",reverse_a[i]);
        }
}