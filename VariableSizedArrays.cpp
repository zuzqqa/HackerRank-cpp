#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n, q, p, k, i, j, suma;
    
    scanf("%d" "%d", &n, &q);
    
    vector <int> A, B; 
    
    for(q; q > 0; q--){
        scanf("%d", &k);
        B.push_back(k);
        for(i = 0; i < k; i++){
        scanf("%d", &p);
        A.push_back(p);
        }
    }
    
    for(n; n > 0; n--){ 
        scanf("%d" "%d", &i, &j);
        suma = 0;
        if(i == 0){
            suma = 0;
        }
        else{
        for( int o = 0; o < i; o++){
            suma += B[o];
        }
        }
        printf("%d\n",A[suma+j]);
    }
    return 0;
}
