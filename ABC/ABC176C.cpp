//ABC176 C

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    
    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];

    int sum = 0;
    for(int i=1; i<N; i++){
        if(A[i]<A[i-1]){
            sum += A[i-1] - A[i];
            A[i] = A[i-1];
        }
    }

    cout << sum << endl;

    return 0;
}
