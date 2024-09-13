#include <iostream>
#define pie 3.14159

class Circle{
private:
	float radius;
	float area;
public:
	void set_radius(float a){
	radius = a;
	}
	float get_radius(){
	return radius;
	}
	float get_area(){
	return pie*radius*radius;
	}
};

int main(){
Circle test;
test.set_radius(5);
std::cout << "Area: " ; std::cout<<test.get_area();std::cout <<"\n";
std::cout << "Radius: " ;std::cout<<test.get_radius();
}
