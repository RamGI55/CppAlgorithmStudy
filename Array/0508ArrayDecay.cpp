#include <iostream> 

void printElementZero(const int arr[])
{
    std::cout<<arr[0];
}

void printArraySize(const int arr[])
{
    std::cout << sizeof(arr) << '\n'; 
}

int main() {

    const int prime[] {2, 3, 4}; 
    const int secondary [] { 1,2, 4, 5,6, 7,7,82};

    std::cout << sizeof(prime) << '\n'; 

    // printElementZero(prime); 
    // printElementZero(secondary); 
    printArraySize(prime);

    return 0; 

}
