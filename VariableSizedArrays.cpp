#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n, q, p, k, i, j, suma = 0;
    
    cin>>n>>q; //liczba polece, liczba tablic
    
    vector <int> A; //wektor z tablicami
    vector <int> B; //wektor liczby tablicy i ich wymiarow
    
    for( int q; q > 0; q--){
        cin>>k;
        B.push_back(k);
        for( int i = 0; i < k; i++){
        cin>>p;
        A.push_back(p);
        }
    }
    
    for( int n; n > 0; n--){ 
        cin >> i >> j;
        suma = 0;
        for( int o = 0; o <= i; o++){
            suma += B[o];
        }
        cout<<A[suma + j]<<endl;
    }
    return 0;
}
