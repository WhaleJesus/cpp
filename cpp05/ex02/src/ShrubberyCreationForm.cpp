#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other)
{
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	_target = other._target;
	setSigned(other.getSigned());
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	this->checkExecReq(executor);
	std::string targetFileStr = _target + "_shrubbery";
	const char* targetFile = targetFileStr.c_str();

	std::ofstream outfile(targetFile, std::ios::out | std::ios::app);

	if (!outfile)
	{
		throw OpenFileException();
	}
	else {
		outfile << 
		"		                         _.oo.\n"
		"                 _.u[[/;:,.         .odMMMMMM'\n"
		"              .o888UU[[[/;:-.  .o@P^    MMM^\n"
		"             oN88888UU[[[/;::-.        dP^\n"
		"            dNMMNN888UU[[[/;:--.   .o@P^\n"
		"           ,MMMMMMN888UU[[/;::-. o@^\n"
		"           NNMMMNN888UU[[[/~.o@P^\n"
		"           888888888UU[[[/o@^-..\n"
		"          oI8888UU[[[/o@P^:--..\n"
		"       .@^  YUU[[[/o@^;::---..\n"
		"     oMP     ^/o@P^;:::---..\n"
		"  .dMMM    .o@^ ^;::---...\n"
		" dMMMMMMM@^`       `^^^^\n"
		"YMMMUP^\n"
		" ^^" << std::endl;	
		outfile.close();
	}
}

const char* ShrubberyCreationForm::OpenFileException::what() const throw()
{
	return "failed to open/write to file";
}

ShrubberyCreationForm::OpenFileException::~OpenFileException() throw(){}

