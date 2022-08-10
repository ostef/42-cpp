#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>

class Karen
{
public:
	Karen ();
	~Karen ();

	void complain (std::string level);

private:
	void debug ();
	void info ();
	void warning ();
	void error ();

private:
	static const char *LEVELS[];
};

#endif
