#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1869D4E0)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1869D430)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1869D400)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1869D520)

namespace System::ComponentModel
{
	inline static constexpr unsigned int UInt64Converter_TypeDefinitionIndex = 2637;

	class UInt64Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
