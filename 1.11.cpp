/*
*Exercise 1.11
*/

#include<iostream>

int main()
{
	int v1, v2 = 0;
	std::cout << "Enter the minimum and maximum: " << std::endl;
	std::cin >> v1 >> v2; 
	int count = v1;
	while (count <= v2) {
		std::cout << count << " ";
		count++;
	}
}
