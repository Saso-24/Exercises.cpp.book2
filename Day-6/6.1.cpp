#include <iostream>
using namespace std;

class cat{
	public:
		unsigned short int age;
		unsigned short int weight;
		void meow();
};

int main (){
	cat pal;
	pal.age = 2;
	pal.weight = 20;
	cout << "Pal is a " << pal.age << " years old cat\n";
	cout << "He is " << pal.weight << "kg fat cat\n";
	return 0;
}
