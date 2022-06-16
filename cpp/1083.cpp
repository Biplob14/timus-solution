#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, len, tmp;
    string k;

    cin>>n>>k;

    len = k.length();
    tmp = n;

    while(tmp-len>0){
        n *= tmp-len;
        tmp = tmp-len;
    }
    
    cout<<n<<endl;

    return 0;
}