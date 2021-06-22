#include <iostream>

using namespace std;


template<typename T>
class CreateArray
{
private:
	T value;
	T* Matrix;
	int size;
public:
	CreateArray(T, int);
	~CreateArray();

	void create();
};

template<typename T>
CreateArray<T>::CreateArray(T value, int size)
{
	cout << "Create Matrix" << endl;
	this->size = size;
	this->value = value;
	Matrix = new T[this->value];
}

template<typename T>
CreateArray<T>::~CreateArray()
{
	cout << "Delete Matrix" << endl;
	delete[] Matrix;
}

template<typename T>
void CreateArray<T>::create()
{
	cout << "Add element Maatrix" << endl;
	for (int i = 0; i < size; i++)
	{
		Matrix[i] = value * i * 10;
		cout << Matrix[i] << "	";
	}
	cout << endl;
}


template<typename TYPE>
void search(TYPE * ar, TYPE *max, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (ar[i] > *max)
		{
			*max = ar[i];
		}
	}
}


int main()
{
	int max = 0;
	int size = 3;
	int* ar = new int[size];
	for (int i = 0; i < size; i++)
	{
		int temp;
		cout << "input elemet: ";
		cin >> temp;
		ar[i] = temp;
	}
	search(ar, &max, size);
	cout << "Max element: " << max << endl;
	delete[] ar;

	CreateArray<int> crAr(max, size);
	crAr.create();
	
	return 0;
}