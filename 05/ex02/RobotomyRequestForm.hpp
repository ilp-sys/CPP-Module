#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

class RobotomyRequestForm : public AForm
{
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
};

#endif
