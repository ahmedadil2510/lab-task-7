#include <iostream>

using namespace std;
int main()
{
////	LAB TASK 1
//	int x [10];
//	cout<<"Please enter the ten integers"<<endl;
//	for(int i=0; i<10; i+=1){
//	cin>>x[i];}
//	for(int j=0; j<10; j+=1){
//	cout<<x[j]<<" ";}
	
////	LAB TASK 2
//	int a [5] = {};
//	int sum;
//	int p = 1;
//	cout<<"Please enter the 5 integers"<<endl;
//	for(int i=0; i<5; i+=1){
//	cin>>a[i];}
//	for(int i=0; i<5; i+=1){
//	sum = sum+a[i];}
//	for(int j=0; j<5; j+=1){
//	p = p*a[j];}
//	
//	cout<<"the sum is "<<sum<<" and the product is "<<p<<endl;

//	LAB TASK 3
	int r;
	cout<<"Please enter the number of rows"<<endl;
	cin>>r;
	if(r%2==0){	cout<<"Please enter an odd number"<<endl; return 0;}
	else{
		char b[r];
		int h = r/2;
	//	for upper half
		for(int i=0; i<=r; i+=1){b[i]=' ';}
		for(int j=0; j<=h; j+=1){
			b[h-j]='*';
			b[h+j]='*';
			for(int z=0; z<r; z+=1){cout<<b[z];}
			cout<<endl;
		}
	//	reverse of previous part, for the lower half 
		for(int q=0; q<h; q+=1){
			b[r-1-q]=' ';
			b[q]=' ';
			for(int s=0; s<r; s+=1){cout<<b[s];}
			cout<<endl;
		}
	}
	return 0;
}

