#ifndef H38247538_297F_F680_94D3_8A28246846EF
#define H38247538_297F_F680_94D3_8A28246846EF

#include <cub/cub.h>
#include <string>
#include <typeinfo>

CUB_NS_BEGIN

///////////////////////////////////////////////////////////////
std::string getDemangledName(const std::type_info& typeInfo);

///////////////////////////////////////////////////////////////
template<typename T>
struct TypeName
{
    static std::string value()
    {
        return getDemangledName(typeid(T));
    }
};

///////////////////////////////////////////////////////////////
template<>
struct TypeName<std::string>
{
    static std::string value() { return "std::string"; }
};

///////////////////////////////////////////////////////////////
template<>
struct TypeName<std::nullptr_t>
{
    static std::string value() { return "std::nullptr_t"; }
};

CUB_NS_END

#endif
