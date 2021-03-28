#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop..." << endl;

    while (true)
    {
        // Get needed info to calculate BMI
        char country;
        cout << "Please specify your country ([U]SA, [J]apan, [S]ingapore): ";
        cin >> country;
        double height;
        cout << "Enter your height in m: ";
        cin >> height;
        double mass;
        cout << "Enter your mass in kg: ";
        cin >> mass;

        // Exclude impossible situations
        if ((height < 0.0) || (mass < 0.0))
        {
            cout << "Either height or weight is negative. Please enter valid numbers..." << endl;
            continue;
        }

        // Calculate BMI and display result message based on given input
        double bmi = mass / (height * height);
        cout << "You are ";
        if ((country == 'U') || (country == 'u'))
        {
            if (bmi < 16.0) cout << "severely underweight";
            else if ((bmi >= 16.0) && (bmi <= 20.0)) cout << "underweight";
            else if ((bmi >= 20.0) && (bmi <= 25.0)) cout << "normal";
            else if ((bmi >= 25.0) && (bmi <= 30.0)) cout << "overweight";
            else cout << "unapplicable";
        }
        else if ((country == 'J') || (country == 'j'))
        {
            if ((bmi >= 18.5) && (bmi <= 22.9)) cout << "normal";
            if ((bmi >= 23.0) && (bmi <= 24.9)) cout << "overweight";
            if (bmi >= 25.0) cout << "obese";
            else cout << "unapplicable";
        }
        else if ((country == 'S') || (country == 's'))
        {
            if (bmi < 14.9) cout << "emaciation";
            else if ((bmi >= 15) && (bmi <= 18.4)) cout << "underweight";
            else if ((bmi >= 18.5) && (bmi <= 22.9)) cout << "Normal";
            else if ((bmi >= 23.0) && (bmi <= 27.5)) cout << "overweight";
            else cout << "unapplicable";
        }
        cout << endl;
    }

    return 0;
}
