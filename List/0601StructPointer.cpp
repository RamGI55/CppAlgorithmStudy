#include <iostream> 

// Linked list with the pointer struct. 
int main () 
{ 
    struct Node 
    {
        int data;
        Node* next;  
    };
    Node n1; 
    Node n2; 
    Node n3;

    n1.next = &n2;
    n2.next = &n3; 
    n3.next = nullptr; 

    std::cout << n1.next << ", " << &n2 << std::endl; 
    std::cout << n2.next << ", " << &n3 << std::endl; 

    return 0; 
}