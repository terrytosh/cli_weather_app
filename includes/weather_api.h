#pragma once
#include <string>

class WeatherAPI {
private:
    std::string key;
    std::string filePath;
    std::string getApiKey();
public:
    WeatherAPI(const std::string filePath);
    std::string getWeatherData(std::string cityName);
};