#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ExpandableObjectConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_DATA_CONSTRAINTCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B98A360)
#define SYSTEM_DATA_CONSTRAINTCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B98A3D0)
#define SYSTEM_DATA_CONSTRAINTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98A350)

namespace System::Data
{
	inline static constexpr unsigned int ConstraintConverter_TypeDefinitionIndex = 38559;

	class ConstraintConverter : public ::System::ComponentModel::ExpandableObjectConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
