#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_URITYPECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D464640)
#define SYSTEM_URITYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D464700)
#define SYSTEM_URITYPECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1D4645D0)
#define SYSTEM_URITYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D464770)
#define SYSTEM_URITYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D464930)
#define SYSTEM_URITYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4645C0)

namespace System
{
	inline static constexpr unsigned int UriTypeConverter_TypeDefinitionIndex = 2704;

	class UriTypeConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvert(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERT_OFFSET))(this, type);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
