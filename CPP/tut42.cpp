#include <iostream>
#include <math.h>

using namespace std;
class SimpleCalcutaor
{
protected:
    int sum;
    int sub;
    int mult;
    float div;

public:
    void SimpleCalculation()
    {
        int num1, num2;
        cout << "Enter two number" << endl;
        cin >> num1;
        cin >> num2;

        cout << "The Sum of Num1 and Num2 is " << num1 + num2 << endl;
        cout << "The Subtrackstion of Num1 and Num2 is " << num1 - num2 << endl;
        cout << "The Multiplication of Num1 and Num2 is " << num1 * num2 << endl;
        cout << "The Devide of Num1 and Num2 is " << num1 / num2 << endl;
    }
};
class ScientificCalculator
{
protected:
    float square1;
    float square2;
    float maximum;
    float minimum;
    float log1;
    float log2;

public:
    void ScientificCalculation()
    {
        int num1, num2;
        cout << "Enter two number" << endl;
        cin >> num1;
        cin >> num2;
        square1 = sqrt(num1);
        square2 = sqrt(num2);
        maximum = max(num1, num2);
        minimum = min(num1, num2);
        log1 = log(num1);
        log2 = log(num2);

        cout << "The MAX between Num1 and Num2 is " << maximum << endl;
        cout << "The MIN between Num1 and Num2 is " << minimum << endl;
        cout << "The Squareroot of Num1 and Num2 is " << square1 << " and " << square2 << endl;
        cout << "The log of Num1 and Num2 is " << log1 << " and " << log2 << endl;
    }
};

class HybridCalculator : public SimpleCalcutaor, public ScientificCalculator
{

};
int main()
{

    HybridCalculator amit;

    amit.ScientificCalculation();
    amit.SimpleCalculation();
    return 0;
}