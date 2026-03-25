#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18682EF0)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18682F50)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GET_BROWSABLE_OFFSET UNITYSDK_OFFSET(0x18682EE0)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18682F60)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18683030)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18682ED0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BrowsableAttribute_TypeDefinitionIndex = 2553;

	class BrowsableAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::BrowsableAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::BrowsableAttribute**)Il2CppClass::FromTypeDefinitionIndex(BrowsableAttribute_TypeDefinitionIndex)->GetStaticField(0xF870);
		}
		static ::System::ComponentModel::BrowsableAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::BrowsableAttribute**)Il2CppClass::FromTypeDefinitionIndex(BrowsableAttribute_TypeDefinitionIndex)->GetStaticField(0xF878);
		}
		static ::System::ComponentModel::BrowsableAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::BrowsableAttribute**)Il2CppClass::FromTypeDefinitionIndex(BrowsableAttribute_TypeDefinitionIndex)->GetStaticField(0xF880);
		}
		::System::Boolean browsable; // 0x10

		::System::Void _ctor(::System::Boolean browsable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE__CTOR_OFFSET))(this, browsable);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_Browsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GET_BROWSABLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
