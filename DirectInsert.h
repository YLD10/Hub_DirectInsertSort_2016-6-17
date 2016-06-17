#ifndef DirectInsert_H
#define DirectInsert_H
#define MAX 20

//关键字数据
typedef struct {
    int id;
    char name[MAX];
} KeyType;

//学生数据信息
typedef struct {
    KeyType key;
} STU;

//子函数
void Input (STU **stu, int *n);
void Printf (STU stu[], int n);
void DirectInsertSort (STU stu[], int n);

#endif // DirectInsert_H
