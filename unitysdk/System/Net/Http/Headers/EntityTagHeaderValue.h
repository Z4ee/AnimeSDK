#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA92E60)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA92F20)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_ISWEAK_OFFSET UNITYSDK_OFFSET(0x1CA92D80)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1CA92DA0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_ISWEAK_OFFSET UNITYSDK_OFFSET(0x1CA92D90)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1CA92DB0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA92DC0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA93430)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CA93070)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1CA93390)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1CA92FB0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA93480)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA92D70)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int EntityTagHeaderValue_TypeDefinitionIndex = 3775;

	class EntityTagHeaderValue : public ::System::Object
	{
	public:
		static ::System::Net::Http::Headers::EntityTagHeaderValue** StaticGet_any()
		{
			return (::System::Net::Http::Headers::EntityTagHeaderValue**)Il2CppClass::FromTypeDefinitionIndex(EntityTagHeaderValue_TypeDefinitionIndex)->GetStaticField(0x34F30);
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

		::System::Boolean get_IsWeak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_ISWEAK_OFFSET))(this);
		}

		::System::Void set_IsWeak(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_ISWEAK_OFFSET))(this, a1);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_TAG_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::Http::Headers::EntityTagHeaderValue*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::EntityTagHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::EntityTagHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::EntityTagHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::EntityTagHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::EntityTagHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_1_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
