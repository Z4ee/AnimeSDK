#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1DD10D40)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1DD10DC0)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1DD10CF0)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1DD10CC0)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD10E20)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD10EE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ByteConverter_TypeDefinitionIndex = 2827;

	class ByteConverter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER__CTOR_OFFSET))(this);
		}

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

		::System::Object* FromString_2(::System::String* value, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_2_OFFSET))(this, value, culture);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
