#include "includes/weather_api.h"
#include "includes/weather_data.h"
#include "includes/weather_display.h"

#include <iostream>
#include <string>

int main() {
    
    std::string filePath = "config.env";
    WeatherAPI api = WeatherAPI(filePath);

    return 0;
}