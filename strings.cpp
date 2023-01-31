#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    char pom;
    
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    pom = a[0];
    
    a[0] = b[0];
    
    b[0] = pom;
    
    cout<<a<<" "<<b<<" "<<endl;
  
    return 0;
}
