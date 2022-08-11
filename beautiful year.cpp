#include<iostream>
using namespace std;
int main(){

int n, i, a, b, c, d;
cin>>n;

for(;;){
	n++;
	a=(n/1000);
	b=(n%10);
	c=(n%100)/10;
	d=(n%1000)/100;

	if((a!=b) && (a!=c) && (a!=d) && (b!=c) && (b!=d) && (c!=d)){
		cout<<n;
		break;
	}

	//cout<<a<<b<<c<<d;



}


}
