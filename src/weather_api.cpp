#include "../includes/weather_api.h"
#include <iostream>
#include <fstream>

WeatherAPI::WeatherAPI(const std::string filePath) {
    this->filePath = filePath;
    this->key = getApiKey();
    std::cout << "API Key: " << this->key << std:: endl;
}

std::string WeatherAPI::getApiKey() {
    std::ifstream file(filePath);
    std::string key;

    if (file.is_open()) {
        std::getline(file, key);
        file.close();
        std::cout << "File opened and closed: " << filePath << std::endl;
    } 
    else {
        std::cout << "Unable to open file: " << filePath << std::endl;
    }

    return key;
}

std::string WeatherAPI::getWeatherData(std::string cityName) {
    // Replace this with the actual implementation to fetch weather data from the API
    std::string data = "Dummy weather data";
    return data;
}