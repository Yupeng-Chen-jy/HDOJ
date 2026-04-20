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
    int t,n;
    scanf("%d",&t);
    for (int i = 0;i < t;i ++) {
        scanf("%d",&n);
        solve(n);
        if (i < t) {
            printf("\n");
        }
    }
    return 0;//
}//
