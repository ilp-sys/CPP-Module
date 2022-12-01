NAME			  := book 

CC 				  := c++
CFLAGS  	  := -std=c++98 -Wall -Wextra -Werror

RM				  := rm
RMFLAGS     := -rf

SRCS 			  := PhoneBook.cpp main.cpp

OBJDIR			:= ./obj/
OBJNAME			:= $(SRCS:.cpp=.o)
OBJS			  := $(addprefix $(OBJDIR), $(OBJNAME))

.PHONY			: all
all				  : $(NAME)

$(NAME) 		:  $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY			: clean
clean			  :
	$(RM) $(RMFLAGS) $(OBJS)
	$(RM) $(RMFLAGS) $(OBJDIR)

.PHONY			: fclean
fclean			: clean
	$(RM) $(RMFLAGS) $(NAME)

.PHONY			: re
re				  : fclean all

$(OBJDIR)%.o:%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@
