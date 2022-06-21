TARGET		=	phonebook

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
INC			=	-I $(SRCS_DIR)

SRCS_DIR	=	./src/
SRCS_NAME	=	main.cpp\
				PhoneBook.cpp\
				Contact.cpp
SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_NAME))
OBJS_DIR	=	./obj/
OBJS_NAME	=	$(SRCS_NAME:.cpp=.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJS_NAME))

$(TARGET):	$(OBJS_DIR) $(OBJS)
		$(CXX) $(CXXFLAGS) $(INC) $(OBJS) -o $@

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
		$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(OBJS_DIR):
		mkdir $(OBJS_DIR)

all:	$(TARGET)
clean:
		rm -rf $(OBJS_DIR)
fclean:	clean
		rm -f $(TARGET)

.PHONY:	clean, fclean, re, all