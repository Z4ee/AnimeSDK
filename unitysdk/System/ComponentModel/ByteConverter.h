#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x18683100)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x186830D0)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x186830A0)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18683140)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ByteConverter_TypeDefinitionIndex = 2554;

	class ByteConverter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
