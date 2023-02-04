#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n; 
    
    cin>>n;
    
    int a;
    string name;
    map<string, int>g;
    
    for( int i = 0; i < n; i++){
        cin >> a >> name;
        
        switch(a){
            case 1:
                cin >> a;
                g[name] += a;
                break;
            case 2:
                g.erase(name);
                break;
            case 3:
                auto itr = g.find(name);
                cout << (itr != g.end() ? itr->second : 0) << endl;
                break;
        }
    }
    
    return 0;
}
