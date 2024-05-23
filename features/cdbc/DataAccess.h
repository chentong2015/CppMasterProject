#ifndef CPP_MASTER_DATAACCESS_H
#define CPP_MASTER_DATAACCESS_H

#include <iostream>

// 自定义ORM层数据库连接CDBC类库，包含通用类型

/* 
namespace DataAccess {

    namespace DB {
        class Connection {
        public:
            Connection(std::string name): dbName(name) {};
            void open(const std::string str) {
                this->connectStr = str;
                // open database
            }
        private:
            std::string dbName;
            std::string connectStr;
        };

        class Statement {
        public:
            Statement(const std::string query, const Connection connection):
                    query(query), connection(connection) {};
            std::vector<std::string> execute() {
                // query data and return results
            }
        private:
            Connection connection;
            std::string query;
        };

        class Result {
        public:
            Result(std::vector<std::string> results): results(results) {}
            bool is_eof() {
                return false;
            }
            // 使用迭代器访问查询的结果
            std::string move_next() {
                return results[index++];
            }

            template<class T>
            T get(std::string columName) {
                // 返回指定列的特定类型的数据
            }
        private:
            int index = 0;
            std::vector<std::string> results;
        };
    }
} */


#endif //CPP_MASTER_DATAACCESS_H
