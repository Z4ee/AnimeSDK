#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_CREATE_OFFSET UNITYSDK_OFFSET(0x18522150)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1852B320)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1852B110)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1852B0B0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1852B0D0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1852B0C0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x185228F0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1852B0E0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1852B430)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1852B460)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x185231F0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1852B3B0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18522E40)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1852B0A0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18522A20)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int NameValueHeaderValue_TypeDefinitionIndex = 4818;

	class NameValueHeaderValue : public ::System::Object
	{
	public:
		::System::String* value; // 0x10
		::System::String* _Name_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_OFFSET))(this, name, value);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::NameValueHeaderValue* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::NameValueHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_1_OFFSET))(this, source);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE__CTOR_2_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_VALUE_OFFSET))(this, value);
		}

		static ::System::Net::Http::Headers::NameValueHeaderValue* Create(::System::String* name, ::System::String* value)
		{
			return ((::System::Net::Http::Headers::NameValueHeaderValue*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_CREATE_OFFSET))(name, value);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean TryParsePragma(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPRAGMA_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseParameters(::System::Net::Http::Headers::Lexer* lexer, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& result, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPARAMETERS_OFFSET))(lexer, result, t);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::NameValueHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::NameValueHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}
	};
}
