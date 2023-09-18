#include <iostream>

class Room {
private:
    double length;
    double breadth;
    double height;
public:

    void initData(double len, double bre, double hei){
        length = len;
        breadth = bre;
        height = hei;
    }

    double calculateArea(){
        return length * breadth;
    }

    double calculateVolume(){
        return length * breadth * height;
    }
};

int main(){
    Room room1;
    room1.initData(42.5, 30.8, 19.2);
    std::cout << "Area of room " << room1.calculateArea() << std::endl;
    std::cout << "Volume of room " << room1.calculateVolume() << std::endl;

    return 0;
}