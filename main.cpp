#include"Table.h"
//#include "vld.h"
#include <chrono>
#include <type_traits>

int main()
{
	Table table("table.txt");
	table.profile = true;
	std::cout << table << std::endl;
	table.methodDoubleAproximate();
	//std::cout << table << std::endl;
	
	
	
	
	std::cout << "After double approximation method\n";
	std::cout << table << std::endl;

	table.potentialsMethod();

	//std::cout << table << std::endl;
	//table.saveSolution();

	return 0;
}