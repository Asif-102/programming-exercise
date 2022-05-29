#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char *name[100];
    int class;
    int roll;
    struct Date dob;
};

struct Date inputDate()
{
    struct Date date;
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
}

void printDate(struct Date date)
{
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

void printStudent(struct Student st)
{
    printf("Name: %s\n", st.name);
    printf("Class: %d\n", st.class);
    printf("Roll: %d\n", st.roll);
    printf("DOB: ");
    printDate(st.dob);
}

struct Student inputStudent()
{
    struct Student st;

    printf("Name: ");
    gets();
    gets(st.name);
    
    printf("Class:");
    scanf("%d", &st.class);

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("DOB: ");
    st.dob = inputDate();
    return st;
}

int main(void)
{
    int n;
    printf("Number of students in the class: ");
    scanf("%d", &n);

    struct Student students[n];

    for(int i = 0; i < n; i++)
    {
        printf("Input Student %d Info\n", i+1);
        students[i] = inputStudent();
    }

    for(int i = 0; i < n; i++)
    {
        printStudent(students[i]);
    }
}
