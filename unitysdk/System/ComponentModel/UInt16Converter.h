#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1869D180)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1869D150)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1869D120)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1869D1C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int UInt16Converter_TypeDefinitionIndex = 2635;

	class UInt16Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
