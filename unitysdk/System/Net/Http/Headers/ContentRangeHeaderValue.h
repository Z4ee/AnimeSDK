#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83AE10)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83AEE0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83AD70)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83B770)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E83B080)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E83AD30)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ContentRangeHeaderValue_TypeDefinitionIndex = 26704;

	class ContentRangeHeaderValue : public ::System::Object
	{
	public:
		::System::String* unit; // 0x10
		::System::Nullable_1<::System::Int64> _From_k__BackingField; // 0x18
		::System::Nullable_1<::System::Int64> _To_k__BackingField; // 0x28
		::System::Nullable_1<::System::Int64> _Length_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::ContentRangeHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::ContentRangeHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
