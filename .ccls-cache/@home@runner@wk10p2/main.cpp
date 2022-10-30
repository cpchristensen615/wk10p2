#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 1000; i++){
    string month;
    int day;
    int year;
    int iHours;
    int iMins;
    char x;
    int fHours;
    int fMins;
    int riseMin;
    int setMin;
    int netMin;
    int dayHours;
    int dayMin;
  
    cin >> month >> day >> year >> iHours >> x >> iMins >> fHours >> x >> fMins;
  
    riseMin = (60*iHours) + iMins;
    setMin = (60*fHours) + fMins;
  
    netMin = setMin - riseMin;
  
    dayHours = netMin / 60;
    dayMin = netMin % 60;
  
    cout << month << " " << day << " " << year << " " << dayHours << " hours " <<    dayMin << " minutes" << endl;
  }
}