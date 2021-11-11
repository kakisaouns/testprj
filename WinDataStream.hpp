#ifndef WINDATASTREAM
#define WINDATASTREAM

#include "IDataStream.hpp"
#include <fstream>

class WinDataStream final: public IDataStream{
public:
    WinDataStream(){}
    virtual ~WinDataStream(){}

    std::size_t ReadFile(const char * filepath, char * buffer, std::size_t buff_size){
        auto fp = std::fopen(filepath, "rb");
        auto ret = std::fread(buffer, sizeof(buffer[0]), buff_size, fp);
        std::fclose(fp);
        return ret;
    }
    std::size_t WriteFile(const char * filepath, const char * buffer, std::size_t buff_size){
        auto fp = std::fopen(filepath, "wb");
        auto ret = std::fwrite(buffer, sizeof(buffer[0]), buff_size, fp);
        std::fclose(fp);
        return ret;
    }
};

#endif
