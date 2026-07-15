#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/NameValueHeaderValue.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA9B710)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA9B880)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CA9B670)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA9B6C0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA9B8D0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CA9BA10)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1CA9B970)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA9B6B0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9B410)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int NameValueWithParametersHeaderValue_TypeDefinitionIndex = 3798;

	class NameValueWithParametersHeaderValue : public ::System::Net::Http::Headers::NameValueHeaderValue
	{
	public:
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters; // 0x20

		::System::Void _ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::NameValueWithParametersHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE__CTOR_1_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::NameValueWithParametersHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::NameValueWithParametersHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}
	};
}
