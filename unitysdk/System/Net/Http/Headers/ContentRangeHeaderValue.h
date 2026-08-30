#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D9460)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D9540)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_FROM_OFFSET UNITYSDK_OFFSET(0x1E7D9350)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E7D9370)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_TO_OFFSET UNITYSDK_OFFSET(0x1E7D9390)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1E7D93B0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_FROM_OFFSET UNITYSDK_OFFSET(0x1E7D9360)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E7D9380)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_TO_OFFSET UNITYSDK_OFFSET(0x1E7D93A0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D93C0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D9D20)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E7D96D0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9340)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ContentRangeHeaderValue_TypeDefinitionIndex = 3782;

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

		::System::Nullable_1<::System::Int64> get_From()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_FROM_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int64> get_Length()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int64> get_To()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_TO_OFFSET))(this);
		}

		::System::Void set_To(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_TO_OFFSET))(this, a1);
		}

		::System::String* get_Unit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_UNIT_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::Http::Headers::ContentRangeHeaderValue*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::ContentRangeHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TRYPARSE_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
