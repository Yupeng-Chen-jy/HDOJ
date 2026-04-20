#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a,b;
    while (scanf("%d %d",&a,&b) != EOF) {
        int unit = a % 10;
        int p = b % 4 ;
        if (p == 0) p = 4;
        printf("%d\n",(int)pow(unit,p) % 10);
        
    }
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int a,b;
//     while (scanf("%d %d",&a,&b) != EOF) {
//         int unit = a % 10;
//         int p = b % 4;
//         if (p == 0) p = 4;
//         int ans = 1;
//         for (int i = 0;i < p;i ++) {
//             ans = ans * unit % 10;
//         }
//         printf("%d\n",ans);
//     }
//     return 0;
// }
