#include <stdio.h>
#include <stdlib.h>
#include "DirectInsert.h"

//直接插入排序——按 id 排序
void DirectInsertSort (STU stu[], int n) {
    STU temp;
    int i, j;

    for (i = 0; i < n-1; i ++) {
        temp = stu[i+1];    //数据备份
        j = i;

        while (j > -1 && temp.key.id <= stu[j].key.id) {    //挪动数据
            stu[j+1] = stu[j];
            j --;
        }

        stu[j+1] = temp;    //数据插入
    }
}

//打印已排好序的数组
void Printf (STU stu[], int n) {
    int i;

    for (i = 0; i < n; i ++)
        printf("%d\t%s\n", stu[i].key.id, stu[i].key.name);
}

//输入数据
void Input (STU **stu, int *n) {
    int i;

    printf("\nPlease input the number of students:");
    scanf("%d", n);
    if (*n <= 0) exit(0);   //学生人数防错

    *stu = (STU *)malloc(sizeof(STU) * (*n));
    if (*stu == NULL) exit(0);  //malloc 防错

    puts("\nPlease input students' id and name");
    for (i = 0;i < *n; i ++)    //循环读取学生信息
        scanf("%d%s", &((*stu)[i].key.id), (*stu)[i].key.name);

    puts("\nSorting......\n");
}
