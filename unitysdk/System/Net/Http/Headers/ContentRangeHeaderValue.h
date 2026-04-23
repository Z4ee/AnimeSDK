#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F5E430)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F5E510)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_FROM_OFFSET UNITYSDK_OFFSET(0x19F5E320)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19F5E340)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_TO_OFFSET UNITYSDK_OFFSET(0x19F5E360)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x19F5E380)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_FROM_OFFSET UNITYSDK_OFFSET(0x19F5E330)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19F5E350)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_TO_OFFSET UNITYSDK_OFFSET(0x19F5E370)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x19F5E390)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F5ED60)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x19F5E700)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5E310)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ContentRangeHeaderValue_TypeDefinitionIndex = 4803;

	class ContentRangeHeaderValue : public ::System::Object
	{
	public:
		::System::String* unit; // 0x10
		::System::Nullable_1<::System::Int64> _To_k__BackingField; // 0x18
		::System::Nullable_1<::System::Int64> _Length_k__BackingField; // 0x28
		::System::Nullable_1<::System::Int64> _From_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int64> get_From()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_FROM_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int64> get_Length()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int64> get_To()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_TO_OFFSET))(this);
		}

		::System::Void set_To(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_TO_OFFSET))(this, value);
		}

		::System::String* get_Unit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_UNIT_OFFSET))(this);
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
