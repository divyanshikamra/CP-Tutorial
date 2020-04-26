#include <iostream>
using namespace std;

int main(){

int t;
cin>>t;

for(int j=0; j<t;j++){

int a[3];
for (int i=0; i<3;i++){
cin>> a[i];
}

int n;
cin>>n;

int max=a[0];
for(int i=1; i<3; i++){
if (a[i]> max){
max=a[i];
}
}

int diff=0;
for(int i=0;i<3;i++){
diff+= max-a[i];
}
if(n==diff){
cout<<"YES"<<endl;}
else if(n<diff){
cout<<"NO"<< endl;
}
else if(n> diff){
n=n-diff;
if(n%3==0){
cout<<"YES"<<endl;
}
else {
cout<<"NO"<<endl;
}
}

}

}

