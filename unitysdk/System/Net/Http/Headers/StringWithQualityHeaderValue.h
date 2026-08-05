#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E847800)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E847890)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E847760)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E847CC0)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E8479E0)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E847960)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E847750)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int StringWithQualityHeaderValue_TypeDefinitionIndex = 26747;

	class StringWithQualityHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Value_k__BackingField; // 0x10
		::System::Nullable_1<::System::Double> _Quality_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::StringWithQualityHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::StringWithQualityHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
