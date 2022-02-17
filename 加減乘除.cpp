#include<iostream>
using namespace std;
int main(){
	int a,b;
	char x;
	cin>>a>>x>>b;
	switch(x){
		case '+':
			cout<<a+b<<endl;	
			break;
		case '-':
			cout<<a-b<<endl;	
			break;
		case '*':
			cout<<a*b<<endl;	
			break;
		case '/':
			cout<<(float)a/b<<endl;	
			break;
		default:
		cout<<"X"<<endl;	
	}







	return 0;
} 
