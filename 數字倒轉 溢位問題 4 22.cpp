#include<iostream>
using namespace std;
int main(){
	int a,b=0;
	cin>>a;
	while(a>10){                  //while a>0
		b=b+(a%10);
		a=a/10;
		b=b*10;
		
	} 
	cout<<b+a;  //cout<<b/10;



return 0;
}
	

	
	
	
	
	
 
