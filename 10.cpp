//dekh: C++ program to convert date and time to timestamp

#include <iostream>
#include <ctime>   
using namespace std;
 
int main () {
  struct tm datetime;
  time_t timestamp;

  datetime.tm_year = 2026 - 1900;  
  datetime.tm_mon = 12 - 1;  
  datetime.tm_mday = 17;
  datetime.tm_hour = 12;
  datetime.tm_min = 30;
  datetime.tm_sec = 1;
   
  datetime.tm_isdst = -1;

  timestamp = mktime(&datetime);

  cout << ctime(&timestamp);
  return 0;
}