/*Name:R.Siva Sangeetha
 *Roll No:19BCS138
 *Date:30.10.19
 *Ex No:8
 *Ex Name:c program using structure*/
#include<stdio.h>
typedef struct employe
{
char name[30];
int id;
char des[30];
char branch[30];
int bp;
float ns;
}stu;
void highest(stu [10],int);
void disemploye(stu [10],int);
void dismanager(stu [10],int);
void disbranch(stu [10],int,char [30]);
void display(stu);
