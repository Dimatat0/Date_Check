#include "iostream"
#include <regex>
#include <string>
#include <vector>

using namespace std;


bool dateisTrueCheck(string i)
{
	const regex r(R"(^[0-3][0-9].[0-3][0-9].(?:[0-9][0-9])?[0-9][0-9]$)");
	smatch m;
	return regex_match(i, m, r);
}

int main()
{
	string a = "1.02.2004";
	cout << dateisTrueCheck(a);

}