#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E793EF0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E794040)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_AGENT_OFFSET UNITYSDK_OFFSET(0x1E793DB0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_CODE_OFFSET UNITYSDK_OFFSET(0x1E793DD0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1E793DF0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1E793E20)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_ISCODEVALID_OFFSET UNITYSDK_OFFSET(0x1E793E40)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_AGENT_OFFSET UNITYSDK_OFFSET(0x1E793DC0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_CODE_OFFSET UNITYSDK_OFFSET(0x1E793DE0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x1E793E10)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1E793E30)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E793E50)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E794640)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E7942B0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E794210)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E793DA0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int WarningHeaderValue_TypeDefinitionIndex = 3829;

	class WarningHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::System::String* _Agent_k__BackingField; // 0x18
		::System::Int32 _Code_k__BackingField; // 0x20
		::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_Agent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_AGENT_OFFSET))(this);
		}

		::System::Void set_Agent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_AGENT_OFFSET))(this, a1);
		}

		::System::Int32 get_Code()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_CODE_OFFSET))(this);
		}

		::System::Void set_Code(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_CODE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_Date()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_DATE_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_TEXT_OFFSET))(this, a1);
		}

		static ::System::Boolean IsCodeValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_ISCODEVALID_OFFSET))(a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::WarningHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::WarningHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
