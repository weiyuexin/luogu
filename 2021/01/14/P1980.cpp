/*
*writer:weiyuexin
*date:2020-01-14
*problem:洛谷P1980
**/

#include<iostream>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int sum=0;
    for(int i=1;i<=n;i++){
        int b=i;
        while(b!=0){     //循环求每一个数中的x出现的次数
            if(b%10==x){
                sum++;
            }
            b=b/10;
        }
    }
    cout<<sum;
    return 0;
}
