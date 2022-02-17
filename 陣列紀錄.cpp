#include<iostream>
using namespace std;
int main(){
	int a,i,x[11];
	cin>>a;
	
	for(i=0;i<a;i++){
		cin>>x[i];
	}
	for(i=a-1;i>=0;i--){
		cout<<x[i]<<" ";
	}
		





	return 0;
} 
