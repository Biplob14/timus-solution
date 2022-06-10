#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;

        scanf("%d", &n);
        int sum = 0;

        if( n<=0 ){
            for (i=n;i<=1;i++){
                sum += i;
            }
        }
            else{
                for(i=1;i<=n;i++){
                    sum += i;
            }
        }
        printf("%d\n", sum);
    return 0;
}
