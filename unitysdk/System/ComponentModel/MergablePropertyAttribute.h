#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0F8460)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0F84C0)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GET_ALLOWMERGE_OFFSET UNITYSDK_OFFSET(0x1A0F8450)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0F84D0)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F8590)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F8440)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MergablePropertyAttribute_TypeDefinitionIndex = 2951;

	class MergablePropertyAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::MergablePropertyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::MergablePropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(MergablePropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x2900);
		}
		static ::System::ComponentModel::MergablePropertyAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::MergablePropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(MergablePropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x2908);
		}
		static ::System::ComponentModel::MergablePropertyAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::MergablePropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(MergablePropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x2910);
		}
		::System::Boolean allowMerge; // 0x10

		::System::Void _ctor(::System::Boolean allowMerge)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE__CTOR_OFFSET))(this, allowMerge);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_AllowMerge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GET_ALLOWMERGE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
