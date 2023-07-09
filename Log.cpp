#include <iostream>

class Log
{
public:
	enum Level:short int
	{
		Error=0,Warning,Info
	};
	

private:
	Level m_Loglevel = Info;

public:
	void Setlevel(Level level)
	{
		m_Loglevel = level;

	}

	void Warn_p(const char* message)
	{
		if (m_Loglevel >= Warning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Error_p(const char* message)
	{
		if (m_Loglevel >= Error)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Info_p(const char* message)
	{
		if (m_Loglevel >= Info)
			std::cout << "[Info]: " << message << std::endl;
	}
};