#include <iostream>
#include <iomanip>
#include <string>

class Calculator {
public:
    void displayMenu();
    void performOperation();
    void performConversion();
    void performBasicArithmetic();

private:
    void massConversions();
    void areaConversions();
    void speedConversions();
    void volumeConversions();
    void lengthConversions();
    void temperatureConversions();
    void energyConversions();
    void pressureConversions();
    void timeConversions();
    void dataStorageConversions();
};

void Calculator::displayMenu() {
    std::cout << "==================== Calculator ====================\n";
    std::cout << "1. Basic Arithmetic Operations\n";
    std::cout << "2. Unit Conversions\n";
    std::cout << "3. Exit\n";
    std::cout << "====================================================\n";
}

void Calculator::performOperation() {
    int choice;
    displayMenu();
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        performBasicArithmetic();
        break;
    case 2:
        performConversion();
        break;
    case 3:
        std::cout << "Exiting...\n";
        exit(0);
    default:
        std::cout << "Invalid choice. Please try again.\n";
    }
}

void Calculator::performBasicArithmetic() {
    double num1, num2;
    char operation;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
    case '+':
        std::cout << "Result: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "Result: " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << "Result: " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << "Result: " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "Error: Division by zero.\n";
        }
        break;
    default:
        std::cout << "Invalid operator. Please try again.\n";
    }
}

void Calculator::performConversion() {
    int category;
    std::cout << "==================== Conversion Categories ====================\n";
    std::cout << "1. Mass\n";
    std::cout << "2. Area\n";
    std::cout << "3. Speed\n";
    std::cout << "4. Volume\n";
    std::cout << "5. Length\n";
    std::cout << "6. Temperature\n";
    std::cout << "7. Energy\n";
    std::cout << "8. Pressure\n";
    std::cout << "9. Time\n";
    std::cout << "10. Data Storage\n";
    std::cout << "11. Back to Main Menu\n";
    std::cout << "===============================================================\n";
    std::cout << "Enter your choice: ";
    std::cin >> category;

    switch (category) {
    case 1:
        massConversions();
        break;
    case 2:
        areaConversions();
        break;
    case 3:
        speedConversions();
        break;
    case 4:
        volumeConversions();
        break;
    case 5:
        lengthConversions();
        break;
    case 6:
        temperatureConversions();
        break;
    case 7:
        energyConversions();
        break;
    case 8:
        pressureConversions();
        break;
    case 9:
        timeConversions();
        break;
    case 10:
        dataStorageConversions();
        break;
    case 11:
        performOperation();
        break;
    default:
        std::cout << "Invalid choice. Please try again.\n";
    }
}

