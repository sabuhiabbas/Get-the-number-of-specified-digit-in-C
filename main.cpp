#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, cnt = 0, sum = 0;
    cin >> n >> a;
    n = abs(n);
    if(n == 0){
        if(a != 0){
           cout << 0 << endl;
           return 0;
        }
        else{
            cout << 1 << endl;
            return 0;
        }
    }
    while(n != 0){
        sum = n % 10;
        n = n / 10;
        if(sum == a) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
