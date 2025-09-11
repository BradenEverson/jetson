CC=clang
CFLAGS=-g -Wall

BUILD_DIR=build/

LIBS=-ljetgpio

all: blinky

run: blinky
	sudo ./blinky

blinky: $(BUILD_DIR) $(BUILD_DIR)main.o 
	$(CC) $(CFLAGS) -o blinky $(BUILD_DIR)main.o $(LIBS)

$(BUILD_DIR)main.o: $(BUILD_DIR) main.c
	$(CC) $(CFLAGS) -c -o $(BUILD_DIR)main.o main.c

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR) blinky
