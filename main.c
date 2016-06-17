#include <stdio.h>
#include <stdlib.h>
#include "DirectInsert.h"

//程序入口，调用子函数
int main()
{
    STU *stu;
    int n;

    Input(&stu,&n); //输入数据

    DirectInsertSort(stu,n);    //直接插入排序

    Printf(stu,n);  //打印排序后的数据

    return 0;
}
