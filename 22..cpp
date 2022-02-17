#include <iostream> 
using namespace std;     
int main(){         
	int a,b=1;                                     //有一個數列是這樣的：
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
	
                                             //第一項是一個大於一的正整數 N
                                             //如果這一項是奇數，則它的下一項是 3N+1
                                             //如果這一項是偶數，則它的下一項是 N/2 
                                             //如此反覆，直到最後一項出現 1 為止
                                             //現在給你第一項的 N，請你求出這個數列有幾項，例如第一項是3，則這個數列為：3、10、5、16、8、4、2、1，共8項。


       
	return 0;  
} 
