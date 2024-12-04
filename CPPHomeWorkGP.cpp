// HomeWork of Giorgi Poladauri C++ 

#include <iostream>
#include <cmath>
using namespace std;

// Function to swap values of two real numbers
void swapValues(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

// Function to calculate the sum and product of two integers
void calculateSumAndProduct(int a, int b, int &product) {
    product = a * b;
}

// Function to calculate the area and perimeter of a triangle given its sides
void calculateTriangleProperties(double a, double b, double c, double &area, double &perimeter) {
    perimeter = a + b + c;
    double s = perimeter / 2;  // semi-perimeter
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to convert Lari to USD and EUR
void convertCurrency(double lari, double usdRate, double eurRate, double &usd, double &eur) {
    usd = lari / usdRate;
    eur = lari / eurRate;
}

// Main function for array tasks
void arrayTasks() {
    int N;
    cout << "Enter the size of the array (N): ";
    cin >> N;
    int arr[N];

    // Input array elements
    cout << "Enter " << N << " elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // a) Finding the index of the maximum element and replacing it
    int maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    if (maxIndex < N - 1) {
        arr[maxIndex] = arr[maxIndex + 1];
    } else {
        cout << "The maximum element has no next element." << endl;
    }

    // Printing the modified array
    cout << "Modified array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // b) Calculating the sum of the array elements
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;

    // c) Calculating the arithmetic mean of the array
    double average = static_cast<double>(sum) / N;
    cout << "Arithmetic mean of the array: " << average << endl;

    // d) Replacing positive elements with 1 and negative elements with 0
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) {
            arr[i] = 1;
        } else if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    // Printing the modified array
    cout << "Array with positive elements changed to 1 and negative to 0: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // z) Printing the reversed array
    cout << "Reversed array: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Part 1: Array tasks
    arrayTasks();

    // Part 2: Function tasks
    double a, b, c, lari, usdRate, eurRate, usd, eur;
    
    // a) Function to swap values and sort three numbers
    cout << "Enter three real numbers to sort: ";
    cin >> a >> b >> c;

    if (a > b) swapValues(a, b);
    if (b > c) swapValues(b, c);
    if (a > b) swapValues(a, b);

    cout << "Numbers in ascending order: " << a << " " << b << " " << c << endl;

    // b) Function to calculate sum and product of two integers
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    int sum = int1 + int2;
    int product;
    calculateSumAndProduct(int1, int2, product);

    cout << "Sum: " << sum << ", Product: " << product << endl;

    // c) Function to calculate the area and perimeter of a triangle
    cout << "Enter the three sides of a triangle: ";
    cin >> a >> b >> c;

    double area, perimeter;
    calculateTriangleProperties(a, b, c, area, perimeter);

    cout << "Triangle area: " << area << ", Perimeter: " << perimeter << endl;

    // d) Function to convert Lari to USD and EUR
    cout << "Enter the amount in Lari: ";
    cin >> lari;
    cout << "Enter the exchange rate for USD: ";
    cin >> usdRate;
    cout << "Enter the exchange rate for EUR: ";
    cin >> eurRate;

    convertCurrency(lari, usdRate, eurRate, usd, eur);

    cout << "Amount in USD: " << usd << ", Amount in EUR: " << eur << endl;

    return 0;
}
