#include "IDataStream.hpp"
#include "WinDataStream.hpp"
#include <iostream>

#define BUFF_SIZE 4096

namespace{
    char buff[BUFF_SIZE];
    WinDataStream stream_entity;
    IDataStream * stream = &stream_entity;
}
void c(const char * filepath){
    auto size = stream->ReadFile(filepath, buff, sizeof(buff));
    std::cout << buff << std::endl;
    stream->WriteFile("test.cpp", buff, size);
}

int main(){
    c("m.cpp");
    return 0;
}