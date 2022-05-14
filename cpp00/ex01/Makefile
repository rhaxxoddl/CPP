TARGET		=	phonebook

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	./src
SRCS		=	$(SRC_DIR)/phonebook.cpp
OBJ_DIR		=	./obj
OBJS		=	$(OBJ_DIR)/$(notdir $(SRCS:.cpp=.o))

$(TARGET):	$(OBJS)
		$(CXX) $(CXXFLAGS) $^ -o $@
$(OBJS):	$(SRCS)
		mkdir $(OBJ_DIR)
		$(CXX) $(CXXFLAGS) -c $< -o $@
all:	$(TARGET)
clean:
		rm -rf $(OBJ_DIR)
fclean:	clean
		rm -f $(TARGET)

.PHONY:	clean, fclean, re, all