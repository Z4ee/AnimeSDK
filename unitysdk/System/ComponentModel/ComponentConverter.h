#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ReferenceConverter.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }

#define SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D466990)
#define SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D466880)
#define SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D466810)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentConverter_TypeDefinitionIndex = 2840;

	class ComponentConverter : public ::System::ComponentModel::ReferenceConverter
	{
	public:
		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER__CTOR_OFFSET))(this, type);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIES_OFFSET))(this, context, value, attributes);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, context);
		}
	};
}
