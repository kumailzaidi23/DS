#include <iostream>

class Distance{
public:
	int feet;
	float inches;
void showDistance(){
std::cout << "Inches: " ;std::cout<< inches ;std::cout<<"\n";
std::cout << "Feets: " ;std::cout<< feet;
}
void setFeet(int a){
feet=a;
}
void setInches(float a){
inches =a;
}
};

int main(){
Distance test;
test.setFeet(5);
test.setInches(5.2);
test.showDistance();
}
