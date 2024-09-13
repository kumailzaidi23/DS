#include <iostream>
#include<string>
class Student {
private:
	int reg_no;
	std::string name;
	float eng;
	float math;
	float science;
	float total;
public:
	Student(int a, std::string b, float c, float d, float e) { reg_no = a; name = b; eng = c; math = d; science = e; }
	int get_reg() { return reg_no; }
	std::string get_name() { return name; }
	float get_eng() { return eng; }
	float get_math() { return math; }
	float get_science() { return science; }
	float get_total() { return eng + math + science; }
	void Show_data() {
		std::cout << "Registration no: "; std::cout << get_reg(); std::cout<<"\n";
		std::cout << "Name: "; std::cout << get_name(); std::cout<<"\n";
		std::cout << "English: "; std::cout << get_eng(); std::cout<<"\n";
		std::cout << "Maths: "; std::cout << get_math(); std::cout<<"\n";
		std::cout << "Science: "; std::cout << get_science(); std::cout<<"\n";
		std::cout << "Total Marks: "; std::cout << get_total(); std::cout<<"\n";

	}
};

int main() {
	Student test(231351, "Kumail Zaidi", 50, 60, 70);
	test.Show_data();
}
