#ifndef ERROR__H
#define ERROR__H
#include<string>
using namespace std;

enum ErrorType
{
	I_DONT_KNOW_WHAT_ERROR,
	UNDEFINEDNAME,
	ILLEGAL_SYMBOL,
	REDEFINITION,
	PARAMETER_NUMBER_DONT_MATCH,
	PARAMETER_TYPE_DONT_MATCH,
	ILLEGAL_IF_CONDITION,
	RETURN_IN_NON_RETURN_FUNC,
	NON_RETURN_IN_RETURN_FUNC,
	ILLEGAL_ARRAY_INDEX,
	ASSIGN_TO_CONST,
	MISSING_SEMICN,
	MISSING_RPARENT_RIGHT_SMALL,
	MISSING_RBRACK_RIGHT_MIDDLE,
	MISSING_WHILE_IN_DOWHILE,
	ONLY_INT_CHAR_ASSIGN_CONST
};

class Error{
public:
	Error();
	Error(int lineNum, ErrorType errorType);
	ErrorType errorType;
	int lineNum;
	string toStr();
private:
};

#endif // !ERROR__H



