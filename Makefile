CC = gcc
CFLAGS = -Wall -Wextra -std=c11
BUILD_DIR = build
TARGET = $(BUILD_DIR)/ctm

.PHONY: ctm clean

ctm: $(TARGET)

$(TARGET): ctm.c utils/convert_to_metric.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) ctm.c utils/convert_to_metric.c -o $(TARGET)

clean:
	rm -rf $(BUILD_DIR)
