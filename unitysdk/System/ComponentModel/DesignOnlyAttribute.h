#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D22AC10)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D22AC70)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GET_ISDESIGNONLY_OFFSET UNITYSDK_OFFSET(0x1D22AB70)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D22AB80)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D22AC80)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22AB60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignOnlyAttribute_TypeDefinitionIndex = 2863;

	class DesignOnlyAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DesignOnlyAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::DesignOnlyAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignOnlyAttribute_TypeDefinitionIndex)->GetStaticField(0x3310);
		}
		static ::System::ComponentModel::DesignOnlyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DesignOnlyAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignOnlyAttribute_TypeDefinitionIndex)->GetStaticField(0x3318);
		}
		static ::System::ComponentModel::DesignOnlyAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::DesignOnlyAttribute**)Il2CppClass::FromTypeDefinitionIndex(DesignOnlyAttribute_TypeDefinitionIndex)->GetStaticField(0x3320);
		}
		::System::Boolean isDesignOnly; // 0x10

		::System::Void _ctor(::System::Boolean isDesignOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE__CTOR_OFFSET))(this, isDesignOnly);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsDesignOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GET_ISDESIGNONLY_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
