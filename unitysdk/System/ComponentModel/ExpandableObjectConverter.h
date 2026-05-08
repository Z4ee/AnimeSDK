#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }

#define SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x19203250)
#define SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19203090)
#define SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19203080)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ExpandableObjectConverter_TypeDefinitionIndex = 2882;

	class ExpandableObjectConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIES_OFFSET))(this, context, value, attributes);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, context);
		}
	};
}
