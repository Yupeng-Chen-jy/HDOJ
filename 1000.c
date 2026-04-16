#include <stdio.h>///////////
int main(int argc, char const *argv[])////////////
{////////
    long long int a,b;///////保障数据不会溢出
    while (scanf("%lld %lld",&a,&b) != EOF) {///////未知输入量，用！=EOF来检测是否需要输入
        printf("%lld\n",a+b);///////
    }///////
    return 0;///////
}//////
