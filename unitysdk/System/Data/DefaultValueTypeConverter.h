#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/StringConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1F743380)
#define SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1F743260)
#define SYSTEM_DATA_DEFAULTVALUETYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F743250)

namespace System::Data
{
	inline static constexpr unsigned int DefaultValueTypeConverter_TypeDefinitionIndex = 39286;

	class DefaultValueTypeConverter : public ::System::ComponentModel::StringConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DEFAULTVALUETYPECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}
	};
}
