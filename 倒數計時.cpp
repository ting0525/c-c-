#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cin>>a>>b;
	if(a>b){
	
	for(;a>b;a--){
		c=c+a;
		if(a!=b){
			cout<<a<<"+";				
	}
	}
}
	else {
	
	for(;a<b;a++){
		c=c+a;
		if(a!=b)
		cout<<a<<"+";
}
}
	cout<<b<<"="<<c+b;
	
	return 0;
} 
