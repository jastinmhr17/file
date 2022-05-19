#include<iostream>
using namespace std;
template <class t>
class asccending{
	public:
	void order(){
	int i,j;
	t a,temp;
	for( int i=0;i<10;i++){
		cout<<" enter a number: ";
		cin>>a[i];
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<9;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		cout<<a[j]<<endl;
	}
} 
};

int main(){
	asccending <int> obj;
	obj.order();
	return 0;
}
