#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult: public Base {
	public:
		Mult(Base*  obj1, Base* obj2) : Base() {
			object1 = obj1;
			object2 = obj2;
		}
	
		virtual double evaluate() {
			return object1->evaluate() * object2->evaluate();
		}
		
		virtual std::string stringify() {
			return object1->stringify() + " * " +  object2->stringify();
		}

	private:
		Base* object1;
		Base* object2;
};

#endif //__MULT_HPP__		
