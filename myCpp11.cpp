#include <cstdlib>
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <ctgmath>

using namespace std;

int main()
{
	unsigned a = 3;
	
	cout << "sizeof(unsigned) = " << sizeof(unsigned) << endl;
	
	a = std::sqrt(3);
	cout << a << " " << sqrt(3) << endl;
	
	int arr[3] = {1, 2, 3};
	int i = 2;
	cout << " arr[1] = " << arr[i] << " <->" << i[arr] << " " << 2[arr] << endl;
	
	
	cout << "sizeof arr = " << sizeof(arr) << endl;
	
	int idx = 1;
	
	cout << (( *(arr + idx) == *(arr + idx * sizeof(arr[0]))) ? 1 : 0) << endl;
	
	cout << reinterpret_cast<long>(arr + idx) << " " << reinterpret_cast<long>(arr + idx * sizeof(arr[0])) << endl;
	
	int* ptr  = &idx;
	cout << sizeof(ptr);
	
	cout << "Hi\n";

	// Updates
	/* One more try */
	
	return 0;
}
