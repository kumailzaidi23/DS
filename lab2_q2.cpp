#include <iostream>

class Paper
{
private:
    double height, width;
public:
    Paper(){height = 0;width = 0;}
    ~Paper(){}
    void setHeight(double a){height = a;}
    void setWidth(double a){width = a;}
    double getHeight(){return height;}
    double getWidth(){return width;}
    double Area(){return height * width;}
    double Perimeter(){return 2 * height + 2 * width;}
    void properties()
    {
        std::cout << "Height: " << getHeight() << std::endl;
        std::cout << "Width: " << getWidth() << std::endl;
        std::cout << "Perimeter: " << Perimeter() << std::endl;
        std::cout << "Area: " << Area() << std::endl;
    }
};

int main(){
    Paper P;
    Paper* ptrPaper = &P;{};
    ptrPaper->setHeight(2.5);
    ptrPaper->setWidth(2.5);
    ptrPaper->properties();
    ptrPaper->~Paper();
}