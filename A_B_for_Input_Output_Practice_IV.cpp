#include <stdio.h>///

void solve(int n) {
    int a;
    int sum = 0;
    for (int i=0;i < n;i ++) {
        scanf("%d",&a);
        sum += a;
    }
    printf("%d\n",sum);
}

int main(int argc, char const *argv[])///
{//
    int n;
    while (scanf("%d",&n) != EOF && n != 0) {
        solve(n);
    }
    return 0;//
}//
