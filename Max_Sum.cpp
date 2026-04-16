#include <stdio.h>//////
#include <string.h>/////

//Dynamic Programming
void solve(int caseNum) {
    int n;
    scanf("%d",&n);

    int max_sum = -1001,sum = 0,val;
    int start = 1,end = 1,t_start = 1;

    for (int i=1;i <= n;i ++) {
        scanf("%d",&val);
        sum += val;
        if (sum > max_sum) {
            max_sum = sum;
            start = t_start;
            end = i;
        }
        if (sum < 0) {
            sum = 0;
            t_start = i + 1;
        }
    }

    printf("Case %d:\n",caseNum);
    printf("%d %d %d\n",max_sum,start,end);

}

int main(int argc, char const *argv[])////
{////
    int t;////
    if (scanf("%d",&t) != 1) return 0;////
    
    for (int i=1;i<=t;i++) {////
        solve(i);/////
        if (i<t) printf("\n");/////
    }/////


    return 0;////
}///

