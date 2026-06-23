#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D5CB100)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D5CB170)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D5CB1E0)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D5CB5E0)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC470)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DateTimeOffsetConverter_TypeDefinitionIndex = 2855;

	class DateTimeOffsetConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
