#include "../includes/weather_api.h"
#include <iostream>
#include <fstream>
#include <stdexcept>

WeatherAPI::WeatherAPI(const std::string filePath) {
    this->filePath = filePath;
    this->key = getApiKey();
    std::cout << "API Key: " << this->key << std:: endl;
}

std::string WeatherAPI::getApiKey() {
    std::ifstream file(filePath);
    std::string key;

    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file: " + filePath);
    }
    
    if (!std::getline(file, key)) {
        throw std::runtime_error("Failed to read from file: " + filePath);
    }
    
    file.close();

    return key;
}

std::string WeatherAPI::getWeatherData(std::string cityName) {
    // Replace this with the actual implementation to fetch weather data from the API
    std::string data = "Dummy weather data";
    return data;
}