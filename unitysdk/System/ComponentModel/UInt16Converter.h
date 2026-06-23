#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B750F50)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1B750FE0)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1B750F00)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1B750ED0)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B751040)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B751100)

namespace System::ComponentModel
{
	inline static constexpr unsigned int UInt16Converter_TypeDefinitionIndex = 3010;

	class UInt16Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER__CTOR_OFFSET))(this);
		}

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

		::System::Object* FromString_2(::System::String* value, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_2_OFFSET))(this, value, culture);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
