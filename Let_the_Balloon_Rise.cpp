#include <stdio.h>//
#include <string.h>//使用strcmp和strcpy
void solve(int t) {//定义一个solve函数用来solve输入的每个块
    char colors[1005][20];//定义一个colors二维数组,建立了一个1005房间的酒店，每个房间有20张床
    int counts[1005]={0};//记录每个颜色出现的个数
    int types=0;//记录出现了几种颜色
    for (int i=0;i<t;i++) {/////
        char s[20];////
        scanf("%s",s);////
        int found=0;//定义一个found，分别处理前面已经存在的颜色和不存在的颜色
        for (int j=0;j<types;j++) {//检查前面是否存在过scanf的s
            if (strcmp(colors[j],s) == 0) {//strcmp函数，若完全相同返回0
                counts[j]++;//如果找到了前面已经存在过的颜色，对应颜色的count++
                found=1;//把found赋值为1，利于下面处理没有找到的情况
                break;//如果找到了就跳出循环
            }//
        }//
        if (found==0) {//没有找到，把s复制到colors二维数组里面
            strcpy(colors[types],s);//必须用strcpy函数
            counts[types]=1;//把对应的count++
            types++;//种类++
        }// 
    }//
    int max_color=-1;//找到并打印出counts最多的color
    int max_index=0;//
    for (int i=0;i<types;i++) {//
        if (counts[i]>max_color) {//
                max_color=counts[i];//
                max_index=i;//
        }//
    }//
    printf("%s\n",colors[max_index]);//
}//
int main(int argc, char const *argv[])//
{//
    int t;//
    while (scanf("%d",&t) != EOF && t != 0) {//
        solve(t);//
    }//
    return 0;//
}//
