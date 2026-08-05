#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E846E00)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E846E90)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E846D60)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E846ED0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8469C0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeItemHeaderValue_TypeDefinitionIndex = 26745;

	class RangeItemHeaderValue : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Int64> _To_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int64> _From_k__BackingField; // 0x20

		::System::Void _ctor(::System::Nullable_1<::System::Int64> from, ::System::Nullable_1<::System::Int64> to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE__CTOR_OFFSET))(this, from, to);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_EQUALS_OFFSET))(this, obj);
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
