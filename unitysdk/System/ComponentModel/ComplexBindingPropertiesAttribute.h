#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6C2DC0)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6C2E70)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATAMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6C2DB0)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0x1C6C2DA0)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6C2E80)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6C2D80)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6C2D90)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C2D70)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComplexBindingPropertiesAttribute_TypeDefinitionIndex = 2837;

	class ComplexBindingPropertiesAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::ComplexBindingPropertiesAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::ComplexBindingPropertiesAttribute**)Il2CppClass::FromTypeDefinitionIndex(ComplexBindingPropertiesAttribute_TypeDefinitionIndex)->GetStaticField(0x3210);
		}
		::System::String* dataSource; // 0x10
		::System::String* dataMember; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* dataSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CTOR_1_OFFSET))(this, dataSource);
		}

		::System::Void _ctor_2(::System::String* dataSource, ::System::String* dataMember)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CTOR_2_OFFSET))(this, dataSource, dataMember);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_DataSource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET))(this);
		}

		::System::String* get_DataMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATAMEMBER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
