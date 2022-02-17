#include<iostream>
using namespace std;
int main(){
	int a,b=0,c=0;  //a:原有幾隻.送幾隻 b:剩幾隻 c:總 
	cin>>a;
	if(a<5)
	cout<<a<<endl;
	if(a>=5){	
		while(a>=5){  
			b=a%5;
			a=a/5;
            c=a*5+b;
			a=a+b;                          //c=a*5+b+a+c;
			   
			  
			
				
		}
}
	cout<<a*5+b+a+c<<endl;


	
	return 0;
} 



