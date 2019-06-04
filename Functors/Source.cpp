#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<Windows.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<time.h>

using namespace std;

class ABegin
{
	char z;
public:
	ABegin(char z) :z(z) {}
	bool operator()(string x)
	{
		return x[0] == z;
	}
};

class A
{
	int x;
public:
	A(int x):x(x) {};
	virtual void f() {};
};

class B :public A 
{
public:
	B(int x) :A(x)
	{}
};

class C : public A 
{
public:

	C(int x) :A(x)
	{}
};

void main()
{
	srand(time(NULL));


	vector<A*> arr;



	arr.push_back(&A(5));
	arr.push_back(&A(10));
	arr.push_back(&C(6));
	arr.push_back(&A(3));
	arr.push_back(&C(10));
	arr.push_back(&C(6));
	arr.push_back(&C(3));
	arr.push_back(&C(10));
	arr.push_back(&C(6));
	arr.push_back(&C(3));
		
	int cnt = 0;

	cnt = count_if(begin(arr), end(arr), [](auto i) {
		bool a = false;
		if (string(typeid(*i).name()).substr(6).compare("C") == 0)
		{
			a = true;
		}
		return a;
	});

	cout << cnt << endl;

	system("pause");


///////////////////////////////////////////////////////
	//vector<int> arr(10000);

	//generate_n(begin(arr), 100000, []() {return 1 + rand() % 200; });
	//
	//for (auto i : arr)
	//	cout << i << " ";
	//cout << endl;
	//cout << "\n\n\n\n";

	//clock();
	//sort(begin(arr), end(arr));
	//int end = clock();

	//cout <<end << endl;



	////////////////////////////////////////
	//vector<int>arr(20);

	//generate_n(begin(arr), 20, []() {  return 1 + rand() % 100; });

	//int res = count_if(begin(arr), end(arr), [](int x) { return x % 2 == 0; });

	//vector<int>even(res);

	//vector<int>odd(20 - res);

	//copy_if(begin(arr), end(arr), begin(even), [](int x) {return x % 2 == 0; });
	//
	//copy_if(begin(arr), end(arr), begin(odd), [](int x) {return x % 2 == 1; });


	//for (auto it = begin(arr); it != end(arr); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;

	//for (auto it = begin(even); it != end(even); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;

	//for (auto it = begin(odd); it != end(odd); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;


	///////////////////////////////////////////
	//vector<double> arr = { 1,2,3,4,5,6,7,8,9,10 };
	//int ch = 0;
	//cout << "Number:" << endl;
	//cin >> ch;
	//
	//for_each(begin(arr), end(arr), [ch](double &x) { x /= ch; });

	//for (auto i : arr)
	//	cout << i << " ";
	//cout << endl;


	/////////////////////////////////////
	//vector<string> ls;
	//ls.push_back("asd");
	//ls.push_back("qwe");
	//ls.push_back("awq");
	//ls.push_back("qwe1");
	//ls.push_back("awq");
	//ls.push_back("awq");
	//ls.push_back("awq");
	//ls.push_back("awq");

	//char z = 'a';
	//auto it = remove_if(ls.begin(),ls.end(), [z](const string& s) {
	//		return s[0] == z;});

	//ls.erase(it, end(ls));
	//copy(begin(ls), end(ls), ostream_iterator<string>(cout, "\n"));


	////////////////////////////////////////////////////////////////////////


	//list<string> ls;
	//ls.push_back("asd");
	//ls.push_back("qwe");
	//ls.push_back("awq");
	//ls.push_back("qwe1");

	//ls.remove_if(ABegin('a'));
	//char z = 'a';
	//ls.remove_if([z](const string& s) {
	//	return s[0] == z;
	//});

	//copy(begin(ls), end(ls), ostream_iterator<string>(cout, "\n"));


}