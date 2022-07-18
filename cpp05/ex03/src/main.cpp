/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/18 18:44:13 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat a("a", 1);
	Bureaucrat b("b", 60);
	Bureaucrat c("c", 140);
	Intern intern;
	try
	{
		Form* shru = intern.makeForm("shrubbery creation", "shruberry");
		Form* robo = intern.makeForm("robotomy request", "robotomy");
		Form* pres = intern.makeForm("presidential pardon", "presidential");
		std::cout << "==============Initialize==============" << std::endl;
		std::cout << a << std::endl << b << std::endl << c << std::endl << *shru << std::endl << *robo << std::endl << *pres << std::endl;
		std::cout << "============== C[140] ----signed---> shru[145], robo[72], pres[25] ==============" << std::endl;
		c.signForm(*shru);
		c.signForm(*robo);
		c.signForm(*pres);
		std::cout << *shru << std::endl << *robo << std::endl << *pres << std::endl;
		std::cout << "============== C[140] ----execute---> shru[137], robo[45], pres[5] ==============" << std::endl;
		c.executeForm(*shru);
		c.executeForm(*robo);
		c.executeForm(*pres);
		std::cout << "==============Reset==============" << std::endl;
		shru->setSigned(false);
		robo->setSigned(false);
		pres->setSigned(false);
		std::cout << *shru << std::endl << *robo << std::endl << *pres << std::endl;
		std::cout << "============== B[60] ----signed---> shru[145], robo[72], pres[25] ==============" << std::endl;
		b.signForm(*shru);
		b.signForm(*robo);
		b.signForm(*pres);
		std::cout << "============== B[60] ----execute---> shru[137], robo[45], pres[5] ==============" << std::endl;
		b.executeForm(*shru);
		b.executeForm(*robo);
		b.executeForm(*pres);
		std::cout << "==============Reset==============" << std::endl;
		shru->setSigned(false);
		robo->setSigned(false);
		pres->setSigned(false);
		std::cout << *shru << std::endl << *robo << std::endl << *pres << std::endl;
		std::cout << "============== A[1] ----signed---> shru[145], robo[72], pres[25] ==============" << std::endl;
		a.signForm(*shru);
		a.signForm(*robo);
		a.signForm(*pres);
		std::cout << "============== A[1] ----execute---> shru[137], robo[45], pres[5] ==============" << std::endl;
		a.executeForm(*shru);
		a.executeForm(*robo);
		a.executeForm(*pres);
		std::cout << "==============Reset==============" << std::endl;
		shru->setSigned(false);
		robo->setSigned(false);
		pres->setSigned(false);
		std::cout << *shru << std::endl << *robo << std::endl << *pres << std::endl;
		
		delete shru;
		delete robo;
		delete pres;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	return 0;
}
