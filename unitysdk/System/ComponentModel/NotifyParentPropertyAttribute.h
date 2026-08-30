#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB0F280)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB0F2E0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET UNITYSDK_OFFSET(0x1AB0F270)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AB0F2F0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB0F3B0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0F260)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyParentPropertyAttribute_TypeDefinitionIndex = 2652;

	class NotifyParentPropertyAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(NotifyParentPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x34720);
		}
		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(NotifyParentPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x34728);
		}
		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(NotifyParentPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x34730);
		}
		::System::Boolean notifyParent; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_NotifyParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, a1);
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
