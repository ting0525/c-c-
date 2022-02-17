#include<iostream>
using namespace std;
int a[1000];
void put(int a,bool b);
void _sort(int x);
void change(int *a,int *b);
int main(){
	int x;
	cin>>x;
	
	put(x,0);
	
	_sort(x);
	
	put(x,1);
	
	return 0;
}
void put(int x,bool b){
	if(b==0){
	for(int i=0;i<x;i++)
		cin>>a[i];
	}
	if(b==1){
		for(int i=0;i<x;i++)
			cout<<a[i]<<" ";
	}
}
void output(int x){
	for(int i=0;i<x;i++)
		cout<<a[i]<<" ";
}
void change(int *a,int *b){
	*a=*a-*b;//1 2 -1
	*b=*b+*a;//2-1 1
	*a=*b-*a;//1+1 2
}

void _sort(int x){
	for(int j=0;j<x;j++){
		for(int i=0;i<x-j-1;i++){
			if(a[i]>a[i+1]){
				change(&a[i],&a[i+1]);
			}
		}	
	}
}
