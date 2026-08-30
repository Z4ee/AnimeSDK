#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E792320)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7923C0)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1E792240)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E792260)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1E792250)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E792270)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E792280)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E792880)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E792530)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E792490)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E792230)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int StringWithQualityHeaderValue_TypeDefinitionIndex = 3825;

	class StringWithQualityHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Value_k__BackingField; // 0x10
		::System::Nullable_1<::System::Double> _Quality_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Double> get_Quality()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_Quality(::System::Nullable_1<::System::Double> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_QUALITY_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::StringWithQualityHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::StringWithQualityHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
