#include <iostream>
using namespace std;

int main(){
    int i,n,m=0;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%3==0){
            m+=i;
        }
    }
    cout<<"Sum of numbers which is duvisable by 3:"<<m<<endl;
    return 0;
}