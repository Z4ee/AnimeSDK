#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_MD5_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E7E32C0)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_MD5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E3370)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_MD5_TypeDefinitionIndex = 3815;

	class Parser_MD5 : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet_ToString()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Parser_MD5_TypeDefinitionIndex)->GetStaticField(0x86B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_MD5__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryParse(::System::String* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_MD5_TRYPARSE_OFFSET))(a1, a2);
		}
	};
}
