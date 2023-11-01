#include <iostream>

class Figure {
public:
	Figure() {
	}
	virtual void print_info()
	{
	}

};

class Triangle:public Figure{
public :
Triangle(double a, double b, double c, double A, double B, double C){
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	double get_a() {
		return a;
	}
	double get_b() {
		return b;
	}
	double get_c() {
		return c;
	}
	double get_A() {
		return A;
	}
	double get_B() {
		return B;
	}
	double get_C() {
		return C;
	}
  void print_info() override{
		std::cout << "Edges: " << "a = " << get_a() << " b = " << get_b() << " c = " << get_c() << std::endl;
		std::cout << "Angles: " << "A = " << get_A() << " B = " << get_B() << " C = " << get_C() << std::endl;
	}
private:
	double a, b, c ;
	double A , B, C;
};

class right_trian :public Triangle {
public:
	right_trian(double a, double b, double c, double A, double B):Triangle(a,b,c,A,B,90){}
};

class isosceles_triangle : public Triangle {
public:
	isosceles_triangle(double a,double b, double A, double B) :Triangle(a,b,a,A,B,A) {
	}
};

class equilateral_triangle : public Triangle {
public:
	equilateral_triangle(double a) :Triangle(a, a, a, 60, 60, 60){
}
};

class Quadrilateral:public Figure{
public:
	Quadrilateral(double a, double b, double c,double d, double A, double B, double C,double D){
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	double get_a() {
		return a;
	}
	double get_b() {
		return b;
	}
	double get_c() {
		return c;
	}
	double get_d() {
		return d;
	}
	double get_A() {
		return A;
	}
	double get_B() {
		return B;
	}
	double get_C() {
		return C;
	}
	double get_D() {
		return D;
	}
	void print_info() override{
		std::cout << "Edges: " << "a = " << get_a() << " b = " << get_b() << " c = " << get_c() << " d = " << get_d() << std::endl;
		std::cout << "Angles: " << "A = " << get_A() << " B = " << get_B() << " C = " << get_C() << " D = " << get_D() << std::endl;
	}
private:
	double a, b, c, d;
	double A, B, C, D;
};

class parallelogram :public Quadrilateral {
public:
	parallelogram(double a, double b, double A, double B) :Quadrilateral(a, b, a, b, A, B, A, B) {
	}
};

class rhombus :public parallelogram {
public:
	rhombus(double a, double A, double B) :parallelogram(a,a, A, B) {
	}
};

class square :public rhombus {
public:
	square(double a) :rhombus(a,90,90) {}
};

class rectangle :public parallelogram {
public:
	rectangle(double a, double b) :parallelogram(a, b, 90, 90) {
	}
};



void print_info(Figure* figure)
{
	figure->print_info();
}

int main() {
	
	Triangle t(10,20,30,40,50,60);
	std::cout << "Triangle:" << std::endl;
	print_info(&t);
	std::cout << std::endl;
	
	isosceles_triangle b(20,60,70,30);
	std::cout << "Isosceles_Triangle:" << std::endl;
	print_info(&b);
	std::cout << std::endl;

	equilateral_triangle e(30);
	std::cout << "equilateral_triangle:" << std::endl;
	print_info(&e);
	std::cout << std::endl;

	right_trian f(30,40,50,50,60);
	std::cout << "Right_Triangle:" << std::endl;
	print_info(&f);
	std::cout << std::endl;

	Quadrilateral r(30,40,50,60,70,80,90,100);
	std::cout << "Quadrilateral:" << std::endl;
	print_info(&r);
	std::cout << std::endl;

	parallelogram p(30,40,60,70);
	std::cout << "parallelogram:" << std::endl;
	print_info(&p);
	std::cout << std::endl;

	rhombus u(10,20,30);
	std::cout << "rhombus:" << std::endl;
	print_info(&u);
	std::cout << std::endl;

	square x(30);
	std::cout << "square:" << std::endl;
	print_info(&x);
	std::cout << std::endl;

	rectangle y(40,50);
	std::cout << "rectangle:" << std::endl;
	print_info(&y);
	std::cout << std::endl;

	return 0;
}