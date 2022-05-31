#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date
{
    int day;
    int month;
    int year;
};

struct Date storeDate()
{
    struct Date date;
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
}

void isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0) daysInMonths[1] = 29;
    else daysInMonths[1] = 28;
}

bool isValidDate(struct Date date)
{
    if(date.month <= 12 && date.day <= daysInMonths[date.month - 1]) return true;
    return false;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    struct Date dates[n];
    for(int i = 0; i < n; i++)
    {
        dates[i] = storeDate();
    }

    for(int i = 0; i < n; i++)
    {
        isLeapYear(dates[i].year);
        if(isValidDate(dates[i])) printf("Valid Date\n");
        else printf("Invalid Date\n");   
    }
}
