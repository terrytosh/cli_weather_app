#pragma once
#include <string>

class WeatherAPI {
public:
    std::string getWeatherData(std::string cityName);
};