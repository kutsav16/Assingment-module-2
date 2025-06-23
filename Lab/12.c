#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    int marks;

};

int main()
{
    struct student s[50];
    int size,i;
    printf("\n enter size of student array : ");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("\n enter the name of student roll no. : ");
        scanf("%d",&s[i].roll);
        printf("\n enter the name of student : ");
        scanf("%s",&s[i].name);
        printf("\n enter marks : ");
        scanf(" %d",&s[i].marks);
        
    }
    for ( i = 0; i < size; i++)
    {
        printf("\n value of roll no. : %d",s[i].roll);
        printf("\n value of namr : %s",s[i].name);
        printf("\n value of marks :  %d",s[i].marks);
    }
    
    
   

    return 0;
}