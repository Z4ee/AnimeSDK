#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF29F40)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF29FE0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAMEVALUE_OFFSET UNITYSDK_OFFSET(0x1AF29F30)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1AF29F20)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AF2A070)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A130)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF29F10)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF29F00)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DisplayNameAttribute_TypeDefinitionIndex = 2575;

	class DisplayNameAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DisplayNameAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DisplayNameAttribute**)Il2CppClass::FromTypeDefinitionIndex(DisplayNameAttribute_TypeDefinitionIndex)->GetStaticField(0x23080);
		}
		::System::String* _displayName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_DisplayNameValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAMEVALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
