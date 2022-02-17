#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){             
		for(int j=1;j<=a;j++){
		cout<<j<<"x"<<i<<"="<<setw(2)<<j*i<<" "<<"\t";
		
	}
	cout<<endl;
	
	}
	return 0;
}
