#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0BD780)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0BD8C0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETLOCALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x1A0BD970)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1A0BD740)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1A0BD690)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0BDC70)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0BD730)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BD720)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CategoryAttribute_TypeDefinitionIndex = 2556;

	class CategoryAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::CategoryAttribute** StaticGet_defAttr()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x12110);
		}
		::System::String* categoryValue; // 0x10
		::System::Boolean localized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_1_OFFSET))(this, category);
		}

		static ::System::ComponentModel::CategoryAttribute* get_Default()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DEFAULT_OFFSET))();
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetLocalizedString(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETLOCALIZEDSTRING_OFFSET))(this, value);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
