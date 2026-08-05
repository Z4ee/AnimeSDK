#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD12390)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD12410)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DD12380)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD12420)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD12370)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD12360)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultBindingPropertyAttribute_TypeDefinitionIndex = 2857;

	class DefaultBindingPropertyAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DefaultBindingPropertyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DefaultBindingPropertyAttribute**)Il2CppClass::FromTypeDefinitionIndex(DefaultBindingPropertyAttribute_TypeDefinitionIndex)->GetStaticField(0x3000);
		}
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE__CTOR_1_OFFSET))(this, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
