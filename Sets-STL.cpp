#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set <int> s;
    int a, x, n;
    
    cin >> n;
    
    while ( n > 0 ){
        cin >> a;
            switch(a){
                case 1: 
                    cin >> x;
                    s.insert(x);
                    break;
                case 2:
                    cin >> x;
                    s.erase(x);
                    break;
                case 3: 
                    cin >> x;
                    set<int>::iterator itr = s.find(x);
                    if( itr != s.end() ) cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                    break;   
            }
        n--;
    }
    return 0;
}
