/*Name:R.Siva Sangeetha
 *Roll No:19BCS138
 *Date:27.11.19
 *Ex No:11
 *Ex Name:To display the book details of given substring*/



#include<stdio.h>
#include<string.h>
typedef struct book_details
{
	char name[50],auth[10];
	int page;
}stu;
void check(FILE *);
