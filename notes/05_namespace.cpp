#include <iostream>

namespace first{
    int x = 5;
}
namespace second{
    int x = 6;
}

int main(){
    int x = 1;
    std::cout << first::x;
    // The :: is known as the "Scope Resolution operator"




return 0;
}
