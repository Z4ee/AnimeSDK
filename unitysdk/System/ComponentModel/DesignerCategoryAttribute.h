#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19202D30)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19202DB0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x19202CC0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x19202CD0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19202E40)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19202F20)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19202CB0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19202CA0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerCategoryAttribute_TypeDefinitionIndex = 2867;

	class DesignerCategoryAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Form()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerCategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x36F0);
		}
		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Generic()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerCategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x36F8);
		}
		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerCategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x3700);
		}
		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Component()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignerCategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x3708);
		}
		::System::String* typeId; // 0x10
		::System::String* category; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE__CTOR_1_OFFSET))(this, category);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
