#include<iostream>
using namespace std;
int GCD(int a, int b){
	int x=0;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0) x=i;
	}
	return x;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
//求兩數之最大公因數
