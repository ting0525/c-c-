#include <iostream> 
using namespace std;     
int main(){         
	int a,b=1;                                     
	cin>>a;
	while(a!=1){
		while(a%2!=0){
			a=a*3+1;
			b=b+1;
			}
		while(a%2==0){
			a=a/2;
			b=b+1;
			}
		
			
			
		
	}
	cout<<endl<<b;



       
	return 0;  
} 
