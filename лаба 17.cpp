#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class Shape {
private:
	string name;
	string color;
public:
    void setName(const string& name) {
       this->name = name;
       cout << "Name:" << name << endl;
       cout << "-----------------" << endl;
    }
 // Getter для name
    string getName() {
        return name;
    }
 // Setter для color
    void setColor(string color) {
       this->color = color;
       cout << "Color:" << color << endl;
       cout << "-----------------" << endl;
    }
// Getter для color
    const string& getColor() const {
        return color;
    }

};
class Circle : public Shape {
private:
    int radius;
    double S;
    double P;
public:
    Circle(int r, string name, string color) {
        radius = r;
        setName(name);
        setColor(color);
          
    };
    void doublearea() {
        S = 3.14 * pow(this->radius,2);
        cout << "Ploshcha:" << S << endl;
        cout << "-----------------" << endl;
    }
    void perumeneter() {
        P = 2 * 3.14 * this->radius;
        cout << "Perumeneter:" << P << endl;
        cout << "-----------------" << endl;
    }
};
class Square : public Shape {
private:
    int side;
    int S;
    int P;
public:
    Square(int side, string name, string color) {
        this->side = side;
        setName(name);
        setColor(color);
    };
    void doublearea() {
        S = pow(this->side,2);
        cout << "Ploshcha:" << S << endl;
        cout << "-----------------" << endl;
    }
    void perumeneter() {
        P = 4 * this->side;
        cout << "Perumeneter:" << P << endl;
        cout << "-----------------" << endl;
    }
};
class Triangle : public Shape {
private:
    int base;
    int height;
    double S;
    int P;
    int leftside;
    int rightside;
public:
    Triangle(int base, int height,string name, string color, int leftside, int rightside) {
        this->base = base;
        this->height = height;
        setName(name);
        setColor(color);
        this->leftside = leftside;
        this->rightside = rightside;};
    void doublearea() {
        S = 0.5 * this->base * this->height;
        cout << "Ploshcha:" << S << endl;
        cout << "-----------------" << endl;
    }
    void perumeneter() {
        P = this->leftside + this->rightside + this->base;
        cout << "Perumeneter:" << P << endl;
        cout << "-----------------" << endl;
    }

};
int main(){
   Circle cir(5,"newcircle","blue");
    cir.doublearea();
    cir.perumeneter();
    cout << "\t" << endl;
    Square ssqr(10,"KingSquare","Blue-Yellow");
    ssqr.doublearea();
    ssqr.perumeneter();
    cout << "\t" << endl;
    Triangle tri(8,5,"KingTriangle","Black",2,5);
    tri.doublearea();
    tri.perumeneter();
	return 0;
}

