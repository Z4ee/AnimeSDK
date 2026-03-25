#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1852EBC0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1852EC60)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_FROM_OFFSET UNITYSDK_OFFSET(0x1852EAE0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_TO_OFFSET UNITYSDK_OFFSET(0x1852EB00)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_FROM_OFFSET UNITYSDK_OFFSET(0x1852EAF0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_TO_OFFSET UNITYSDK_OFFSET(0x1852EB10)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1852EB20)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1852ECA0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1852E760)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeItemHeaderValue_TypeDefinitionIndex = 4836;

	class RangeItemHeaderValue : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Int64> _To_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int64> _From_k__BackingField; // 0x20

		::System::Void _ctor(::System::Nullable_1<::System::Int64> from, ::System::Nullable_1<::System::Int64> to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE__CTOR_OFFSET))(this, from, to);
		}

		::System::Nullable_1<::System::Int64> get_From()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_FROM_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int64> get_To()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_TO_OFFSET))(this);
		}

		::System::Void set_To(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_TO_OFFSET))(this, value);
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
