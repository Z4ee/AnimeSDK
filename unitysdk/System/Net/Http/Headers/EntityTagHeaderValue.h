#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B010FA0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B011050)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1B010F00)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B011520)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1B011180)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1B0114A0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1B0110E0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B011570)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B010EF0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int EntityTagHeaderValue_TypeDefinitionIndex = 24732;

	class EntityTagHeaderValue : public ::System::Object
	{
	public:
		static ::System::Net::Http::Headers::EntityTagHeaderValue** StaticGet_any()
		{
			return (::System::Net::Http::Headers::EntityTagHeaderValue**)Il2CppClass::FromTypeDefinitionIndex(EntityTagHeaderValue_TypeDefinitionIndex)->GetStaticField(0x1E740);
		}
		::System::String* _Tag_k__BackingField; // 0x10
		::System::Boolean _IsWeak_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE__CCTOR_OFFSET))();
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::EntityTagHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::EntityTagHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}

		static ::System::Boolean TryParse_1(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::EntityTagHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::EntityTagHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_1_OFFSET))(input, minimalCount, result);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
