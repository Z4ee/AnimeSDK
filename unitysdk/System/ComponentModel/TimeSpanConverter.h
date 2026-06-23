#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1C64E410)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1C64E480)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1C64E4F0)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1C64E720)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64EA10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TimeSpanConverter_TypeDefinitionIndex = 2984;

	class TimeSpanConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
