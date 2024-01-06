/*C program to store the information of student marks using 
Structures and find total marks of one student at a time*/
// Structure for student marks
#include <stdio.h> //put is <>in header file
struct student
{
int rollno,tot;
char name[25];
int mark[5];
};
void main()
{
struct student s[5]; //Data type of ‘*s’ is struct student
int i,n,j;
printf("Enter the number of students:");
scanf("%d",&n);
printf("\t*Students Records*\n");
//take input from user
for(i=0;i<n;i++)
{
printf("\nEnter Student Roll Number: ");
scanf("%d",&s[i].rollno);
printf("\nEnter Student name: ");
scanf("%s",s[i].name);
printf("\nEnter Student 3 subject's marks: ");
for(j=0;j<3;j++)
scanf("%d",&s[i].mark[j]);
}
//calculation
for(i=0;i<n;i++)
{
s[i].tot=0;
for(j=0;j<3;j++)
s[i].tot = s[i].tot+ s[i].mark[j];
}
//Display result
for(i=0;i<n;i++)
{
printf("\t*Students Records*\n");
printf("\n==================================\n");
printf("\nStudent's Roll no. %d", s[i].rollno);
printf("\nStudent's Name  %s", s[i].name);
printf("\nStudent's Total Marks  %d", s[i].tot);
}
}