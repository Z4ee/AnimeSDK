#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_INT16CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BEB96C0)
#define SYSTEM_COMPONENTMODEL_INT16CONVERTER_FROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1BEB9720)
#define SYSTEM_COMPONENTMODEL_INT16CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1BEB9670)
#define SYSTEM_COMPONENTMODEL_INT16CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1BEB9640)
#define SYSTEM_COMPONENTMODEL_INT16CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEB97B0)
#define SYSTEM_COMPONENTMODEL_INT16CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB9870)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Int16Converter_TypeDefinitionIndex = 2917;

	class Int16Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT16CONVERTER__CTOR_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT16CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT16CONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT16CONVERTER_FROMSTRING_1_OFFSET))(this, value, culture);
		}

		::System::Object* FromString_2(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT16CONVERTER_FROMSTRING_2_OFFSET))(this, value, formatInfo);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT16CONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
