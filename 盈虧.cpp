#include<iostream>
using namespace std;
int main(){
	int n,s,a=0;
	cin>>n;
	for(int i=1;i<n;i++){
		if(n%i==0){
		a=i+a;	
		}
	
	
	}
	if(a>n)
	cout<<"Abundant";
	else if(a<n)
	cout<<"Deficient";
	else
	cout<<"Perfect";
	return 0;
	
} 
