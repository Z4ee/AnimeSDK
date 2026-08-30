#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Http::Headers { class EntityTagHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E78FF20)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7900E0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1E78FE30)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x1E78FE60)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x1E78FE50)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x1E78FE70)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E78FE80)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E790530)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E7901F0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78FDC0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78FDA0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeConditionHeaderValue_TypeDefinitionIndex = 3821;

	class RangeConditionHeaderValue : public ::System::Object
	{
	public:
		::System::Net::Http::Headers::EntityTagHeaderValue* _EntityTag_k__BackingField; // 0x10
		::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField; // 0x18

		::System::Void _ctor(::System::DateTimeOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::EntityTagHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::EntityTagHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_Date()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_DATE_OFFSET))(this, a1);
		}

		::System::Net::Http::Headers::EntityTagHeaderValue* get_EntityTag()
		{
			return ((::System::Net::Http::Headers::EntityTagHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_ENTITYTAG_OFFSET))(this);
		}

		::System::Void set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::EntityTagHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_ENTITYTAG_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::Http::Headers::RangeConditionHeaderValue*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RangeConditionHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TRYPARSE_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
