CC = gcc
CFLAGS = -Wall -O2

SRC_DIR = ./src
TARGET = main.out

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

$(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(TARGET)

.PHONY : clean all
clean :
	rm -f main $(OBJS) *.out
