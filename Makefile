CC = g++

TARGET = CoinTradingBot
OBJDIR = obj
SRCS := $(shell find . -name '*.cpp')
SRCDIRS := $(shell find . -name '*.cpp' -exec dirname {} \; | uniq)
INC := -I./inc
CFLAGS += -std=gnu++0x -pthread

OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.cpp, %.o, $(SRCS)))

all : buildrepo $(OBJDIR) $(TARGET)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(TARGET) : $(OBJS)
	$(CC) $(INC) $(CFLAGS) -lcurl -o $@ $^
	
$(OBJDIR)/%.o : %.cpp
	$(CC) $(INC) $(CFLAGS) -o $@ -c $<

buildrepo:
	@$(call make-repo)

define make-repo
   for dir in $(SRCDIRS); \
   do \
    mkdir -p $(OBJDIR)/$$dir; \
   done
endef
	
clean :
	rm -rf $(OBJDIR)
	rm $(TARGET)
