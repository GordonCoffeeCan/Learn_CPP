// 13-函数与结构体.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct WorkTime {
    int hours;
    int minutes;
};

WorkTime sum(WorkTime t1, WorkTime t2);

const int minPerHour = 60;

int main()
{
    WorkTime morning = { 2, 40 };
    WorkTime afternoon = { 6, 40 };
    WorkTime day = sum(morning, afternoon);

    cout << "The total work time for the day is " << day.hours << " hours and " << day.minutes << " minutes" << endl;

    return 0;
}

WorkTime sum(WorkTime t1, WorkTime t2) {
    WorkTime total;
    total.minutes = (t1.minutes + t2.minutes) % minPerHour;
    total.hours = t1.hours + t2.hours + (t1.minutes + t2.minutes) / minPerHour;
    return total;
}