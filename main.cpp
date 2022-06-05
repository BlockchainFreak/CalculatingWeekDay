#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;


int main(int argc, char *argv[]) {
	int first_day = atoi(argv[1]);
	int leap_year = atoi(argv[2]);
	int date = atoi(argv[3]);
	int month = atoi(argv[4]);

    int daysInMonths[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };
    string weekNames[7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    string monthNames[] = {
        "", "January", "Febuary", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    if(leap_year) daysInMonths[1]++;
    int totalDays = 0;
    for(int i = 0; i+1<month ; ++i){
        totalDays += daysInMonths[i];
    }
    totalDays += date - 1 + first_day;
    int w = totalDays % 7;
    cout << monthNames[month] + ' ' << date << " is " << weekNames[w];
}