#ifndef IDATASTREAM
#define IDATASTREAM

#include <cstdint>

class IDataStream{
public:
    virtual std::size_t ReadFile(const char * filepath, char * buffer, std::size_t buff_size) = 0;
    virtual std::size_t WriteFile(const char * filepath, const char * buffer, std::size_t buff_size) = 0;

protected:
    IDataStream(){}
    virtual ~IDataStream(){}

};

#endif
