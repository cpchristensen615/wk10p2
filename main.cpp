#include <iostream>

using namespace std;

int main() {
  struct group
  {
    string month;
    int day;
    int year;
    int iHours;
    int iMins;
    char x;
    int fHours;
    int fMins;
  };
  int n = 1000;
  group entries[n];
  n = 0;
  
  while(cin){
    cin >> entries[n].month >> entries[n].day >> entries[n].year >> entries[n].iHours >> entries[n].x >> entries[n].iMins >> entries[n].fHours >> entries[n].x >> entries[n].fMins;
    n++;
  }
  
  
  for (int i = 0; i < n; i++){
    int riseMin;
    int setMin;
    int netMin;
    int dayHours;
    int dayMin;
  
    riseMin = (60*entries[i].iHours) + entries[i].iMins;
    setMin = (60*entries[i].fHours) + entries[i].fMins;
    
    netMin = setMin - riseMin;
    
    dayHours = netMin / 60;
    dayMin = netMin % 60;
  
    cout << entries[i].month << " " << entries[i].day << " " << entries[i].year << " " << dayHours << " hours " <<          dayMin << " minutes" << endl;
  }
  return 0;
}