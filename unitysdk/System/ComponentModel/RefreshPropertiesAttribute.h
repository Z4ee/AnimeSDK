#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/RefreshProperties.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D5CD370)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D5CD3D0)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GET_REFRESHPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D5CD360)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D5CD3E0)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5CD4A0)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CD350)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshPropertiesAttribute_TypeDefinitionIndex = 3023;

	class RefreshPropertiesAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::RefreshPropertiesAttribute** StaticGet_All()
		{
			return (::System::ComponentModel::RefreshPropertiesAttribute**)Il2CppClass::FromTypeDefinitionIndex(RefreshPropertiesAttribute_TypeDefinitionIndex)->GetStaticField(0x25C0);
		}
		static ::System::ComponentModel::RefreshPropertiesAttribute** StaticGet_Repaint()
		{
			return (::System::ComponentModel::RefreshPropertiesAttribute**)Il2CppClass::FromTypeDefinitionIndex(RefreshPropertiesAttribute_TypeDefinitionIndex)->GetStaticField(0x25C8);
		}
		static ::System::ComponentModel::RefreshPropertiesAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::RefreshPropertiesAttribute**)Il2CppClass::FromTypeDefinitionIndex(RefreshPropertiesAttribute_TypeDefinitionIndex)->GetStaticField(0x25D0);
		}
		::System::ComponentModel::RefreshProperties refresh; // 0x10

		::System::Void _ctor(::System::ComponentModel::RefreshProperties refresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::RefreshProperties))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE__CTOR_OFFSET))(this, refresh);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::ComponentModel::RefreshProperties get_RefreshProperties()
		{
			return ((::System::ComponentModel::RefreshProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GET_REFRESHPROPERTIES_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
