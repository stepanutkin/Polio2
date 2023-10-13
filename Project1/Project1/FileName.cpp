#include <iostream>



class Triangle {
public :
	Triangle() :Triangle(10, 20, 30,40, 50, 60) {}
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
protected:
	Triangle(double a, double b, double c, double A, double B, double C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
private:
	double a, b, c ;
	double A , B, C;
};

class right_trian :public Triangle {
protected:
	right_trian(double c) :Triangle(10, 20, 30, 45, 45, c) {
	}
public:
	right_trian() :right_trian(90) {
	}
};

class isosceles_triangle : public Triangle {
protected:
	isosceles_triangle(double a, double A) :Triangle(a, 50, a, A, 25, A) {
	}
public:
	isosceles_triangle() :isosceles_triangle(20, 40) {
	}
};

class equilateral_triangle : public Triangle {
protected:
	equilateral_triangle(double a, double A) :Triangle(a, a, a, A, A, A) {
}
public:
	equilateral_triangle() :equilateral_triangle(25, 60) {

	}
};

class Quadrilateral{
public:
	Quadrilateral() :Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80) {}
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
protected:
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

private:
	double a, b, c, d;
	double A, B, C, D;
};

class parallelogram :public Quadrilateral {
protected:
	parallelogram(double a, double b, double A, double B) :Quadrilateral(a, b, a, b, A, B, A, B) {
	}
public:
	parallelogram() :parallelogram(10, 20, 30, 40) {
	}
};

class rectangle :public parallelogram {
public:
	rectangle():parallelogram(10, 20, 90, 90) {
	}
};

class square :public parallelogram {
public:
	square() :parallelogram(10, 10, 90, 90) {
	}
};

class rhombus :public parallelogram {
public:
	rhombus() :parallelogram(10, 10, 30, 40) {
	}
};


void print_info(Triangle* trio) {
	std::cout << "Edges: " << "a = " << trio->get_a() << " b = " << trio->get_b() << " c = " << trio->get_c() << std::endl;
	std::cout << "Angles: " << "A = " << trio->get_A() << " B = " << trio->get_B() << " C = " << trio->get_C() << std::endl;
}

void print_info_(Quadrilateral* trio) {
	std::cout << "Edges: " << "a = " << trio->get_a() << " b = " << trio->get_b() << " c = " << trio->get_c() << " d = " << trio->get_d()<< std::endl;
	std::cout << "Angles: " << "A = " << trio->get_A() << " B = " << trio->get_B() << " C = " << trio->get_C() << " D = " << trio->get_D() << std::endl;
}

int main() {
	
	Triangle a;
	std::cout << "Triangle:" << std::endl;
	print_info(&a);
	std::cout << std::endl;

	right_trian b;
	std::cout << "Rightriangle:" << std::endl;
	print_info(&b);
	std::cout << std::endl;

	isosceles_triangle c;
	std::cout << "isosceles triangle:" << std::endl;
	print_info(&c);
	std::cout << std::endl;

	equilateral_triangle d;
	std::cout << "equilateral triangle:" << std::endl;
	print_info(&d);
	std::cout << std::endl;


	Quadrilateral x;
	std::cout << "Quadrilateral:" << std::endl;
	print_info_(&x);
	std::cout << std::endl;

	rectangle y;
	std::cout << "rectangle:" << std::endl;
	print_info_(&y);
	std::cout << std::endl;

	square v;
	std::cout << "square:" << std::endl;
	print_info_(&v);
	std::cout << std::endl;

	rhombus w;
	std::cout << "rhombus:" << std::endl;
	print_info_(&w);
	std::cout << std::endl;

	parallelogram z;
	std::cout << "parallelogram:" << std::endl;
	print_info_(&z);
	std::cout << std::endl;


	return 0;
}