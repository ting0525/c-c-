#include<iostream>
using namespace std;
int main(){
	int a,b=0;
	cin>>a;
	while(a>10){
		b=b+(a%10);
		a=a/10;
		b=b*10;
		
	} 
	cout<<b+a;



return 0;
}
	
/*
1234
4
*/

	
	
	
	
	
 
