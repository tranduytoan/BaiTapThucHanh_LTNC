#include <iostream>
#include <sstream>
using namespace std;

class Student {
    int age, standard;
    string first_name, last_name;
public:
    void set_age(int age) {this->age = age;}
    void set_first_name(string fn) {this->first_name = fn;}
    void set_last_name(string ln) {this->last_name = ln;}
    void set_standard(int standard) {this->standard = standard;}

    int get_age() {return age;}
    string get_first_name() {return first_name;}
    string get_last_name() {return last_name;}
    int get_standard() {return standard;}

    string to_string() {
        stringstream ss;
        ss << age << ',' << first_name << ',' << last_name << ',' << standard;
        string result = ss.str();
        return result;
    }
};


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