/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:25:32 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/06 23:41:39 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Ahmad", 5);
		Intern  someRandomIntern;
		Form *ptr;

		ptr = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (ptr)
		{
			a.signForm(*ptr);
			a.executeForm(*ptr);
			delete ptr;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}