void Calculator::massConversions() {
    int choice;
    double value;
    std::cout << "Mass Conversions:\n";
    std::cout << "1. Kilograms to Grams\n";
    std::cout << "2. Pounds to Kilograms\n";
    std::cout << "3. Ounces to Grams\n";
    std::cout << "4. Tons to Kilograms\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " kg = " << value * 1000 << " g\n";
        break;
    case 2:
        std::cout << value << " lb ≈ " << value * 0.453592 << " kg\n";
        break;
    case 3:
        std::cout << value << " oz ≈ " << value * 28.3495 << " g\n";
        break;
    case 4:
        std::cout << value << " tons = " << value * 1000 << " kg\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::areaConversions() {
    int choice;
    double value;
    std::cout << "Area Conversions:\n";
    std::cout << "1. Square Meters to Square Centimeters\n";
    std::cout << "2. Square Kilometers to Square Meters\n";
    std::cout << "3. Acres to Square Feet\n";
    std::cout << "4. Hectares to Square Meters\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " m² = " << value * 10000 << " cm²\n";
        break;
    case 2:
        std::cout << value << " km² = " << value * 1000000 << " m²\n";
        break;
    case 3:
        std::cout << value << " acres = " << value * 43560 << " ft²\n";
        break;
    case 4:
        std::cout << value << " ha = " << value * 10000 << " m²\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::speedConversions() {
    int choice;
    double value;
    std::cout << "Speed Conversions:\n";
    std::cout << "1. Meters per Second to Kilometers per Hour\n";
    std::cout << "2. Miles per Hour to Kilometers per Hour\n";
    std::cout << "3. Knots to Kilometers per Hour\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " m/s = " << value * 3.6 << " km/h\n";
        break;
    case 2:
        std::cout << value << " mph ≈ " << value * 1.60934 << " km/h\n";
        break;
    case 3:
        std::cout << value << " knots ≈ " << value * 1.852 << " km/h\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::volumeConversions() {
    int choice;
    double value;
    std::cout << "Volume Conversions:\n";
    std::cout << "1. Liters to Milliliters\n";
    std::cout << "2. Cubic Meters to Liters\n";
    std::cout << "3. Gallons (US) to Liters\n";
    std::cout << "4. Cubic Inches to Cubic Centimeters\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " L = " << value * 1000 << " mL\n";
        break;
    case 2:
        std::cout << value << " m³ = " << value * 1000 << " L\n";
        break;
    case 3:
        std::cout << value << " gallons ≈ " << value * 3.78541 << " L\n";
        break;
    case 4:
        std::cout << value << " in³ ≈ " << value * 16.3871 << " cm³\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::lengthConversions() {
    int choice;
    double value;
    std::cout << "Length Conversions:\n";
    std::cout << "1. Meters to Centimeters\n";
    std::cout << "2. Kilometers to Meters\n";
    std::cout << "3. Miles to Kilometers\n";
    std::cout << "4. Feet to Meters\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " m = " << value * 100 << " cm\n";
        break;
    case 2:
        std::cout << value << " km = " << value * 1000 << " m\n";
        break;
    case 3:
        std::cout << value << " miles ≈ " << value * 1.60934 << " km\n";
        break;
    case 4:
        std::cout << value << " ft ≈ " << value * 0.3048 << " m\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::temperatureConversions() {
    int choice;
    double value;
    std::cout << "Temperature Conversions:\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cout << "3. Celsius to Kelvin\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " °C = " << (value * 9 / 5) + 32 << " °F\n";
        break;
    case 2:
        std::cout << value << " °F = " << (value - 32) * 5 / 9 << " °C\n";
        break;
    case 3:
        std::cout << value << " °C = " << value + 273.15 << " K\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::energyConversions() {
    int choice;
    double value;
    std::cout << "Energy Conversions:\n";
    std::cout << "1. Joules to Calories\n";
    std::cout << "2. Kilowatt-Hours to Joules\n";
    std::cout << "3. BTU to Joules\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " J ≈ " << value * 0.239006 << " cal\n";
        break;
    case 2:
        std::cout << value << " kWh = " << value * 3.6e6 << " J\n";
        break;
    case 3:
        std::cout << value << " BTU ≈ " << value * 1055.06 << " J\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::pressureConversions() {
    int choice;
    double value;
    std::cout << "Pressure Conversions:\n";
    std::cout << "1. Pascals to Kilopascals\n";
    std::cout << "2. Atmospheres to Pascals\n";
    std::cout << "3. Bars to Pascals\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " Pa = " << value * 0.001 << " kPa\n";
        break;
    case 2:
        std::cout << value << " atm ≈ " << value * 101325 << " Pa\n";
        break;
    case 3:
        std::cout << value << " bar = " << value * 100000 << " Pa\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::timeConversions() {
    int choice;
    double value;
    std::cout << "Time Conversions:\n";
    std::cout << "1. Minutes to Seconds\n";
    std::cout << "2. Hours to Minutes\n";
    std::cout << "3. Days to Hours\n";
    std::cout << "4. Weeks to Days\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " minutes = " << value * 60 << " seconds\n";
        break;
    case 2:
        std::cout << value << " hours = " << value * 60 << " minutes\n";
        break;
    case 3:
        std::cout << value << " days = " << value * 24 << " hours\n";
        break;
    case 4:
        std::cout << value << " weeks = " << value * 7 << " days\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

void Calculator::dataStorageConversions() {
    int choice;
    double value;
    std::cout << "Data Storage Conversions:\n";
    std::cout << "1. Bytes to Kilobytes\n";
    std::cout << "2. Kilobytes to Megabytes\n";
    std::cout << "3. Gigabytes to Megabytes\n";
    std::cout << "4. Terabytes to Gigabytes\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "Enter value: ";
    std::cin >> value;

    switch (choice) {
    case 1:
        std::cout << value << " B = " << value / 1024 << " KB\n";
        break;
    case 2:
        std::cout << value << " KB = " << value / 1024 << " MB\n";
        break;
    case 3:
        std::cout << value << " GB = " << value * 1024 << " MB\n";
        break;
    case 4:
        std::cout << value << " TB = " << value * 1024 << " GB\n";
        break;
    default:
        std::cout << "Invalid choice.\n";
    }
}

int main() {
    Calculator calculator;
    while (true) {
        calculator.performOperation();
    }
    return 0;
}
