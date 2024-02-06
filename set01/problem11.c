#include <stdio.h>

void input_two_strings(char *string1, char *string2){
    printf("string1: ");
    scanf("%s",string1);
    printf("string2: ");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2){
    int result;
    if(*string1>*string2){
        result=1;
    }
    else if(*string1==*string2){
        result=0;
    }
    else{
        result=2;
    }
    return result;
}
void output(char *string1, char *string2, int result){
    if(result==1){
        printf("\n%s is greater than %s\n",string1,string2);
    }
    else if (result==0){
        printf("\n%s and %s are equal.\n",string1,string2);
    }
    else{
        printf("\n%s is lesser than %s\n",string1,string2);
    }
}

int main(){
    char string1[100],string2[100];
    input_two_strings(string1, string2);
    int result = stringcompare(string1, string2);
    output(string1,string2,result);
}