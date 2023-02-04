#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a;
    vector <int> k;
    
    cin >> n;
    
    for( int i = 0; i < n; i++ ){
        cin >> a;
        k.push_back(a);
    }
    
    int p = 0, y = 0;
    
    cin >> n;
    for( int i = 0; i < n; i++ ){
        y = 0;
        p = 0;
        cin >> a;
        
        auto lower = lower_bound(k.begin(), k.end(), a);
         
        if(lower != k.end() && *lower == a){
            cout << "Yes" <<" "<< distance(k.begin(), lower) + 1 << endl;
        }
        else if(lower != k.end()){
            cout << "No" <<" "<< distance(k.begin(), lower) + 1 << endl;
        }
    }
    return 0;
}
