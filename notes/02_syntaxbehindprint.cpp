// Let's break down the syntax behind the cout program:
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
/*
Line 1:  #include <iostream> is a "header file library", which means it lets us work with input and output objects(such as "cout" in line #5)
  - Header file libraries are in a way related to how you would use "import random" in Python.
Line 2: using namespace std; means that we can use names for objects and variables from the standard library.
Line 3: A blank space that C++ ignores, but we use it to make code more readable.
Line 4: int main() { is a function. Any code inside it's curly brackets will be executed.
Line 5: cout(pronounced see-out) basically means "C output". It's an object used together with the insertion operator (<<) to output/print text.
  - In the example above, it would print "Hello, World!"
  - cout is case sensitive. it's different than Cout.
Line 6: return 0; tells the operating system that the program finished successfully.
Line 7: The curly bracket closes out the program
*/
/*
#include <iostream>

  std::cout << "C++!";
  return 0;
}
*/
// Is also a valid way to print something
//  Using std:: makes it clear where names come from and avoids name conflicts in larger programs.