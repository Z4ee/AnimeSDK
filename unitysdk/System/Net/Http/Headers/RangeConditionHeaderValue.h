#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Http::Headers { class EntityTagHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E845690)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E845800)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8455F0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E845C00)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E845940)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E845580)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E845560)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeConditionHeaderValue_TypeDefinitionIndex = 26743;

	class RangeConditionHeaderValue : public ::System::Object
	{
	public:
		::System::Net::Http::Headers::EntityTagHeaderValue* _EntityTag_k__BackingField; // 0x10
		::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField; // 0x18

		::System::Void _ctor(::System::DateTimeOffset date)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_OFFSET))(this, date);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::EntityTagHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_1_OFFSET))(this, entityTag);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::RangeConditionHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RangeConditionHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
