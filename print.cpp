#include <iostream>
#include <Windows.h>
#include <string>

#define DEMO true

enum types { cout, cin };
enum colors { black, blue, green, cyan, red, magenta, brown, lightgrey, darkgrey, lightblue, lightgreen, lightcyan, lightred, lightmagenta, yellow, white };


auto print(std::string a, const int color, const int type, bool endl)
{
	if (type == types::cout) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		endl ? std::cout << a << std::endl : std::cout << a;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		std::cin >> a;
}

auto main() -> int
{
	//  example usage
	if (DEMO) {
	print("Demo", colors::lightgreen, types::cout, true);
	print("Demo#2", colors::lightred, types::cout, false);
	print("Demo#3", colors::white, types::cout, false);
	}
	system("pause");
	return 0;
}

