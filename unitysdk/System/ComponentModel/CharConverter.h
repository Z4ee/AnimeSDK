#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_CHARCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1DB74260)
#define SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1DB74560)
#define SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1DB74310)
#define SYSTEM_COMPONENTMODEL_CHARCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB747B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CharConverter_TypeDefinitionIndex = 2831;

	class CharConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}
	};
}
