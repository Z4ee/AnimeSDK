#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE5A540)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EE5A5E0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_FROM_OFFSET UNITYSDK_OFFSET(0x1EE5A460)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_TO_OFFSET UNITYSDK_OFFSET(0x1EE5A480)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_FROM_OFFSET UNITYSDK_OFFSET(0x1EE5A470)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_TO_OFFSET UNITYSDK_OFFSET(0x1EE5A490)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EE5A4A0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EE5A620)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE59FF0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeItemHeaderValue_TypeDefinitionIndex = 3824;

	class RangeItemHeaderValue : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Int64> _To_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int64> _From_k__BackingField; // 0x20

		::System::Void _ctor(::System::Nullable_1<::System::Int64> a1, ::System::Nullable_1<::System::Int64> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::System::Int64> get_From()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_FROM_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int64> get_To()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_TO_OFFSET))(this);
		}

		::System::Void set_To(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_TO_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
