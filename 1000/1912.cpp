#include <bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x > 1) {
        return x * fact(x - 1);
    }

    return x;
}

int main(){
    int n;
    scanf("%d", &n);

    if(n == 0 || n == 1){
        printf("%d", n);
    }
    else{
        printf("%d", fact(n));
    }
}