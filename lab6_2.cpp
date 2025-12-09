#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    double rad = deg*M_PI/180.0;
    return rad;
}

double rad2deg(double Rad){
    double Deg = Rad*180.0/M_PI;
    return Deg;
}

double findXComponent(double L1, double L2, double rad1, double rad2){
    double xcom = L1*cos(rad1)+L2*cos(rad2);
    return xcom;
}

double findYComponent(double L1, double L2, double rad1, double rad2){
    double ycom = L1*sin(rad1)+L2*sin(rad2);
    return ycom;
}

double pythagoras(double x, double y){
    double vec_l = sqrt(pow(x,2)+pow(y,2));
    return vec_l;
}

void showResult(double l, double d){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << l << endl;
    cout << "Direction of the resultant vector (deg) = " << d << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}