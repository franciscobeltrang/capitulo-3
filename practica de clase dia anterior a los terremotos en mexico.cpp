#include <iostream>

int add(int x, int y)
{
	return x +y;
}

void printResult(int z)
{
	std::cout << "la respuesta es: "<< z<< endl;

}
int getUserImput()
{
	std:: cout <<"ingrese un numero";
	int x{};
	std::cin>>x
	return x;

}

int main()
{
	int x{get UserImput() };
	int x{get UserImput() };
	
	int z {add (x, y)};
	printResult{z};
	
	return 0;
}
