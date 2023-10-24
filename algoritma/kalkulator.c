#include <stdio.h>

float add(float a, float b);
float substrack(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main(){
    float num1, num2, result;
    char operator;

    printf("======================/n");
    printf("KALKULATOR SEDERHANA  /n");
    printf("===================== /n");
    printf("Pilih Operator {+, -, *, /}: ");
    scanf("%c", &operator);

    printf("Bilangan Pertama: ");
    scanf("%f, &num1");

    printf("Bilangan Kedua: ");
    scanf("%f, &num2");

    switch (operator){
        case '+' ;
        result = add(num1,num2);
        break;
        case '-' ;
        result = substract(num1, num2);
        break;
        case '*' ;
        result = multiply(num1, num2);
        break;
        case '/' ;
        result = divide(num1, num2);
        break;
        
    default;
    printf("Operator Tidak Valid. \n");
    return 1;
    }
    printf("Hasilnya: %2.f\n", result);
    return 0;
}

float add(float a, float b){
    return a+b;
}

float substract(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return a*b;
}

float devide(float a,float b){
    return a/b;
}else{
    printf("Eror: tidak Bisa Dibagi 0. \n");
    return 0;
}