#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cin>>a>>b;
	if(a>b){
		c=a-b;
		cout<<"A"<<" "<<c;	
	}
	else if(a==b){
		c=0;
		cout<<c;
	}
	else{
		c=b-a;
		cout<<"B"<<" "<<c;
	}
	
	
	
	
	return 0;
}
