#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ExpandableObjectConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_DATA_RELATIONSHIPCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1EAC8CD0)
#define SYSTEM_DATA_RELATIONSHIPCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1EAC8D40)
#define SYSTEM_DATA_RELATIONSHIPCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC8CC0)

namespace System::Data
{
	inline static constexpr unsigned int RelationshipConverter_TypeDefinitionIndex = 39333;

	class RelationshipConverter : public ::System::ComponentModel::ExpandableObjectConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATIONSHIPCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATIONSHIPCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATIONSHIPCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
