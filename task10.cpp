#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    
    
    cout << "Enter the coefficient a: ";
    cin >> a;
    
    cout << "Enter the coefficient b: ";
    cin >> b;
    
    cout << "Enter the coefficient c: ";
    cin >> c;
    
    
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real and distinct solutions:" << std::endl;
        cout << "Root 1: " << root1 << std::endl;
        cout << "Root 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
       
        double root = -b / (2 * a);
        cout << "One real solution (a repeated root):" << std::endl;
        cout << "Root: " << root << std::endl;
    } else {
       
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "No real solutions. Complex solutions:" << std::endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << std::endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
    
    return 0;
}






