#include <iostream>

class Figure {
public:
	Figure() :Figure("Figure") {
	}
	virtual void print_info() {
		std::cout << name << ":" << std::endl;
	}
protected:
	Figure(std::string name) {
		this->name = name;
	}
	std::string name;
};

class Triangle:public Figure{
public :
	Triangle() :Triangle(10, 20, 30,40, 50, 60,"Triangle") {}
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

	 void print_info() override {
		 std::cout << name << std::endl;
		std::cout << "Edges: " << "a = " << get_a() << " b = " << get_b() << " c = " << get_c() << std::endl;
		std::cout << "Angles: " << "A = " << get_A() << " B = " << get_B() << " C = " << get_C() << std::endl;
	}

protected:
	Triangle(double a, double b, double c, double A, double B, double C,std::string name):Figure(name) {
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
	right_trian(double a, double b, double c, double d,double e,std::string name) :Triangle(a,b,c,d,e,90,name) {
	}
public:
	right_trian() :right_trian(10,20, 30, 45, 45,"right_triangle") {
	}
	
};

class isosceles_triangle : public Triangle {
protected:
	isosceles_triangle(double a,double b, double A, double B,std::string name) :Triangle(a, b, a, A,B,A,name) {
	}
public:
	isosceles_triangle() :isosceles_triangle(20,10, 40, 60,"isosceles_triangle") {
	}
};

class equilateral_triangle : public Triangle {
protected:
	equilateral_triangle(double a, double A,std::string name) :Triangle(a, a, a, A, A, A,name) {
}
public:
	equilateral_triangle() :equilateral_triangle(25, 60,"equilateral_triangle") {
	}
};

class Quadrilateral:public Figure{
public:
	Quadrilateral() :Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80,"Quadrilateral") {}
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
		std::cout << name << std::endl;
		std::cout << "Edges: " << "a = " << get_a() << " b = " << get_b() << " c = " << get_c() << " d = " << get_d() << std::endl;
		std::cout << "Angles: " << "A = " << get_A() << " B = " << get_B() << " C = " << get_C() << " D = " << get_D() << std::endl;
	}
protected:
	Quadrilateral(double a, double b, double c,double d, double A, double B, double C,double D, std::string name):Figure(name){
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
	parallelogram(double a, double b, double A, double B,std::string name) :Quadrilateral(a, b, a, b, A, B, A, B,name) {
	}
	parallelogram(double a, double A, double B, std::string name) :Quadrilateral(a, a, a, a, A, B, A, B,name) {
	}

public:
	parallelogram() :parallelogram(10, 20, 30, 40,"parallelogram") {
	}
};

class rhombus :public parallelogram {
protected:
	rhombus(double a, double A, double B, std::string name) :parallelogram(a, A, B, name) {
	}
	rhombus(double a,std::string name) :parallelogram(a, 90, 90, name) {
	}
public:
	rhombus() :rhombus(10,20,30, "rhombus") {
	}
};

class square :public rhombus {
protected:
	square(double a,std::string name) :rhombus(a,name) {}
public:
	square() :square(10, "square") {
	}
};

class rectangle :public parallelogram {
protected:
	rectangle(double a, double b,std::string name) :parallelogram(a, b, 90, 90,name) {
	}
public:
	rectangle():rectangle(10, 20,"rectangle") {
	}
};


int main() {
	
	Figure a;
	a.print_info();
	std::cout << std::endl;

	Triangle t;
	t.print_info();
	std::cout << std::endl;

	isosceles_triangle b;
	b.print_info();
	std::cout << std::endl;

	equilateral_triangle e;
	e.print_info();
	std::cout << std::endl;

	right_trian f;
	f.print_info();
	std::cout << std::endl;

	Quadrilateral r;
	r.print_info();
	std::cout << std::endl;

	parallelogram p;
	p.print_info();
	std::cout << std::endl;

	rhombus u;
	u.print_info();
	std::cout << std::endl;

	square x;
	x.print_info();
	std::cout << std::endl;

	rectangle y;
	y.print_info();
	std::cout << std::endl;



	return 0;
}