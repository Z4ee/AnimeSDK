#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CA90D20)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA9B0B0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA9AF60)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA9AF00)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CA9AF20)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA9AF10)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CA91550)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA9AF30)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA9B1F0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CA9B220)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CA91F00)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1CA9B150)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA91B20)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CA9AEF0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA91680)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int NameValueHeaderValue_TypeDefinitionIndex = 3797;

	class NameValueHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* value; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::NameValueHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::NameValueHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_2_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_VALUE_OFFSET))(this, a1);
		}

		static ::System::Net::Http::Headers::NameValueHeaderValue* Create(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Net::Http::Headers::NameValueHeaderValue*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_CREATE_OFFSET))(a1, a2);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean TryParsePragma(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPRAGMA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseParameters(::System::Net::Http::Headers::Lexer* a1, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPARAMETERS_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::NameValueHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::NameValueHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}
	};
}
