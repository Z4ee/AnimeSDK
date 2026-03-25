#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1852F070)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1852F180)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1852EF80)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1852EFB0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x1852EFA0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1852EFC0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1852EFD0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1852F530)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1852F220)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1852EEE0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1852EEC0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RetryConditionHeaderValue_TypeDefinitionIndex = 4837;

	class RetryConditionHeaderValue : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField; // 0x10
		::System::Nullable_1<::System::TimeSpan> _Delta_k__BackingField; // 0x28

		::System::Void _ctor(::System::DateTimeOffset date)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_OFFSET))(this, date);
		}

		::System::Void _ctor_1(::System::TimeSpan delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_1_OFFSET))(this, delta);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_Date()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DATE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::TimeSpan> get_Delta()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_Delta(::System::Nullable_1<::System::TimeSpan> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DELTA_OFFSET))(this, value);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::RetryConditionHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RetryConditionHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
