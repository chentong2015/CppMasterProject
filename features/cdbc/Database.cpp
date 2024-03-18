#include <iostream>
#include <string>
#include "DataAccess.h"

using namespace DataAccess::DB;

// Simple bootstrap example to perform a simple select on a SQLite in-memory database.
int testConnection() {
    Connection cnx("sqlite");
    cnx.open(":memory:");
    Statement stm("select * from EMPLOYEES", cnx);

    // 自定义查询结果的实现
    for (Result res(stm.execute()); !res.is_eof(); res.move_next()) {
        std::cout << "- "          << res.get<std::string>("NAME")
                  << ", age:"      << res.get<int>("AGE")
                  << ", salary: $" << res.get<double>("SALARY") << '\n'; }
    return 0;
}

int main(int argc, char** argv) {
    Connection cnx("sqlite");
    cnx.open(":memory:");

    // 通过构造器模式来构建Statement
    Statement stm(statement_builder(cnx)
        .from("EMPLOYEES")
        .select("NAME", "AGE", "SALARY")
        .to_statement());

    // The DSL use natural expressions composition to build a filter:
    Statement stm(statement_builder(cnx)
        .from("EMPLOYEES")
        .where(column("AGE") > var("max_age") && column("SALARY") < var("min_salary"))
        .select("NAME")
        .to_statement());

    stm.bind(var("max_age"), 50).bind(var("min_salary", 42000.0))

    for (Result res(stm.execute()); !res.is_eof(); res.move_next()) {
        std::cout << "- "          << res.get<std::string>("NAME")
                  << ", age:"      << res.get<int>("AGE")
                  << ", salary: $" << res.get<double>("SALARY") << '\n'; }
    return 0;
}
