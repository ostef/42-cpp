#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>

class Karen
{
public:
	typedef void (Karen:: *ComplainFunc) ();

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
	static const ComplainFunc COMPLAIN_FUNCS[];
};

#endif
