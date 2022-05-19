#include<iostream>
using namespace std;
template <typename t>
void order (t a[],t x){
	t i,j,temp;
	for( int i=0;i<x;i++){
		cout<<" enter a number: ";
		cin>>a[i];
	}
	for(i=0;i<x;i++){
		for(j=i+1;j<x;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<" the order are: ";
	for(i=0;i<x;i++){
		cout<<a[i]<<endl;
	}
}
int main(){
	int n;
	cout<<"enter how many number you want to enter: ";
	cin>>n;
	int o[n];
	order <int> (o,n);
	return 0;
}
