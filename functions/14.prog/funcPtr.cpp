
#include <iostream>

void myFunction() {
    std::cout << "Hello from myFunction!" << std::endl;
}

int main() {
    /*void(*funcPtr)[] = &myFunction;*/  //ERROR function pointer declaration
    void(*funcPtr)() = &myFunction;                               //CORRECT function pointer declaration

 // Using dereferencing and function pointer together:-
    
    (*funcPtr)();// Dereferencing the pointer and calling the function
    funcPtr();   // Calling the function directly using the function pointer
    return 0;
}
//OUTPUT:
//Hello from myFunction!
//Hello from myFunction!