#include <iostream>
#include <conio.h>
using namespace std;
class Time12;
class Time24
{
int h, m;
public:
void getData()
{
cout << "\nEnter hour and minute (24-hour) : ";
cin >> h >> m;
}
int geth()
{
return h;
}
int getm()
{
return m;
}
void putData()
{
cout << "\n";
if (h <= 9)
{
cout << "0" << h << ":";
}
else
{
cout << h << ":";
}
if (m <= 9)
{
cout << "0" << m;
}
else
{
cout << m;
}
}
};
class Time12
{
int h, m;
public:
Time12()
{}
Time12(Time24 t)
{
h = t.geth();
if (h > 12)
{
h = h % 12;
m = t.getm();
}
}
void getData()
{
cout << "\nEnter hour and minute (12-hour) : ";
cin >> h >> m;
}
void putData()
{
cout << "\n";
if (h <= 9)
{
cout << "0" << h << ":";
}
else
{
cout << h << ":";
}
if (m <= 9)
{
cout << "0" << m;
}
else
{
cout << m;
}
}
};
int main()
{
Time12 t12;
Time24 t24;
t24.getData();
t12 = t24;
t12.putData();
t12.getData();
t24.putData();
getch();
return 0;
}