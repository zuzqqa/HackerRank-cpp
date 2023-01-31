#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
        
    public:
        string to_string(); 
        
        void set_age(int age_1);
        int get_age();
        
        void set_first_name(string first_name);
        string get_first_name();
        
        void set_last_name(string last_name);
        string get_last_name();
        
        void set_standard(int standard);
        int get_standard();
};

string Student::to_string(){
    stringstream ret;
    
    ret << age << "," << first_name << "," << last_name << "," << standard;
    
    string ret_1 = ret.str();
    
    return ret_1;
}

void Student::set_age(int age_1){
    age = age_1;
}

int Student::get_age(){
    return age;
}

void Student::set_first_name(string first_name_1){
    first_name = first_name_1;
}

string Student::get_first_name(){
    return first_name;
}

void Student::set_last_name(string last_name_1){
    last_name = last_name_1;
}

string Student::get_last_name(){
    return last_name;
}

void Student::set_standard(int standard_1){
    standard = standard_1;
}

int Student::get_standard(){
    return standard;
}


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
