#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b=0;
	cin>>a;
	if(a==1)
		cout<<"NO";
	else{
		if(a!=2){
			for(int i=2;i<sqrt(a);i++){
				if(a%i==0)
				b=1;
				}	
			}
		if(b==0)
			cout<<"YES";
	
		else
		cout<<"NO";
	
	}
		
	
	return 0;
}
