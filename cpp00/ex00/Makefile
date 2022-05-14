TARGET		=	megaphone

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	./src
SRCS		=	$(SRC_DIR)/megaphone.cpp
OBJ_DIR		=	./obj
OBJS		=	$(OBJ_DIR)/$(notdir $(SRCS:.cpp=.o))
# OBJECTS		=	$(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

$(TARGET):	$(OBJS)
		$(CXX) $(CXXFLAGS) $^ -o $@
$(OBJS):	$(SRCS)
		$(CXX) $(CXXFLAGS) -c $< -o $@
all:	$(TARGET)
clean:
		rm -f $(OBJS)
fclean:	clean
		rm -f $(TARGET)

.PHONY:	clean, fclean, re, all