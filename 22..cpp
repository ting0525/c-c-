#include <iostream> 
using namespace std;     
int main(){         
	int a,b=1;                                     //���@�ӼƦC�O�o�˪��G
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
	
                                             //�Ĥ@���O�@�Ӥj��@������� N
                                             //�p�G�o�@���O�_�ơA�h�����U�@���O 3N+1
                                             //�p�G�o�@���O���ơA�h�����U�@���O N/2 
                                             //�p�����СA����̫�@���X�{ 1 ����
                                             //�{�b���A�Ĥ@���� N�A�ЧA�D�X�o�ӼƦC���X���A�Ҧp�Ĥ@���O3�A�h�o�ӼƦC���G3�B10�B5�B16�B8�B4�B2�B1�A�@8���C


       
	return 0;  
} 
