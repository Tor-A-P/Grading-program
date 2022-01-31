#include <iostream>



void main() {

	int Grades[10]{ 32, 89, 99, 10, 100, 80, 90, 56, 73, 81 };

	for (int i{ 0 }; i < 10; i++) {
		if (Grades[i] >= 0 && Grades[i] < 50) {
			std::cout << "Student number " << i << " with a score of " << Grades[i] << " gets an F!\n";
		}
		if (Grades[i] >= 50 && Grades[i] < 60) {
			std::cout << "Student number " << i << " with a score of " << Grades[i] << " gets an E!\n";
		}
		if (Grades[i] >= 60 && Grades[i] < 70) {
			std::cout << "Student number " << i << " with a score of " << Grades[i] << " gets a D!\n";
		}
		if (Grades[i] >= 70 && Grades[i] < 80) {
			std::cout << "Student number " << i << " with a score of " << Grades[i] << " gets a C!\n";
		}
		if (Grades[i] >= 80 && Grades[i] < 90) {
			std::cout << "Student number " << i << " with a score of " << Grades[i] << " gets a B!\n";
		}
		if (Grades[i] >= 90 && Grades[i] <= 100) {
			std::cout << "Student number " << i << " with a score of " << Grades[i] << " gets an A!\n";
		}
	}
}
