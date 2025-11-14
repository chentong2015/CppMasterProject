#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

void testCharsCopy() {
    // *chppMem = (char*)MapViewOfFile(m_hFileMap, FILE_MAP_READ, 0, 0, 0);
    // 
    // int count = strlen(*chppMem);
    // std::cout << count << std::endl;
    // int index = 0;
    // while (index < count) {
    // 	std::cout << chppMem[index] << std::endl;
    // 	index++;
    // }
}

int mainTest() {
	// int pdwFileLength = 0;
	// char* m_szMemMapping;
    // std::string strRulBuffer = "this is a test";
    // 
    // pdwFileLength = strRulBuffer.size() + 1;
    // m_szMemMapping = new char[pdwFileLength];
    // strcpy(m_szMemMapping, strRulBuffer.c_str());
    // 
    // std::cout << pdwFileLength << std::endl;
    // std::cout << m_szMemMapping << std::endl;

    unsigned long value;
    std::cout << sizeof value << std::endl;

    // CPP 文件的写入
    // ofstream myfile;
    // myfile.open("C:/Work/test.txt");
    // myfile << "Writing this to a file.\n";
    // myfile.close();


    // long lDataRuleSize = 4;
    // char* pchDataRule = new char[lDataRuleSize];
    // 
    // char charArray[] = "test test test";
    // char* strRulBuffer = charArray;
    // cout << strRulBuffer << endl;
    // 
    // strcpy(pchDataRule, strRulBuffer);
    // cout << strlen(pchDataRule) << endl;
    // cout << pchDataRule << endl;


    // std::string strRulBuffer = "this is a test"
    //     "qsdq heloo ";
    // char* ptr = new char[20];
    // // this is a testqsdq
    // 
    // strcpy(ptr, strRulBuffer.c_str());
    // 
    // cout << strlen(ptr) << endl;
    // cout << ptr << endl;


    const char* src = "Take the test";
    const char* longString = R""""(test test test)"""";

	// longString.erase(longString.find_last_not_of(' ') + 1);
	// std::cout << longString << std::endl;

    char* dst = new char[4097]; // +1 for null terminator
    std::strcpy(dst, longString);
    dst[0] = 'M';
    std::cout << dst;

    return 0;
}