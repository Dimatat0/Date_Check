#include "iostream"
#include <regex>
#include <string>
#include <vector>

using namespace std;


bool dateisTrueCheck(string i)
{

	const regex r(R"(^(3[01]|[12][0-9]|0[1-9]).(1[0-2]|0[1-9]).[0-9]{4}$)");
	smatch m;
	return regex_match(i, m, r);

}
bool dateisTrueChecking(string i)
{
	const regex r(R"(^\d{2}\/(0[1-9]|1[012])\/(0[1-9]|[12][0-9]|3[01])$)");
	smatch m;
	return regex_match(i, m, r);
}

int main()
{

	string a = "1.02.2004";
	string b = "31.02.2004";
	cout << dateisTrueCheck(a);
	cout << dateisTrueCheck(b);

	string d = "20/02/9";
	string e = "20/02/39";
	string f = "20/02/29";
	cout << dateisTrueChecking(d);
	cout << dateisTrueChecking(e);
	cout << dateisTrueChecking(f);

}