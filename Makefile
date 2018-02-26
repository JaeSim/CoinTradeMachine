CC = g++

TARGET = CoinTradingBot


all : $(TARGET)

$(TARGET) : CoinTradingBot.o EventMessage.o
	$(CC) -o $@ $^

CointTradingBot.o : CoinTradingBot.cpp
	$(CC) -c -o $@ $^ 

EventMessage.o : ./core/EventMessage.cpp
	$(CC) -c -o $@ $^

clean :
	rm *.o CoinTradingBot
