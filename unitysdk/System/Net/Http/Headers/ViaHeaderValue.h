#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D494670)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D494740)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D4945D0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D494D10)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D494A30)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D4949B0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4945C0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ViaHeaderValue_TypeDefinitionIndex = 26177;

	class ViaHeaderValue : public ::System::Object
	{
	public:
		::System::String* _ReceivedBy_k__BackingField; // 0x10
		::System::String* _ProtocolVersion_k__BackingField; // 0x18
		::System::String* _Comment_k__BackingField; // 0x20
		::System::String* _ProtocolName_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ViaHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ViaHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::ViaHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ViaHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
