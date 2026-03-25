#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class RangeItemHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1852DEE0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1852DF70)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_RANGES_OFFSET UNITYSDK_OFFSET(0x1852DE10)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1852DE80)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1852DE90)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1852E8A0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1852E0C0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1852DBE0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1852DBD0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeHeaderValue_TypeDefinitionIndex = 4835;

	class RangeHeaderValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* ranges; // 0x10
		::System::String* unit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::RangeHeaderValue* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::RangeHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE__CTOR_1_OFFSET))(this, source);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* get_Ranges()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_RANGES_OFFSET))(this);
		}

		::System::String* get_Unit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_UNIT_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::RangeHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RangeHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
