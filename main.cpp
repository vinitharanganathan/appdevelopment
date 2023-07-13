/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class WeatherData {
private:
    string weatherCondition;

public:
    WeatherData(const string& weatherCondition) : weatherCondition(weatherCondition) {}

    string getWeatherDescription() {
        string description;
        if (weatherCondition == "cloudy") {
            description = "Cloudy weather";
        } else if (weatherCondition == "dry") {
            description = "Dry weather";
        } else if (weatherCondition == "rain") {
            description = "Rainy weather";
        } else if (weatherCondition == "thunderstorm") {
            description = "Thunderstorm";
        } else if (weatherCondition == "heatwaves") {
            description = "Heatwaves";
        } else {
            description = "Weather condition not available";
        }
        return description;
    }
};

class WeatherReport : public WeatherData {
private:
    string location;

public:
    WeatherReport(const string& weatherCondition, const string& location) : WeatherData(weatherCondition), location(location) {}

    string getLocation() {
        return location;
    }

    string getTemperature() {
        
        return "25°C";
    }

    string getHumidity() {
        
        return "70%";
    }

    string getRainPossibility() {
        
        return "30%";
    }

    string generateReport() {
        string weatherDescription = getWeatherDescription();
        string temperature = getTemperature();
        string humidity = getHumidity();
        string rainPossibility = getRainPossibility();

        
        string report = "Location: " + getLocation() + "\nToday's weather: " + weatherDescription + "\nTemperature: " + temperature + "\nHumidity: " + humidity + "\nRain Possibility: " + rainPossibility;
        return report;
    }
};

void printAdditionalInformation() {
    cout << "\nAdditional Information:" << endl;
    cout << "Name: Vinitha" << endl;
    cout << "College name: Vivekananda College of Engineering for Women" << endl;
}

void printLocationOptions() {
    cout << "\nLocation:" << endl;
    cout << "1. Today" << endl;
    cout << "2. Yesterday" << endl;
    cout << "3. Tomorrow" << endl;
    cout << "4. Week report" << endl;
    cout << "5. Month weather" << endl;
}

void printWeatherConditions() {
    cout << "\nWeather Conditions:" << endl;
    cout << "1. Cloudy" << endl;
    cout << "2. Dry" << endl;
    cout << "3. Rain" << endl;
    cout << "4. Thunderstorm" << endl;
    cout << "5. Heatwaves" << endl;
    cout << "6. Rain Possibility" << endl;
    cout << "7. Humidity" << endl;
}

void printFunctions() {
    cout << "\nFunctions:" << endl;
    cout << "- Function 1" << endl;
    cout << "- Function 2" << endl;
    
}

void printClassAndObjects() {
    cout << "\nClass and Objects:" << endl;
    cout << "- Class 1" << endl;
    cout << "- Class 2" << endl;
   
}

void printOOPConcepts() {
    cout << "\nOOP Concepts:" << endl;
    cout << "- Encapsulation" << endl;
    cout << "- Inheritance" << endl;
    cout << "- Polymorphism" << endl;
    cout << "- Abstraction" << endl;
    cout << "- Encapsulation" << endl;
    
}

int main() {
    string weatherCondition;
    string location;

    cout << "Enter weather condition (cloudy, dry, rain, thunderstorm, heatwaves): ";
    cin >> weatherCondition;

    cout << "Enter location: ";
    cin >> location;

    WeatherReport weatherReport(weatherCondition, location);
    string report = weatherReport.generateReport();
    cout << report << endl;

    printAdditionalInformation();
    printLocationOptions();
    printWeatherConditions();
    printFunctions();
    printClassAndObjects();
    printOOPConcepts();

    return 0;
}