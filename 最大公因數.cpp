#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
		while(a!=0&&b!=0){
		
			if(a>=b){
				a=a%b;
			}
			else if(b>a){
				b=b%a;
			}		
	}
	    if(a>=b)
	    c=a;
	    else
	    c=b;
	    cout<<c<<endl;
	
	
	return 0;
} 

