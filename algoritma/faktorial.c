#include <stdio.h>

unsigned long long factorial(int n);

int main(){
    int n;

    printf("Masukan angka untuk menghitung faktorial");
    scanf("%d", &n);

    unsigned long long result = factorial(n);
    printf("Faktorial dari %d adalah %llu\n ", n, result );

    return 0;
}

unsigned long long factroial(int n){
    if (n < 0){
        return 0;
    }
    if (n == 0 || n == 1){
        return 1;
    }

    unsigned long long fact = 1;
    while(n > 1){
        fact *= n;
        n -- ;
    }
    return fact;
}