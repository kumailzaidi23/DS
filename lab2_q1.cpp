#include <iostream>
#include<string>
class employee {
private:
        int id;
        std::string name;
        std::string dept;
        std::string posi;
public:
        employee(int a, std::string b, std::string c, std::string d) { id = a; name = b; dept = c; posi = d; }
        int get_id() { return id; }
        std::string get_name() { return name; }
        std::string get_dept() { return dept; }
        std::string get_position() { return posi; }
        void Show_data() {
                std::cout << "ID: "; std::cout << get_id(); std::cout<<"\n";
                std::cout << "Name: "; std::cout << get_name(); std::cout<<"\n";
                std::cout << "Department: "; std::cout << get_dept(); std::cout<<"\n";
                std::cout << "Position: "; std::cout << get_position(); std::cout<<"\n";\
        }
};

int main() {
        employee test(231351, "Kumail Zaidi", "Cyber Security","Reverse Engineer");
        test.Show_data();
}