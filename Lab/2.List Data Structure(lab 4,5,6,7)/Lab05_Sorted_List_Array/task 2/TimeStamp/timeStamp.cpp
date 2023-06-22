#include <iostream>
using namespace std;
#include "timeStamp.h"

timeStamp::timeStamp()
{
    Second = 0;
    Minute = 0;
    Hour = 0;
}
timeStamp::timeStamp(int second, int minute, int hour)
{
    Second = second;
    Minute = minute;
    Hour = hour;
}
void timeStamp::Print()
{
    cout<<Second<<"\t"<<Minute<<"\t"<<Hour;
}
int timeStamp::getSecond()
{
    return Second;
}
int timeStamp::getMinute()
{
    return Minute;
}
int timeStamp::getHour()
{
    return Hour;
}
bool timeStamp::operator>(timeStamp a)
{
    return ((Second+60*Minute+3600*Hour)>(a.Second+60*a.Minute+3600*a.Hour));
}
bool timeStamp::operator<(timeStamp a)
{
    return ((Second+60*Minute+3600*Hour)<(a.Second+60*a.Minute+3600*a.Hour));
}
bool timeStamp::operator==(timeStamp a)
{
    return ((Second+60*Minute+3600*Hour)==(a.Second+60*a.Minute+3600*a.Hour));
}
bool timeStamp::operator!=(timeStamp a)
{
    return ((Second+60*Minute+3600*Hour)!=(a.Second+60*a.Minute+3600*a.Hour));
}
