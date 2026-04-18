#include <stdio.h>//////
#include <string.h>/////

// 大数加法函数  long long int 最多存19位数，考虑用数组+双指针
void solve(int caseNum) {
    char a[1005],b[1005];//定义两个超大的数组来存数据
    int res[1010]={0};//存结果，1010稍大一点防止越界

    scanf("%s %s",a,b);// 用已经定义好的数组以字符形式读进来数据

    printf("Case %d:\n",caseNum); // 在计算前先把前置条件写好
    printf("%s + %s = ",a,b);

    int i=strlen(a)-1;//定义双指针分别指向两个数组的最后一位（即个位）
    int j=strlen(b)-1;//数组下标从0开始，指针指向 （数组长度）-1
    int carry=0,k=0;//carry表示进位

    while (i>=0||j>=0||carry) {
        int sum = carry;

        if (i>=0) sum += a[i--] - '0';
        if (j>=0) sum += b[j--] - '0';

        res[k++] = sum % 10;
        carry = sum / 10;
    }

    for (int m = k-1;m >= 0;m--) {
        printf("%d",res[m]);
    }

    printf("\n");
    
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
