#include <iostream>
#include <conio.h>

class Time {
    int hour, minute, second;

public:
    // Function to input time values
    void input() {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    // Function to convert time into total minutes
    int toMinutes() {
        return (hour * 60) + minute + (second / 60);
    }
};

int main() {
    clrscr();  // Clear the screen (specific to Turbo C++)
    
    Time t;
    t.input();  // Take time input
    cout << "Total time in minutes: " << t.toMinutes() << endl;

    getch();  // Wait for a key press (specific to Turbo C++)
    return 0;
}