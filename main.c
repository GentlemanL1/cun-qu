#include <stdio.h>

int main()
{
    int qian = 0;
    printf("进入存钱取钱管理系统\n");
    while (1)
    {
        int a;

        printf("1---存钱\n");
        printf("2---取钱\n");
        printf("3---余额\n");
        printf("4---退出\n");

        printf("请输入功能编号\n");
        scanf("%d", &a);

        if (a == 1)
        {
            int cun;
            printf("请输入要存入的金额:\n");

            scanf("%d", &cun);
            qian += cun;

            printf("存入成功，点击回车继续\n");

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            int qu;
            printf("请输入要取出的金额：\n");
            scanf("%d", &qu);
            if (qu > qian)
            {
                printf("余额不足，取出失败，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian -= qu;

                printf("取钱成功，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (a == 3)

        {
            printf("您的余额为：%d\n", qian);
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 4)
        {
            printf("程序退出\n");
            break;
        }
    }
    return 0;
}