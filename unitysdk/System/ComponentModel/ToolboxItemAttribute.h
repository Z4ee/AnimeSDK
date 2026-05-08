#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7DD200)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7DD550)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPENAME_OFFSET UNITYSDK_OFFSET(0x1A7DD530)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1A7DD390)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A7DD0B0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7DD5E0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7DD320)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A7DD360)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DD2D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ToolboxItemAttribute_TypeDefinitionIndex = 3025;

	class ToolboxItemAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::ToolboxItemAttribute** StaticGet_None()
		{
			return (::System::ComponentModel::ToolboxItemAttribute**)Il2CppClass::FromTypeDefinitionIndex(ToolboxItemAttribute_TypeDefinitionIndex)->GetStaticField(0x26D0);
		}
		static ::System::ComponentModel::ToolboxItemAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::ToolboxItemAttribute**)Il2CppClass::FromTypeDefinitionIndex(ToolboxItemAttribute_TypeDefinitionIndex)->GetStaticField(0x26D8);
		}
		::System::Type* toolboxItemType; // 0x10
		::System::String* toolboxItemTypeName; // 0x18

		::System::Void _ctor(::System::Boolean defaultType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CTOR_OFFSET))(this, defaultType);
		}

		::System::Void _ctor_1(::System::String* toolboxItemTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CTOR_1_OFFSET))(this, toolboxItemTypeName);
		}

		::System::Void _ctor_2(::System::Type* toolboxItemType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CTOR_2_OFFSET))(this, toolboxItemType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Type* get_ToolboxItemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPE_OFFSET))(this);
		}

		::System::String* get_ToolboxItemTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPENAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
