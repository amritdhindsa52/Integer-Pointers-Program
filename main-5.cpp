#include <iostream>

int main() {
    // Ask the user to enter three integer values
    std::cout << "Enter three integer values:\n";
    
    int a, b, c;
    std::cin >> a >> b >> c; // Store the values into three different variables
    
    // Create integer pointers to dynamic memory
    int *ptrA = new int(a);
    int *ptrB = new int(b);
    int *ptrC = new int(c);
    
    // Display the contents of the variables and pointers
    std::cout << "\nValues stored in variables:\n";
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    
    std::cout << "\nValues stored in pointers:\n";
    std::cout << "Pointer to a: " << *ptrA << std::endl;
    std::cout << "Pointer to b: " << *ptrB << std::endl;
    std::cout << "Pointer to c: " << *ptrC << std::endl;
    
    // Deallocate memory
    delete ptrA;
    delete ptrB;
    delete ptrC;
    
    return 0;
}
