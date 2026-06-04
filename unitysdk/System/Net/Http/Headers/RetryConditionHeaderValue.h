#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ADDFC00)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ADDFD20)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1ADDFB10)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1ADDFB40)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x1ADDFB30)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1ADDFB50)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1ADDFB60)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADE00D0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ADDFDC0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADDFA70)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDFA50)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RetryConditionHeaderValue_TypeDefinitionIndex = 3812;

	class RetryConditionHeaderValue : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField; // 0x10
		::System::Nullable_1<::System::TimeSpan> _Delta_k__BackingField; // 0x28

		::System::Void _ctor(::System::DateTimeOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_Date()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DATE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::TimeSpan> get_Delta()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_Delta(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DELTA_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::Http::Headers::RetryConditionHeaderValue*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RetryConditionHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TRYPARSE_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
