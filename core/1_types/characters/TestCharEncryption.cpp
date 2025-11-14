#include <iostream>
#include <string>

using namespace std;


#define FOF_UTI_QUOTE              (char)3
#define FOF_UTI_QUOTE_CHAR          '\3'
#define FOF_UTI_LEFT_BRACKET       (char)4
#define FOF_UTI_LEFT_BRACKET_CHAR   '\4'
#define FOF_UTI_RIGHT_BRACKET      (char)5
#define FOF_UTI_RIGHT_BRACKET_CHAR '\5'
#define FOF_UTI_RETURN_STR         "\2"
#define FOF_UTI_RETURN             '\2'

int mainTest() {
	const char* mypass = "MD6x3MD6TRQ+MFzCBkQZzJ6WW5X2br3Ztoehz+XwnZF7PU95sodAOaDN3jCznNvkDZgQ8+5UywkI32Pfa8r5Iw55ThC6X72tkV1l6BvzoNcR7GHTTfk/TQ==";

	long len = (long)strlen(mypass);
	std::cout << "result: " << len << std::endl;


	const char* mypass2 = "\r\n";

	long len2 = (long)strlen(mypass2);
	std::cout << "result: " << len2 << std::endl;


    std::string str = "test'check[and]end";
    char* m_char = str.data();
    std::cout << m_char << std::endl;
    std::cout << "----------" << std::endl;

    char* p;
    for (p = m_char; *p != '\0'; p++)
    {
        if (*p == '\'')
        {
            *p = FOF_UTI_QUOTE_CHAR;
        }
        else if (*p == '[')
        {
            *p = FOF_UTI_LEFT_BRACKET_CHAR;
        }
        else if (*p == ']')
        {
            *p = FOF_UTI_RIGHT_BRACKET_CHAR;
        }
    }

    std::cout << m_char << std::endl;


    // Can not show unprintable characters in the console
    char* pp;
    for (pp = m_char; *pp != '\0'; pp++)
    {
        if (*pp == FOF_UTI_QUOTE_CHAR)
        {
            std::cout << "find FOF_UTI_QUOTE_CHAR " << std::endl;
        }
        else if (*pp == FOF_UTI_LEFT_BRACKET_CHAR)
        {
            std::cout << "find FOF_UTI_LEFT_BRACKET_CHAR " << std::endl;
        }
        else if (*pp == FOF_UTI_RIGHT_BRACKET_CHAR)
        {
            std::cout << "find FOF_UTI_RIGHT_BRACKET_CHAR " << std::endl;
        }
    }

	return 0;
}