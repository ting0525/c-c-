#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int  a;
	cin>>a;//10202 0202
	cout<<"|____";//200  _200
	if(a>10000)
		cout<<setw(4)<<a%10000;
	else
       cout<<setw(4)<<setfill('_')<<a%10000;

	cout<<"|";
    return 0;
}
	
	
	
	
	
	
	
	

