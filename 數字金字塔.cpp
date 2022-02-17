#include<iostream>  
using namespace std;  
int main()  
{  
    int n;  
    while(cin>>n){
    for(int i=1;i<=n;i++)//1<=3  
    {  
        for(int j=n;j>i;j--) //j=2  
        {   
            cout<<"_";  
        }  
        for(int x=1;x<=i*2-1;x++)  
        {  
            cout<<i;  
        }     
        cout<<endl;
}
}  
    return 0;  
}
