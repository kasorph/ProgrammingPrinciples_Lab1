#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    int a, b;
    cout << "\nEnter two integers: ";
    cin >> a >> b;
    cout << "The sum is " << a + b << endl;

    float radius;
    cout << "\nEnter the radius of a circle: ";
    cin >> radius;
    cout << "The area is " << 3.14 * radius * radius << endl;

    int age;
    cout << "\nEnter your age in years: ";
    cin >> age;
    cout << "You are " << age * 12 << " months old." << endl;

    float celsius;
    cout << "\nEnter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << (celsius * 9/5) + 32 << endl;

    int num;
    cout << "\nEnter an integer: ";
    cin >> num;
    cout << "The square is " << num * num << endl;

    float principal, rate, time;
    cout << "\nEnter principal, rate, and time: ";
    cin >> principal >> rate >> time;
    cout << "Simple Interest is " << (principal * rate * time) / 100 << endl;

    float weight, height;
    cout << "\nEnter weight (kg) and height (m): ";
    cin >> weight >> height;
    cout << "Your BMI is " << weight / (height * height) << endl;

    float n1, n2, n3;
    cout << "\nEnter three numbers: ";
    cin >> n1 >> n2 >> n3;
    cout << "The average is " << (n1 + n2 + n3) / 3 << endl;

    int check;
    cout << "\nEnter an integer to check even or odd: ";
    cin >> check;
    if (check % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;

    return 0;
}
