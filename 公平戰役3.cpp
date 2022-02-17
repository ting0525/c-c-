#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	while(1){ 
		cin>>a>>b;
		 if ( cin.fail() ) break;
			if(a>b){
				c=a-b;
				cout<<"A"<<" "<<c<<endl;	
			}
			else if(a==0&&b==0){
				break;
			}
			else if(a==b){
				c=0;
				cout<<c<<endl;
			}
			else if(a<b){
				c=b-a;
				cout<<"B"<<" "<<c<<endl;
			}
			
		
		} 
		
	
	return 0;
}
