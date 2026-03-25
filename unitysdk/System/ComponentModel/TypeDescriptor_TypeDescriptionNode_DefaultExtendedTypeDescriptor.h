#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::ComponentModel { class TypeDescriptor_TypeDescriptionNode; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_DEFAULTEXTENDEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x2101280)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_DEFAULTEXTENDEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x2101290)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_DEFAULTEXTENDEDTYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x72D10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_TypeDefinitionIndex = 2631;

	struct alignas(8) TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor
	{
		::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* _node; // 0x10
		::System::Object* _instance; // 0x18

		::System::Void _ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_DEFAULTEXTENDEDTYPEDESCRIPTOR__CTOR_OFFSET))(this, node, instance);
		}

		::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_DEFAULTEXTENDEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTIONNODE_DEFAULTEXTENDEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}
	};
}
