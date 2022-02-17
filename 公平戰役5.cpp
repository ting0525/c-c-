#include<iostream>
using namespace std;
int main(){
	int a,b,c=0,n;
	cin>>n;
	for(int i=1;i<=n;i++){ 
	cout << "Case " << i << ": ";
	cin>>a>>b;
		if(a>b){
			c=a-b;
			cout<<"A"<<" "<<c<<endl;	
		}
		else if(a==b){
			c=0;
			cout<<c<<endl;
		}
		else{
			c=b-a;
			cout<<"B"<<" "<<c<<endl;
		}
	
	} 
	
	
	return 0;
}
