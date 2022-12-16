NAME			  := PolY

CXX 				:= c++
CXXFLAGS  	:= -std=c++98 -Wall -Wextra -Werror

RM				  := rm
RMFLAGS     := -rf

SRCS 			  := Animal.cpp Cat.cpp Dog.cpp main.cpp

OBJDIR			:= ./obj/
OBJNAME			:= $(SRCS:.cpp=.o)
OBJS			  := $(addprefix $(OBJDIR), $(OBJNAME))

.PHONY			: all
all				  : $(NAME)

$(NAME) 		:  $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY			: clean
clean			  :
	$(RM) $(RMFLAGS) $(OBJS)
	$(RM) $(RMFLAGS) $(OBJDIR)

wrong       :
	$(CXX) $(CXXFLAGS) $(WRONGSRCS)

.PHONY			: fclean
fclean			: clean
	$(RM) $(RMFLAGS) $(NAME)

.PHONY			: re
re				  : fclean all

$(OBJDIR)%.o:%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
