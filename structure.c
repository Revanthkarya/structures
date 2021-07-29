#include <stdio.h>
//structure definition
struct employee{
    int empno;
    char empname[30];
    int age;
    int phoneno;
    int salary;
}s[3];

int main()
{
    int i;

    // storing information
    for (i = 0; i < 3; ++i) {
        s[i].empno = i + 1;
        printf("\nEmployee ID:%d ",s[i].empno);
        printf("Enter Employee Name: ");
        scanf("%s", s[i].empname);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter phone number: ");
        scanf("%i", &s[i].phoneno);
        printf("Enter salary: ");
        scanf("%d", &s[i].salary);
    }
    //displaying the collected data
    for (i = 0; i < 3; ++i) {
        printf("\nEmployee ID: %d\n", i + 1);
        printf("\nName: %s",s[i].empname);
        printf("\nAge:%d",s[i].age);
        printf("\nPhone number:%i",s[i].phoneno);
        printf("\nSalary:%d",s[i].salary);

        printf("\n");
    }

    return 0;
}
