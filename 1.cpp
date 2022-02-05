//#include <iostream>
//int main()
//{
//	using namespace std;
//	int carrots;
//	cout << "how many carrots do you have?\n";
//	cin >> carrots;
//	cout << "here are two more.";
//	carrots = carrots + 2;
//	cout << "now you have " << carrots << " carrots.\n";
//	return 0;
//}


//#include <iostream>
//int main()
//{
//	using namespace std;
//
//	double distance;
//	cout << "ÊäÈë¾àÀë: ";
//	cin >> distance;
//	cout << "¾àÀëÊÇ£º" << 220 * distance << " yard\n";
//
//	return 0;
//}

//#include <iostream>
//void print_mice();
//void print_run();
//int main()
//{
//	using namespace std;
//	print_mice();
//	print_mice();
//	print_run();
//	print_run();
//
//	return 0;
//}
//
//void print_mice()
//{
//	using namespace std;
//	cout << "three blind mice.\n";
//}
//void print_run()
//{
//	using namespace std;
//	cout << "see how the run.\n";
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int years;
//	cout << "enter you age: ";
//	cin >> years;
//	cout << "you are " << years << " years old, equals = " << 12 * years << " momth old\n";
//
//	return 0;
//}

//#include <iostream>
//void print_C();
//using namespace std;
//int main()
//{
//	print_C();
//
//	return 0;
//}
//void print_C() 
//{
//	float celsius = 0;
//	cout << "please enter a Celsius Value: ";
//	cin >> celsius;
//	cout << celsius << " degrees Celsius is " << celsius * 1.8 + 32.0 << " degrees Fahrenheit" << endl;
//}

//#include <iostream>
//double convert(double c);
//using namespace std;
//
//int main()
//{
//	double c_degree, f_degree;
//	cout << "please enter a  Celsius Value: ";
//	cin >> c_degree;
//
//	f_degree = convert(c_degree);
//	cout << c_degree << " Celsius equals " << f_degree << " Fahrenheit" << endl;
//
//
//	return 0;
//}
//
//double convert(double c)
//{
//	return c * 1.8 + 32.0;
//}


//#include <iostream>
//using namespace std;
//double print_lightyear(double c);
//int main()
//{
//	double a , b;
//	cout << " Enter the bumber of light years: ";
//	cin >> a;
//	b = print_lightyear(a);
//	cout << a << " light years = " << b << " astronomical unita." << endl;
//	return 0;
//}
//double print_lightyear(double c)
//{
//	return c * 63240;
//}


#include <iostream>

using namespace std;

void display_time(int h, int m);
int main()
{
	int hours, minutes;
	
	cout << "Enter the number of hours: ";
	cin >> hours;
	
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	display_time(hours, minutes);

	return 0;
}

void display_time(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}
