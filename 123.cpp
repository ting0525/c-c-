#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int e,f;
	if(b<a){
		e=a;
		f=b;
		a=f;
		b=e;
	}
	if(c<a){
		e=a;
		f=c;
		a=f;
		c=e;
	}
	cout<<a;
	return 0;
}


	
	
	
	
	
	
	

