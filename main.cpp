#include "includes/weather_api.h"
#include "includes/weather_data.h"
#include "includes/weather_display.h"

#include <iostream>

int main() {
    // Create an instance of WeatherAPI to fetch the data
    WeatherAPI api;

    // Fetch the weather data from the API
    std::string weatherData = api.getWeatherData("New York");

    // Create an instance of WeatherData to store the data
    WeatherData data;

    // Store the retrieved data in the WeatherData instance
    data.setData(weatherData);

    // Create an instance of WeatherDisplay to display the data
    WeatherDisplay display;

    // Display the weather data
    display.displayWeather(data.getData());

    return 0;
}