#include <iomanip> 
#include <iostream> 

int main () 
{
    int arr[5] {9 , 4, 5, 3, 1}; 

    auto ptr{arr}; 
    std::cout << std::boolalpha << (typeid(ptr)==typeid(int*)) << std:: endl; 

    std::cout << std::boolalpha << (&arr[0] == ptr) << std::endl; 

    return 0;
}