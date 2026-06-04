#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_MD5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADDCE30)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_MD5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDCE70)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_MD5___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1ADDCE80)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_MD5___c_TypeDefinitionIndex = 3804;

	class Parser_MD5___c : public ::System::Object
	{
	public:
		static ::System::Net::Http::Headers::Parser_MD5___c** StaticGet___9()
		{
			return (::System::Net::Http::Headers::Parser_MD5___c**)Il2CppClass::FromTypeDefinitionIndex(Parser_MD5___c_TypeDefinitionIndex)->GetStaticField(0x2CB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_MD5___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_MD5___C__CTOR_OFFSET))(this);
		}

		::System::String* __cctor_b__2_0(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_MD5___C___CCTOR_B__2_0_OFFSET))(this, a1);
		}
	};
}
