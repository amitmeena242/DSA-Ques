#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<2) return n;
    int a=0,b=1,c=0;
    for(int i=1;i<n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
	int n = 4;
	cout << fib(n);
	return 0;
}
