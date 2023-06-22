#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class timeStamp
{
public :
    timeStamp();
    timeStamp(int, int, int);
    int getSecond();
    int getMinute();
    int getHour();
    void Print();
    bool operator>(timeStamp);
    bool operator<(timeStamp);
    bool operator==(timeStamp);
    bool operator!=(timeStamp);
private:
    int Second, Minute, Hour;
};
#endif // TIMESTAMP_H_INCLUDED
