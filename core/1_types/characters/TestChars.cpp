#include <iostream>
#include <fstream>
#include <cstdio>
#include <list>
#include <string>

using namespace std;
 
// char charArray[301];

// std::cout << strlen(charArray) << std::endl; // 301
// 
// if (charArray[0] == '\0') {
//     std::cout << "array is empty" << std::endl;
// }


// int CheckQualityAndCleanName(string& name)
// {
//     string strtoFind("\'");
//     int start = name.find(strtoFind);
//     int end = name.rfind(strtoFind);
//     if (start == 0 && end == (int)name.size() - 1)
//     {
//         // name.Replace(strtoFind, " ");
//         // name.Trim();
//         return 0;
//     }
// 
//     strtoFind = "\"";
//     start = name.find(strtoFind);
//     end = name.rfind(strtoFind);
// 
//     if (start == 0 && end == (int)name.size() - 1)
//     {
//         // name.Replace(strtoFind, " ");
//         // name.Trim();
//         return 0;
//     }
//     return 1;
// }



bool FindAndClean(std::string& strName, char cToFind) {
    if (strName.empty()) {
        return false;
    }

    //apply clean only if the character to find is present at the end and at the begin of the string
    if (strName.front() == cToFind && strName.back() == cToFind) {

        //trim right : delete at the end of the string space and character to find
        for (string::const_reverse_iterator iteBegin = strName.rbegin(); (iteBegin != strName.rend()) && (*iteBegin == cToFind || *iteBegin == ' ');
            strName.erase(std::next(iteBegin).base()), iteBegin = strName.rbegin());

        //trim left : delete at the begin of the string space and character to find (do not use a for loop to avoid multiple erase)
        string::const_iterator iteFirstChar = find_if(strName.cbegin(), strName.cend(), [cToFind](char c) {
            return c != cToFind && c != ' ';
            }
        );
        strName.erase(strName.cbegin(), iteFirstChar);

        //transform char to find into space ????
        for (char& c : strName) {
            if (c == cToFind) {
                c = ' ';
            }
        }
        return true;
    }

    return false;
}

int CheckQualityAndCleanName(string& strName)
{
    if (FindAndClean(strName, '\'')) {
        return 0;
    }
    if (FindAndClean(strName, '\"')) {
        return 0;
    }
    return 1;
}

bool CheckSameNameSynonym(char* baseStr, string comparedStr)
{
    if (strcmp(baseStr, comparedStr.c_str()) == 0)
    {
        return true;
    }

    string comparedStrQuotes = '\'' + comparedStr + '\'';
    if (strcmp(baseStr, comparedStrQuotes.c_str()) == 0)
    {
        return true;
    }

    string baseStrQuotes = '\'' + string(baseStr) + '\'';
    if (strcmp(baseStrQuotes.c_str(), comparedStr.c_str()) == 0)
    {
        return true;
    }

    return false;
}


#define FOF_UTI_QUOTE_             3
#define FOF_UTI_QUOTE              (char)FOF_UTI_QUOTE_

bool CheckSameNameSynonymAfterNorm(char* baseStr, string comparedStr)
{
    if (strcmp(baseStr, comparedStr.c_str()) == 0)
    {
        return true;
    }

    // string comparedStrQuotes = FOF_UTI_QUOTE_ + comparedStr + FOF_UTI_QUOTE_;
    // if (strcmp(baseStr, comparedStrQuotes.c_str()) == 0)
    // {
    //     return true;
    // }
    // 
    // string baseStrQuotes = FOF_UTI_QUOTE_ + string(baseStr) + '\'';
    // if (strcmp(baseStrQuotes.c_str(), comparedStr.c_str()) == 0)
    // {
    //     return true;
    // }

    return false;
}

int main999() {
    char charArray[] = "123";
    char* pointer = charArray;

    std::cout << FOF_UTI_QUOTE_ << std::endl;

    // std::cout << CheckSameNameSynonym(pointer, pointer) << std::endl;


    // string value = pointer;
    // 
    // if (value == "123")
    // {
    //     std::cout << "okay" << std::endl;
    // }
    // 
    // if (strcmp(pointer, "123") == 0)
    // {
    //     std::cout << "okay ____ " << std::endl;
    // }


    // string value = "test \'test";
    
    // value.replace(value.begin(), value.end(), '\', '')

    // string strName{ '\'' + "name" + '\'' };
    // std::cout << strName << std::endl;
    // std::cout << "----------------------" << std::endl;

    // char charArray[] = "\"123\"";
    // char* pointer = charArray;
    // std::cout << CheckSameNameSynonym(pointer, "123") << std::endl;

    // char charArray[] = "123";
    // char* pointer = charArray;
    // std::cout << CheckSameNameSynonym(pointer, "123") << std::endl;
    // std::cout << CheckSameNameSynonym(pointer, "123'") << std::endl;
    // std::cout << CheckSameNameSynonym(pointer, "'123'") << std::endl;
    // 
    // 
    // char charArray1[] = "'123'";
    // char* pointer1 = charArray1;
    // std::cout << CheckSameNameSynonym(pointer1, "123") << std::endl;
    // 
    // 
    // char charArray2[] = "'123";
    // char* pointer2 = charArray2;
    // std::cout << CheckSameNameSynonym(pointer2, "123") << std::endl;






    // string value = "'STATE ENTERPRISE SPARKLING WINE PLANT 'NOVY SVET''";
    // std::cout << value.cbegin() << std::endl;
    // std::cout << value.cend() << std::endl;

    // std::cout << CheckQualityAndCleanName(value) << std::endl;
    // std::cout << value << std::endl;


   
    // char charArray[] = "12345";
    // char* cP1 = charArray;
    // string vc = cP1;
    // std:cout << '\'' + vc + '\'' << std::endl;
    // 
    // string value = "'12345'";
    // if (strcmp(cP1, value.c_str()) == 0)
    // {
    //     std::cout << "same" << std::endl;
    // }
    // 
    // std::string y("Hello worl");
    // y.push_back('d');
    // y.insert(0, 1, '\'');
    // std::cout << y << std::endl;
    // 
    // 
    // string str("GeeksforGks");
    // std::cout << '\'' + str + '\'' << std::endl;

	return 0;
}