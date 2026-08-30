#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C498070)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C4980F0)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C498060)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C498100)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C498050)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultPropertyAttribute_TypeDefinitionIndex = 2578;

	class DefaultPropertyAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DefaultPropertyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DefaultPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(DefaultPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x32D40);
		}
		::System::String* name; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
