#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m,flag;
    printf("Enter the first number: ");
    cin >>n;
    printf("Enter the second number: ");
    cin >> m;
    for (int i = n; i <= m; i++){
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (int j = 2; j <= i / 2; ++j){
            if (i % j == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
           cout <<i<<" ";
        }
    }

    return 0;
}