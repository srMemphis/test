#include <iostream>

#include "UnsignedRange.h"

int main()
{
	//UnsignedRange range;
	//
	//range.Add(1);
	//range.Add(2);
	//range.Add(3);
	
	//range.Add(4);

	//range.Add(5);
	//range.Add(6);
	//range.Add(7);

	//std::cout << range << std::endl;

	//std::cout << "Is 1 in range: " << range.IsInRange(1) << std::endl;
	//std::cout << "Is 7 in range: " << range.IsInRange(7) << std::endl;
	//std::cout << "Is 8 in range: " << range.IsInRange(8) << std::endl;
	//std::cout << "Is 0 in range: " << range.IsInRange(0) << std::endl;
	//std::cout << "Is 100 in range: " << range.IsInRange(100) << std::endl;

	//RangeIterator iter(range);
	//
	//for (auto i = iter.Get(); i < iter.GetMax(); iter.Advance())
	//{
	//	i = iter.Get();
	//	std::cout << i << ", ";
	//}

	//std::cout << std::endl;


	UnsignedRange range1;
	
	range1.AddInterval(10,15);

	range1.AddInterval(20, 25);

	range1.RemoveInterval(10,25);

	std::cout << range1 << std::endl;

	return 0;
}

