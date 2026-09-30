#include <iostream>
#include <string>
// Lab 5 — Hussain Zahidi
// CIS 5 Week 05 · Eligibility check

int main() {
	using std::cout;
	using std::cin;
	using std::string;

	int age = 0;
	double gpa = 0.0;

	cout << "How old are you? ";
	cin >> age;

	cout << '\n' << "And your gpa? ";
	cin >> gpa;
	cout << '\n';

	bool adult = age >= 18;
	bool smart = gpa >= 3.8;

	if (adult && smart) {
		cout << "You're going to do just fine!";

	}
	else if (adult || smart) {
		cout << "Good luck with your future goals!";

	}
	else {
		cout << "What are your future plans?";
	}
	return 0;
}
