#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/CustomTypeDescriptor.h"

namespace System { class Attribute; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER_ATTRIBUTETYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19AE0E70)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER_ATTRIBUTETYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE0E60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_AttributeProvider_AttributeTypeDescriptor_TypeDefinitionIndex = 2997;

	class TypeDescriptor_AttributeProvider_AttributeTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor
	{
	public:
		::Il2CppArray<::System::Attribute*>* _attributeArray; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Attribute*>* attrs, ::System::ComponentModel::ICustomTypeDescriptor* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*, ::System::ComponentModel::ICustomTypeDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER_ATTRIBUTETYPEDESCRIPTOR__CTOR_OFFSET))(this, attrs, parent);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER_ATTRIBUTETYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}
	};
}
