#include <iostream>
#include <cmath>


int main () {
    const double PI = 3.14159265358793;
    double magnitude;
    double angleDegrees;

    std::cout << "Welcome to the Vector X & Y Component calculator!" << '\n';
    std::cout << "Start by inputing the magnitude: " << '\n';
    std::cin >> magnitude;

    std::cout << "Now input the angle (in degrees): " << '\n';
    std::cin >> angleDegrees;
    
    double angleRadians = angleDegrees * PI / 180.0;
    double xComponent = magnitude * cos(angleRadians);
    double yComponent = magnitude * sin(angleRadians);

    std::cout << "Your X component is: " << xComponent << '\n';
    std::cout << "Your Y component is: " << yComponent << '\n';

    std::cout << "Thank you for using the Vector Component Calculator!" << '\n';

return 0;
}