#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
   cout << "Problem 1\n";
   float consumed_water;
    cout << "Enter value for consumed water : ";
    cin >> consumed_water;
    cout <<"Result  : "<< problemSolution1(consumed_water);

    cout << "Problem 2\n";
    float i;
    float j;
    float k;
    cout << "Enter value for first price : ";
    cin >> i;
    cout << "Enter value for second price : ";
    cin >> j;
    cout << "Enter value for third price : ";
    cin >> k;
    cout <<"Highest price  : "<< problemSolution2(i, j, k);

    cout << "Problem 3\n";
    float height;
    char S;
    cout << "Enter value for sex : ";
    cin >> S;
    cout << "Enter value for height : ";
    cin >> height;
    cout <<"Result  : "<< problemSolution3(height, S);

    cout << "Problem 5\n";
    float x, y;
    char operation;
    cout << "Enter value for first number : ";
    cin >> x;
    cout << "Enter value for second number : ";
    cin >> y;
    cout << "Enter value for operation : ";
    cin >> operation;
    cout <<"Result  : "<< problemSolution5(x,y, operation);

    return 0;
}
