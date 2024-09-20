#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Function to input time values
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    // Function to convert time to total minutes
    int timeInMinutes() {
        // Total time in minutes (1 hour = 60 minutes, 60 seconds = 1 minute)
        int totalMinutes = (hour * 60) + minute + (second / 60);
        return totalMinutes;
    }

    // Function to display time in minutes
    void displayTimeInMinutes() {
        cout << "Time in total minutes: " << timeInMinutes() << " minutes" << endl;
    }
};

int main() {
    Time t;
    t.inputTime();
    t.displayTimeInMinutes();

    return 0;
}