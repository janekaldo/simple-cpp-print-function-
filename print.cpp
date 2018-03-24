#include <iostream>
#include <Windows.h>
#include <string>

enum types { cout, cin };
enum colors { black, blue, green, cyan, red, magenta, brown, lightgrey, darkgrey, lightblue, lightgreen, lightcyan, lightred, lightmagenta, yellow, white };


auto print(std::string a, const int color, const int type, bool endl) -> void
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
	print("xd", colors::blue, types::cout, true);
	system("pause");
	return 0;
}