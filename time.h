#include<iostream>
#include<iomanip>
using namespace std;
class time{
	private:
		int hour;
		int minute;
		int second;
	public:
		time(){
			hour=minute=second=0;
		}
		void settime(int h,int m,int s){
			hour = (h>=0 && h<24)?h:0;
			minute = (m>=0 && m<60)?m:0;
			second = (s>=0 && s<60)?s:0;
		}
		void printuniversal(){
			cout<<setfill('0')<<setw(2)<<hour<<":"
			<<setw(2)<<minute<<":"<<setw(2)<<second;
		}
		void printstandard(){
			cout<<((hour==0||hour==12)?12: (hour%12) )<<":"
			<<setfill('0')<<setw(2)<<minute<<":"<<
			setw(2)<<second<< (hour<12?" AM":" PM");
		}
};
