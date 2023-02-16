#include<iostream>
#include<cmath>
using namespace std;

int main()
    {
        float a,b,c,x1,x2,determinant,realPart,imagPart;
        cout<<"Enter the coefficient a :: "; 
        cin >> a;
        cout<<"Enter the coefficient b :: "; 
        cin >> b;
        cout<<"Enter the coefficient c :: "; 
        cin >> c;

        determinant = b*b-4*a*c;

        if(determinant>0)
            {
                x1 = (-b + sqrt(determinant)) / (2*a);
                x2 = (-b - sqrt(determinant)) / (2*a);
                cout<<"Roots are real and different"<<endl;
                cout<<"Real part is "<<x1<<endl;
                cout<<"Imaginary part is "<<x2<<endl;
            }
        else if(determinant == 0)
            {
                cout<<"Roots are real and same"<<endl;
                x1 = (-b + sqrt(determinant)) / (2*a);
                cout<<"Real and imaginary part are "<<x1<<endl;
            }
        else
            {
                realPart = -b/(2*a);
                imagPart = sqrt(-determinant) / (2*a);
                cout<<"Roots are complex and different."<<endl;
                cout<<"x1 = "<<realPart<<" + "<<imagPart<<"i"<<endl;
                cout<<"x2 = "<<realPart<<" - "<<imagPart<<"i"<<endl;
            }
    }