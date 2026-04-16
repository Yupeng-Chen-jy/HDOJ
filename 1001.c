#include <stdio.h>//////
int main(int argc, char const *argv[])/////
{/////
    int n;/////
    while (scanf("%d",&n) != EOF) {//////
        int sum;///////
        if (n % 2 == 0) sum=n/2*(n+1);//////
        else sum=(n+1)/2*n;///////
        printf("%d\n",sum);///////
        printf("\n");///////
    }///////
    return 0;//////
}///////
