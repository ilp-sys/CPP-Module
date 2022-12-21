NAME			  := 28s

CXX 				:= c++
CXXFLAGS  	:= -std=c++98 -Wall -Wextra -Werror

RM				  := rm
RMFLAGS     := -rf

SRCS 			  := AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp

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

.PHONY			: fclean
fclean			: clean
	$(RM) $(RMFLAGS) $(NAME)

.PHONY			: re
re				  : fclean all

$(OBJDIR)%.o:%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
