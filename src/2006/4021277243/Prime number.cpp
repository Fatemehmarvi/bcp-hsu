#include<iostream>
using namespace std;
int main(){
int x, n, i, max, min, j, k;
cout<<"enter a number 1 (Do not enter the number 1 because it is neither prime nor composite):"<<endl;
cin>>x;
cout<<"enter a number 2 (Do not enter the number 1):"<<endl;
cin>>n;
if(x>n) {max=x, min=n;}
else{max=n, min=x;}
for(j=min;j<=max;j++)
 { k=0 ;
 for(i=2;i<j;i++) {
if(j%i==0) {k=+1;}
}
if(k==0) {cout<<j<<endl;}
}
return 0;
}
    
