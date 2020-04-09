#include "..\include\MyExceptions.h"

MyException::MyException()
{
  str_what = 0;
  line = 0;
  file = 0;
}

MyException::MyException(int _line, const char *_file)
{
  str_what = 0;
  line = _line;
  file = _file;
}

MyException::MyException(const MyException& _exception)
  : str_what(_exception.what()),
  line(_exception.errorLine()),
  file(_exception.errorFile()) {}

MyException::MyException(const char * error, const char * reason, int _line, const char * _file)
  : str_what(error),
  str_why(reason),
  line(_line),
  file(_file) {}

MyException::MyException(const char* message, int _line, const char *_file)
  : str_what(message),
  line(_line),
  file(_file) {}

MyException::~MyException()
{
  line = -1;
}

ExceptionOutOfRange::ExceptionOutOfRange()
{
  str_what = "Index out of bounds!";
  line = -1;
  file = 0;
}

ExceptionOutOfRange::ExceptionOutOfRange(const ExceptionOutOfRange& _exception)
{
  str_what = _exception.what();
  line = _exception.errorLine();
  file = _exception.errorFile();
}

ExceptionOutOfRange::ExceptionOutOfRange(int _line, const char* _file)
{
  str_what = "Index out of bounds!"; 
  line = _line; 
  file = _file;
}

ExceptionOutOfRange::~ExceptionOutOfRange()
{
  line = -1;
};