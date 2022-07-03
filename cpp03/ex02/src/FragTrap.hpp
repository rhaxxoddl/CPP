#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &src);
	void attack(const std::string& target);
	void beRepaired(unsigned int amount);
	FragTrap & operator=(FragTrap &src);
	~FragTrap();
	void highFivesGuys();

private:
	enum {MAX_HP = 100, MAX_EP = 100, DEFAULT_AD = 30};
};

#endif
