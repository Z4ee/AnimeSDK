#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF28200)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF28280)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF281F0)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF28290)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF281E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultEventAttribute_TypeDefinitionIndex = 2566;

	class DefaultEventAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DefaultEventAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DefaultEventAttribute**)Il2CppClass::FromTypeDefinitionIndex(DefaultEventAttribute_TypeDefinitionIndex)->GetStaticField(0x1BD60);
		}
		::System::String* name; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
