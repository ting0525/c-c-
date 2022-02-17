#include<iostream>
using namespace std;
int main(){
	int n;
	int test[n];//宣告變數 
	cin>>n;//輸入項數 
	
	for(int i=0;i<n;i++)
		cin>>test[i];//輸入陣列 
		
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(test[j]>test[j+1]){
				test[j]=test[j]-test[j+1];
				test[j+1]=test[j+1]+test[j];
				test[j]=test[j+1]-test[j];
			}
		}//變數比大小互換
		 
		
	}
	
	for(int i=0;i<n;i++)
		cout<<test[i]<<" ";//輸出陣列 

	return 0;
}
/*
2 3 4 5 6
*/
