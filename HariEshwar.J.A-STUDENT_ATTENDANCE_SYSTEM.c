#include<stdio.h>
#include<conio.h>

struct stud
{
char name[50],p_name[50];
long long int roll;
long long int phone_num;
char bus_num[10];
char dept[4];
int att;
int totatt;
}s[150];

void main()
{
int i,n,choice,noofdays=0;
float z;
printf("Enter the Number of students:");
scanf("%d",&n);
printf("\nEnter the STUDENT DETAILS\n");
for(i=0;i<n;i++)
{
printf("\nEnter details of student%d:",i+1);
printf("\nEnter student_name , parent_name , rollnumber , phone_num , bus_num , department\n");
scanf("%s %s %lld %lld %s %s",s[i].name,s[i].p_name,&s[i].roll,&s[i].phone_num,s[i].bus_num,s[i].dept);
}
yes:
printf("\n Select one of the OPTIONS below : 1-enter Attendance 2-total attendance and percentage of attendance 3-enter Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
noofdays++;
for(i=0;i<n;i++)
{
printf("\nEnter the attendance of %lld:",s[i].roll);
scanf("%d",&s[i].att);
s[i].totatt=s[i].totatt+s[i].att;

}
for(i=0;i<n;i++)
{
if(s[i].att==0)
{
printf("\n%s of Department %s ward of %s is ABSENT : Call %lld\n",s[i].name,s[i].dept,s[i].p_name,s[i].phone_num);
}
}
goto yes;
break; 
case 2:
for(i=0;i<n;i++)
{
printf("\n Days PRESENT is : %d",s[i].totatt);
printf("\n Number of Days is : %d\n",noofdays);
z=s[i].totatt;
z/=noofdays;
printf("\n percentage of attendance is %.2f%",z*100);
}
goto yes;
break;
case 3:
break;
}
}
