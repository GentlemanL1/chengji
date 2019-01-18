#include <stdio.h>

struct xs
{
    char d[100];
    int a;
    int b;
    int c;
};

struct xs arr[100];
int index = 0;

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
            printf("请输入学生姓名,语文成绩，数学成绩，英语成绩\n");

            int x;
            int y;
            int z;
            // int s;

            // s = x+y;
            // z = 2 * s;

            // z = 2 * (x + y);

            scanf("%s", arr[index].d);
            scanf("%d", &x);
            scanf("%d", &y);
            scanf("%d", &z);

            //arr[index].d=add;
            arr[index].a = x;
            arr[index].b = y;
            arr[index].c = z;

            index++;

            printf("添加完成，点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 2)
        {
            if (index > 0)
            {

                index--;
                printf("删除完成，点击回车继续\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {

                printf("删除失败，点击回车继续\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (code == 3)
        {
            for (int i = 0; i < index; i++)
            {
                printf("姓名:%s;语文成绩：%d;数学成绩：%d;英语成绩：%d\n", arr[i].d, arr[i].a, arr[i].b, arr[i].c);
            }
            printf("查看成功，点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
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
