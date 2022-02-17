#include<iostream>
using namespace std;
int main(){
	int a,b=0;  
	cin>>a;//9
	while(a>=5){
		a=a-5+1;//a=5 a=1
		b=b+5;//b=5 10
	} 
	b=a+b;
	cout<<b;




	return 0;
}
