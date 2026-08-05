#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/CollectionConverter.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1E27EC80)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E27F120)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E27EE50)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E27F130)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ArrayConverter_TypeDefinitionIndex = 2808;

	class ArrayConverter : public ::System::ComponentModel::CollectionConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIES_OFFSET))(this, context, value, attributes);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, context);
		}
	};
}
