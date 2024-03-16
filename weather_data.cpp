#include "weather_data.h"
#include <iostream>

void WeatherData::setData(std::string data) {
    // Implement logic to set the weather data
    std::cout << "Setting weather data: " << data << std::endl;
}

std::string WeatherData::getData() {
    // Implement logic to get the weather data
    std::cout << "Getting weather data" << std::endl;
    return "Dummy weather data";
}