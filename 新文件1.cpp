#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	
	cin>>a>>b;     
	
	if (a==b){
		c=c+50; 
	}			
	if (a==1||a==3||a==5||a==7||a==9){
		c=c+100;
	}
	
	if (b==2||b==5||b==8){
		c=c+200;
	}
	
	
	cout<<c;
	
	
	return 0;
}



