#include<iostream>            //層數 空白 數量 
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int x=i-1;x<a/2+a;x++)
		cout<<"_";
		for(int j=1;j<=i;j=j+1){
		cout<<i;
		} 
		cout<<endl;
	}
	return 0;
} 
