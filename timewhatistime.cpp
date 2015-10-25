#include <ctime>
#include <iostream>
//...

int         getMonth(time_t timeval){
 struct tm * timeinfo;
 timeinfo = localtime(&timeval);
 return timeinfo->tm_mon + 1;
}
int         getDay(time_t timeval){
 struct tm * timeinfo;
 timeinfo = localtime(&timeval);
 return timeinfo->tm_mday;
}
int         getYear(time_t timeval){
 struct tm * timeinfo;
 timeinfo = localtime(&timeval);
 return timeinfo->tm_year+1900;
}
int         getHour(time_t timeval){
 struct tm * timeinfo;
 timeinfo = localtime(&timeval);
 return timeinfo->tm_hour;
}
int         getMin(time_t timeval){
 struct tm * timeinfo;
 timeinfo = localtime(&timeval);
 return timeinfo->tm_min;
}
int         getSec(time_t timeval){
 struct tm * timeinfo;
 timeinfo = localtime(&timeval);
 return timeinfo->tm_sec;
}
std::string getWeekday(time_t timeval){
  struct tm * timeinfo;
  std::string days[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"}; 
    //could just make this global

  timeinfo = localtime(&timeval);

  return days[timeinfo->tm_wday];
}


void print_time(time_t tim) {
	std::cout << getWeekday(tim) << std::endl;
	std::cout << getSec(tim) << std::endl;
	std::cout << getMin(tim) << std::endl;
	std::cout << getHour(tim) << std::endl;
	std::cout << getYear(tim) << std::endl;
	std::cout << getDay(tim) << std::endl;
	std::cout << getMonth(tim) << std::endl;
	
}
int main() {
	time_t tim = time(0);
	print_time(tim);
	return 0;
}
