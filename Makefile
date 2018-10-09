CC = g++

TARGET = CoinTradingBot
OBJDIR = obj
SRCS := $(shell find . -name '*.cpp')
SRCDIRS := $(shell find . -name '*.cpp' -exec dirname {} \; | uniq)
INC := -I./core


OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.cpp, %.o, $(SRCS)))

all : buildrepo $(OBJDIR) $(TARGET)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(TARGET) : $(OBJS)
	$(CC) $(INC) -o $@ $^
	
$(OBJDIR)/%.o : %.cpp
	$(CC) $(INC) -o $@ -c $<

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
