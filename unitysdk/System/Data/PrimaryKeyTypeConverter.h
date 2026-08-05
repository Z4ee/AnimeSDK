#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ReferenceConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1EAB6A40)
#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1EAB6AB0)
#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EAB6A30)
#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB69C0)

namespace System::Data
{
	inline static constexpr unsigned int PrimaryKeyTypeConverter_TypeDefinitionIndex = 39320;

	class PrimaryKeyTypeConverter : public ::System::ComponentModel::ReferenceConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, context);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
