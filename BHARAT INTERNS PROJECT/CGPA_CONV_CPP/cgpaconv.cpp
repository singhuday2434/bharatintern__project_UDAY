#include <iostream>
using namespace std;

int main() 
{       cout<<"*******************************************"<<endl;
        cout<<"WELCOME TO CGPA TO PERCENTAGE CALCULATOR:)"<<endl;
        cout<<"*******************************************"<<endl;
    // Getting user input     for CGPA
    float cgpa;
 label:   std::cout << "Enter your CGPA: ";
    std::cin >> cgpa;
          if(cgpa>10)
          {
            cout<<"ERROR:INVALID INPUT"<<endl;
            goto label;

          }
    // Converting CGPA to percentage
    float percentage = cgpa * 9.5;

    // Output of the  converted value
    std::cout << "Your percentage is: " << percentage << "%\n";

    return 0;
}