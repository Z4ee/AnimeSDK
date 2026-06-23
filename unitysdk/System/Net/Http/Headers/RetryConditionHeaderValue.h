#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D4930E0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D4931F0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D493040)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D4934E0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D4932C0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D492FA0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D492F80)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RetryConditionHeaderValue_TypeDefinitionIndex = 26173;

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
