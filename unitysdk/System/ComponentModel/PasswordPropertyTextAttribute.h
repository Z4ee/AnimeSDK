#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB6760)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB67C0)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1DEB6750)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DEB67D0)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6890)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB6740)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6730)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PasswordPropertyTextAttribute_TypeDefinitionIndex = 2955;

	class PasswordPropertyTextAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::PasswordPropertyTextAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::PasswordPropertyTextAttribute**)Il2CppClass::FromTypeDefinitionIndex(PasswordPropertyTextAttribute_TypeDefinitionIndex)->GetStaticField(0x2690);
		}
		static ::System::ComponentModel::PasswordPropertyTextAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::PasswordPropertyTextAttribute**)Il2CppClass::FromTypeDefinitionIndex(PasswordPropertyTextAttribute_TypeDefinitionIndex)->GetStaticField(0x2698);
		}
		static ::System::ComponentModel::PasswordPropertyTextAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::PasswordPropertyTextAttribute**)Il2CppClass::FromTypeDefinitionIndex(PasswordPropertyTextAttribute_TypeDefinitionIndex)->GetStaticField(0x26A0);
		}
		::System::Boolean _password; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean password)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE__CTOR_1_OFFSET))(this, password);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_Password()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GET_PASSWORD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
