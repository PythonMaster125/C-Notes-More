#include <iostream>
#include <cmath>

int main() {
    double startingHeight;
    double velocity;
    double time;

    std::cout << "Enter starting height: " << '\n';
    std::cin >> startingHeight;

    std::cout << "Enter inital velocity: " << '\n';
    std::cin >> velocity;

    std::cout << "Enter time: " << '\n';
    std::cin >> time;

      double timeMax = velocity / 10;
      double maxHeight = startingHeight + velocity * time - 5 * time * time;

    // This is the formula for projectile analysis
    // This formula is a simplified verison of h(t) = h₀ + v₀t - 1/2gt²
    std::cout << "Height at: " << time << "seconds is: " << maxHeight << " meters!" << '\n';
    std::cout << "Time of max height is: " << timeMax << " seconds!" << '\n';
 // Only calculate something after all the variables it needs already have values

    return 0;
}