#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A56FA70)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A56FB90)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0x1A56FA30)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DISPLAYMEMBER_OFFSET UNITYSDK_OFFSET(0x1A56FA40)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_LOOKUPMEMBER_OFFSET UNITYSDK_OFFSET(0x1A56FA60)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_VALUEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A56FA50)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A56FBA0)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A56FA10)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56FA00)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LookupBindingPropertiesAttribute_TypeDefinitionIndex = 2943;

	class LookupBindingPropertiesAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::LookupBindingPropertiesAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::LookupBindingPropertiesAttribute**)Il2CppClass::FromTypeDefinitionIndex(LookupBindingPropertiesAttribute_TypeDefinitionIndex)->GetStaticField(0x3050);
		}
		::System::String* valueMember; // 0x10
		::System::String* lookupMember; // 0x18
		::System::String* displayMember; // 0x20
		::System::String* dataSource; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* dataSource, ::System::String* displayMember, ::System::String* valueMember, ::System::String* lookupMember)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE__CTOR_1_OFFSET))(this, dataSource, displayMember, valueMember, lookupMember);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_DataSource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET))(this);
		}

		::System::String* get_DisplayMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DISPLAYMEMBER_OFFSET))(this);
		}

		::System::String* get_ValueMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_VALUEMEMBER_OFFSET))(this);
		}

		::System::String* get_LookupMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_LOOKUPMEMBER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
