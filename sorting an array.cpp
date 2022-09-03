#include <algorithm> //std::sort
#include <iostream>
#include <iterator>  //std::size

int main()
{
	int array[]{ 3, 5, 1, 6, 9, 4, 2, 8, 7 };

	std::sort(std::begin(array), std::end(array));

	for (int i; i < static_cast<int>(std::size(array)); ++i)
		std::cout << array << " ";

	std::cout << '\n';

	return 0;
}

