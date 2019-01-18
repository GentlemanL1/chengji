#include <stdio.h>

int main()
{

    while (1)
    {
        printf("1--添加学生信息\n");
        printf("2--删除学生信息\n");
        printf("3--查看学生信息\n");

        printf("4--所有总分不及格的学生（小于180）\n");
        printf("5--每一科都不及格的学生\n");
        printf("6--显示总分最高的学生\n");
        printf("7--显示平均分最高\n");

        printf("8--退出\n");

        printf("\n请选择相应的选项\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            break;
        }
    }

    return 0;
}