#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x19A46190)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x19A46200)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x19A46270)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x19A46650)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A474D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DateTimeConverter_TypeDefinitionIndex = 2855;

	class DateTimeConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
