//
//  main.cpp
//  Out in the Middle of Space
//
//  Created by Vladislav Palant on 3/2/25.
//

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void cartesianToSpherical(double x, double y, double z, double &r, double &theta, double &phi)
 {
     r = sqrt(x*x + y*y + z*z);

     if (r == 0.0) {
         theta = 0.0;
         phi   = 0.0;
     } else {
         theta = atan2(y, x);
         phi   = acos(z / r);
     }
 }
 void sphericalToCartesian(double r, double theta, double phi, double &x, double &y, double &z)
 {
     double sinPhi = sin(phi);
     x = r * cos(theta) * sinPhi;
     y = r * sin(theta) * sinPhi;
     z = r * cos(phi);
 }


 int main() {
     cout << "Welcome to the Point Conversion Program!" << endl << endl;
     
     cout << "Do you want to enter your coordinate in:\n"
          << "(1) Spherical Coordinates\n"
          << "(2) Cartesian Coordinates\n";
          
     int choice;
     cin >> choice;
     
     double x=0, y=0, z=0;
     double r=0, theta=0, phi=0;
     
     if (choice == 1) {

         cout << "\nEnter your spherical coordinates (r, theta, phi), separated by spaces:\n";
         cin >> r >> theta >> phi;
    
         sphericalToCartesian(r, theta, phi, x, y, z);
     }
     else {

         cout << "\nEnter your cartesian coordinates (x, y, z), separated by spaces:\n";
         cin >> x >> y >> z;
         
         cartesianToSpherical(x, y, z, r, theta, phi);
     }
     
     cout << "\nYour point is as follows. Angles are in radians:\n\n";
     cout << "Spherical Coordinates: (" << r << ", " << theta << ", " << phi << ")\n";
     cout << "Cartesian Coordinates: (" << x << ", " << y << ", " << z << ")\n\n";
     
     cout << "Thank you for using the Point Conversion Program!" << endl;
     
     return 0;
 }
