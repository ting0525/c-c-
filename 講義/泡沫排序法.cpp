#include<iostream>
using namespace std;
int main(){
	int n;
	int test[n];//�ŧi�ܼ� 
	cin>>n;//��J���� 
	
	for(int i=0;i<n;i++)
		cin>>test[i];//��J�}�C 
		
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(test[j]>test[j+1]){
				test[j]=test[j]-test[j+1];
				test[j+1]=test[j+1]+test[j];
				test[j]=test[j+1]-test[j];
			}
		}//�ܼƤ�j�p����
		 
		
	}
	
	for(int i=0;i<n;i++)
		cout<<test[i]<<" ";//��X�}�C 

	return 0;
}
/*
2 3 4 5 6
*/
