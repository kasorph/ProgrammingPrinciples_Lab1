#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    int a, b;
    cout << endl << "Enter two integers: " << endl;
    cin >> a >> b;
    cout << "The sum is " << a + b << endl;

    float radius;
    cout << endl << "Enter the radius of a circle: " << endl;
    cin >> radius;
    cout << "The area is " << 3.14 * radius * radius << endl;

    int age;
    cout << endl << "Enter your age in years: " << endl;
    cin >> age;
    cout << "You are " << age * 12 << " months old." << endl;

    float celsius;
    cout << endl << "Enter temperature in Celsius: " << endl;
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << (celsius * 9/5) + 32 << endl;

    int num;
    cout << endl << "Enter an integer: " << endl;
    cin >> num;
    cout << "The square is " << num * num << endl;

    float principal, rate, time;
    cout << endl << "Enter principal, rate, and time: " << endl;
    cin >> principal >> rate >> time;
    cout << "Simple Interest is " << (principal * rate * time) / 100 << endl;

    float weight, height;
    cout << endl << "Enter weight (kg) and height (m): " << endl;
    cin >> weight >> height;
    cout << "Your BMI is " << weight / (height * height) << endl;

    float n1, n2, n3;
    cout << endl << "Enter three numbers: " << endl;
    cin >> n1 >> n2 >> n3;
    cout << "The average is " << (n1 + n2 + n3) / 3 << endl;

    int somenum;
    cout << endl << "Enter an integer to check even or odd: " << endl;
    cin >> somenum;
    if (somenum % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;

    return 0;
}
