#include <stdio.h>

int f[60];

int main() {
    int a, b, n;
    
    
    while (scanf("%d %d %d", &a, &b, &n) && (a || b || n)) {
        f[1] = f[2] = 1;
        int st = 0, p = 0;

        // 预处理前 60 项
        for (int i = 3; i <= 60; ++i) 
            f[i] = (a * f[i-1] + b * f[i-2]) % 7;

        // 利用短路求值 !p 替代 break 提前跳出双层循环
        for (int i = 1; !p && i <= 50; ++i)
            for (int j = i + 1; !p && j <= 59; ++j)
                if (f[i] == f[j] && f[i+1] == f[j+1]) 
                    st = i, p = j - i;

        // 压行输出：使用三目运算符处理边界与周期映射逻辑
        printf("%d\n", n <= st ? f[n] : f[st + (n - st) % p]);
    }
    return 0;
}
