#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E849080)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8491C0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_ISCODEVALID_OFFSET UNITYSDK_OFFSET(0x1E848FD0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E848FE0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E849780)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E849450)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E8493D0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E848FC0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int WarningHeaderValue_TypeDefinitionIndex = 26751;

	class WarningHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::System::String* _Agent_k__BackingField; // 0x18
		::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField; // 0x20
		::System::Int32 _Code_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsCodeValid(::System::Int32 code)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_ISCODEVALID_OFFSET))(code);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::WarningHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::WarningHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
