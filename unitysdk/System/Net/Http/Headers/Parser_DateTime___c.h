#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852BF10)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1852BF40)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1852BF50)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_DateTime___c_TypeDefinitionIndex = 4823;

	class Parser_DateTime___c : public ::System::Object
	{
	public:
		static ::System::Net::Http::Headers::Parser_DateTime___c** StaticGet___9()
		{
			return (::System::Net::Http::Headers::Parser_DateTime___c**)Il2CppClass::FromTypeDefinitionIndex(Parser_DateTime___c_TypeDefinitionIndex)->GetStaticField(0x15280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C__CTOR_OFFSET))(this);
		}

		::System::String* __cctor_b__2_0(::System::Object* l)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C___CCTOR_B__2_0_OFFSET))(this, l);
		}
	};
}
