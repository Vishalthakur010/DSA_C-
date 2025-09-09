#include<iostream>
using namespace std;

float areaOfCircle(float r){
    float area = 3.14 * r * r;
    return area;
}

int main(){
    float r;
    cin >> r;

    float area = areaOfCircle(r);
    cout << "area of circle is : " << area << endl;
}