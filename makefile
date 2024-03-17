CC = g++
CFLAGS = -c

all: wapp

wapp: main.o weather_api.o weather_data.o weather_display.o
	$(CC) main.o weather_api.o weather_data.o weather_display.o -o wapp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

weather_api.o: src/weather_api.cpp
	$(CC) $(CFLAGS) src/weather_api.cpp

weather_data.o: src/weather_data.cpp
	$(CC) $(CFLAGS) src/weather_data.cpp

weather_display.o: src/weather_display.cpp
	$(CC) $(CFLAGS) src/weather_display.cpp

clean:
	rm -rf *.o
	rm -rf wapp