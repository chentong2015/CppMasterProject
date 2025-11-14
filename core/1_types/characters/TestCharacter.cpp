#include <sstream>
#include <iostream>
#include <algorithm>

typedef struct s_fmmkeyword
{
    bool bNOT;
    char Norm_label[10];
    long Db_id;
    char Source_id[10];
    char Origin[10];
    char Description[10];
} fmmkw;


bool compare_source(s_fmmkeyword first, s_fmmkeyword second, bool order)
{
    int iRes = 0;
    if (order)
    {
        iRes = strcmp(first.Source_id, second.Source_id);
    }
    else
    {
        iRes = strcmp(second.Source_id, first.Source_id);
    }

    if (iRes < 0)
    {
        return true;
    }
    else if (iRes > 0)
    {
        return false;
    }
    else
    {
        return (first.Db_id < second.Db_id);
    }
}

int mainTest() {
    s_fmmkeyword first;
    first.Source_id[0] = 'C';
    first.Source_id[1] = '\0';

    s_fmmkeyword second;
    second.Source_id[0] = 'B';
    second.Source_id[1] = '\0';
    

    int i = 0;
    while (second.Source_id[i] != '\0') {
        std::cout << second.Source_id[i] << std::endl;
        i++;
    }

    // first = second, return 0 
    // first > second, return 1
    // first < second, return -1 
    int iRes = strcmp(first.Source_id, second.Source_id);
    std::cout << "result: " << iRes << std::endl;
	
	return 0;
}