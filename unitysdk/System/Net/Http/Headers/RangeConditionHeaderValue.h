#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Http::Headers { class EntityTagHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F68310)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F68480)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x19F68220)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x19F68250)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x19F68240)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x19F68260)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x19F68270)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F688D0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x19F68590)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F681B0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F68190)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeConditionHeaderValue_TypeDefinitionIndex = 4842;

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

		::System::Nullable_1<::System::DateTimeOffset> get_Date()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_DATE_OFFSET))(this, value);
		}

		::System::Net::Http::Headers::EntityTagHeaderValue* get_EntityTag()
		{
			return ((::System::Net::Http::Headers::EntityTagHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_ENTITYTAG_OFFSET))(this);
		}

		::System::Void set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::EntityTagHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_ENTITYTAG_OFFSET))(this, value);
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
