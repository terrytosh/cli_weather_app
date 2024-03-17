#include "includes/weather_api.h"
#include "includes/weather_data.h"
#include "includes/weather_display.h"

#include <iostream>
#include <string>

int main() {
    
    try {
        std::string filePath = "config.env";
        WeatherAPI api = WeatherAPI(filePath);
    }
    catch (const std::runtime_error &e) {
        std::cerr << "Runtime error caught: " << e.what() << std::endl;
    }
    

    return 0;
}