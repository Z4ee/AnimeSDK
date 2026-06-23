#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C00A300)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C00A3A0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAMEVALUE_OFFSET UNITYSDK_OFFSET(0x1C00A2E0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1C00A2D0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C00A430)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_SET_DISPLAYNAMEVALUE_OFFSET UNITYSDK_OFFSET(0x1C00A2F0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C00A550)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C00A2C0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00A2B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DisplayNameAttribute_TypeDefinitionIndex = 2869;

	class DisplayNameAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DisplayNameAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DisplayNameAttribute**)Il2CppClass::FromTypeDefinitionIndex(DisplayNameAttribute_TypeDefinitionIndex)->GetStaticField(0x2D70);
		}
		::System::String* _displayName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* displayName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE__CTOR_1_OFFSET))(this, displayName);
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

		::System::Void set_DisplayNameValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_SET_DISPLAYNAMEVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET))(this, obj);
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
