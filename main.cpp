#include<iostream>
#include<chrono>
#include<random>
int main() {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist(1.0, 10.0);

	int pointCounter = 0;
	while (true) {
		int x = dist(mt);
		int y = dist(mt);
		int sum = x + y;
		int isum;
		std::cout << x << " + " << y << " = ";
		std::cin >> isum;
		std::cout << "YOUR ANSWER : " << isum << " CORRECT ANSWER : " << sum << " STATUS : " << (sum == isum) << "\n";
		pointCounter += (sum == isum);
		std::cout << "POINTS : " << pointCounter << "\n";
	}
	return 0;
};
