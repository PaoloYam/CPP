#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", false, 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) {
	*this = rhs;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == true)
	{
		if (executor.getGrade() <= this->getGradeExec())	
		{
			std::ofstream file(this->_target + "_shrubbery");
			file << "                                                       ." << std::endl
				<< "                                              .         ;" << std::endl
				<< "                 .              .              ;%     ;;" << std::endl
				<< "                   ,           ,                :;%  %;" << std::endl
				<< "                    :         ;                   :;%;'     .," << std::endl
				<< "           ,.        %;     %;            ;        %;'    ,;" << std::endl
				<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
				<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl
				<< "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
				<< "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
				<< "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
				<< "                    `:%;.  :;bd%;          %;@%;'" << std::endl
				<< "                      `@%:.  :;%.         ;@@%;'" << std::endl
				<< "                        `@%.  `;@%.      ;@@%;" << std::endl
				<< "                          `@%%. `@%%    ;@@%;" << std::endl
				<< "                            ;@%. :@%%  %@@%;" << std::endl
				<< "                              %@bd%%%bd%%:;" << std::endl
				<< "                                #@%%%%%:;;" << std::endl
				<< "                                %@@%%%::;" << std::endl
				<< "                                %@@@%(o);  . '" << std::endl
				<< "                                %@@@o%;:(.,'" << std::endl
				<< "                            `.. %@@@o%::;" << std::endl
				<< "                               `)@@@o%::;" << std::endl
				<< "                                %@@(o)::;" << std::endl
				<< "                               .%@@@@%::;" << std::endl
				<< "                               ;%@@@@%::;." << std::endl
				<< "                              ;%@@@@%%:;;;." << std::endl
				<< "                          ...;%@@@@@%%:;;;;,.." << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::NotSigned();
}

ShrubberyCreationForm &      ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	Form::operator=(rhs);
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}