#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18522EB0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18522F40)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x18522E00)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x18522E60)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18523090)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x185230C0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18522BB0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18522BA0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ContentDispositionHeaderValue_TypeDefinitionIndex = 4794;

	class ContentDispositionHeaderValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters; // 0x10
		::System::String* dispositionType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::ContentDispositionHeaderValue* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::ContentDispositionHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE__CTOR_1_OFFSET))(this, source);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::ContentDispositionHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::ContentDispositionHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}
	};
}
