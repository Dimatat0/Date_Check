#include "iostream"
#include <regex>
#include <string>
#include <vector>

using namespace std;


bool dateisTrueCheck(string i)
{
	const regex r(R"(^\d{2}\/(0[1-9]|1[012])\/(0[1-9]|[12][0-9]|3[01])$)");
	smatch m;
	return regex_match(i, m, r);
}

int main()
{
	string a = "20/02/9";
	string b = "20/02/39";
	string c = "20/02/29";
	cout << dateisTrueCheck(a);
	cout << dateisTrueCheck(b);
	cout << dateisTrueCheck(c);

}