#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void isLeapYear(struct Date date)
{
    if ((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
    {
        daysInMonths[1] = 29;
    }
    else
    {
        daysInMonths[1] = 28;
    }
}

struct Date getNextDate(struct Date date)
{
    isLeapYear(date);
    if(date.day != daysInMonths[date.month -1])
    {
        date.day++;
    }
    else if(date.month != 12)
    {
        date.day = 1;
        date.month++;
    }
    else
    {
        date.day = 1;
        date.month = 1;
        date.year++;
    }
    return date;
}

void printDate(struct Date date)
{
    printf("Next date: %d-%d-%d\n", date.day, date.month, date.year);
}

int main(void)
{
    struct Date start;
    printf("Start days: ");
    scanf("%d %d %d", &start.day, &start.month, &start.year);

    int days;
    printf("How many days you want to know: ");
    scanf("%d", &days);

    struct Date nextDate = start;
    for (int i = 0; i < days; i++)
    {
        nextDate = getNextDate(nextDate);
        printDate(nextDate);
    }
}
