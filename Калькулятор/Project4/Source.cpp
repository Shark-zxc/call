#include <iostream>
//#include <time.h>

//using namespace std;

int main() {

	srand(time(NULL));
	
	int result = 1 + rand() % 20;
	std::cout << result << std::endl;

	// Калькулятор
	float nam1, nam2, res;
	std::cout << "Enter num1: ";
	std::cin >> nam1;

	std::cout << "Enter num2: ";
	std::cin >> nam2;

	char mach;
	std::cout << "Enter math symbo: ";
	std::cin >> mach;

	//if (mach == '+')
	//	res = nam1 + nam2;
	//else if (mach == '-')
	//	res = nam1 - nam2;
	//else if (mach == '*')
	//	res = nam1 * nam2;
	//else if (mach == '/')
	//	res = nam1 / nam2;

	switch (mach) {
	case '+': res = nam1 + nam2; break;
	case '-': res = nam1 - nam2; break;
	case '/': res = nam1 / nam2; break;
	case '*': res = nam1 * nam2; break;
	default:
		res = 0;
		std::cout << "Error";
		break;
	}

	std::cout << "Result: " << res << std::endl;

	// Остаток при делении
	int a=10, b=3, z;
	z = a % b;
	std::cout << z;

	// Сокращенные операции
	a -= 5;
	a--;

	return 0;
}