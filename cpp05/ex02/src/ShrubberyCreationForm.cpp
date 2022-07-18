#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name)
: Form(name, SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
: Form(src.getName(), SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this != &src)
		Form::operator=(src);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	executable(executor);
	std::string shrubbery = "                                              .\n"
							"                                   .         ;\n"
							"      .              .              ;%     ;;\n"
							"        ,           ,                :;%  %;\n"
							"         :         ;                   :;%;'     .,\n"
							",.        %;     %;            ;        %;'    ,;\n"
							"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
							"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
							"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
							"     `%;.     ;%;     %;'         `;%%;.%;'\n"
							"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
							"         `:%;.  :;bd%;          %;@%;'\n"
							"           `@%:.  :;%.         ;@@%;'\n"
							"             `@%.  `;@%.      ;@@%;\n"
							"               `@%%. `@%%    ;@@%;\n"
							"                 ;@%. :@%%  %@@%;\n"
							"                   %@bd%%%bd%%:;\n"
							"                     #@%%%%%:;;\n"
							"                     %@@%%%::;\n"
							"                     %@@@%(o);  . '\n"
							"                     %@@@o%;:(.,'\n"
							"                 `.. %@@@o%::;\n"
							"                    `)@@@o%::;\n"
							"                     %@@(o)::;\n"
							"                    .%@@@@%::;\n"
							"                    ;%@@@@%::;.\n"
							"                   ;%@@@@%%:;;;.\n"
							"               ...;%@@@@@%%:;;;;,..    Gilo97\n"
							"\n"
							"------------------------------------------------\n"
							"Thank you for visiting https://asciiart.website/\n"
							"This ASCII pic can be found at\n"
							"https://asciiart.website/index.php?art=plants/trees\n";
	std::ofstream of(executor.getName() + "_shrubbery", std::ofstream::in
														| std::ofstream::out
														| std::ofstream::trunc);
	if (of.fail())
		std::cerr << "[ERROR] Failed create file" << std::endl;
	else
	{
		of << shrubbery << std::endl;
		of.close();
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}