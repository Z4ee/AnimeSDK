#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1868C050)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1868C0B0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET UNITYSDK_OFFSET(0x1868C040)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1868C0C0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1868C190)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1868C030)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyParentPropertyAttribute_TypeDefinitionIndex = 2640;

	class NotifyParentPropertyAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(NotifyParentPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x10CF0);
		}
		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(NotifyParentPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x10CF8);
		}
		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(NotifyParentPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x10D00);
		}
		::System::Boolean notifyParent; // 0x10

		::System::Void _ctor(::System::Boolean notifyParent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CTOR_OFFSET))(this, notifyParent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_NotifyParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
