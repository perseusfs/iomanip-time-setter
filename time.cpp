#include<iostream>
#include<iomanip>
#include "time.h"
using namespace std;
int main(){
	time t;
	cout<<"the initial universal time is : ";
	t.printuniversal();
	cout<<"\nthe initial standard time is : ";
	t.printstandard();
	
	t.settime(13,27,6);
	cout<<"\nthe universal time after settime : ";
	t.printuniversal();
	cout<<"\nthe standard time after settime : ";
	t.printstandard();
	
	t.settime(99,99,99);
	cout<<"\nthe time after invalid values : ";
	t.printuniversal();
	cout<<"\t";
	t.printstandard();
	cout<<endl;
	
	t.settime(2,2,2);
	t.printuniversal();
	cout<<"\t";
	t.printstandard();
	
	return 0;
}
