#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7D7560)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7D7620)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A7D7540)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1A7D7530)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A7D76B0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_SET_DESCRIPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A7D7550)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7D77F0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7D7520)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D7510)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DescriptionAttribute_TypeDefinitionIndex = 2863;

	class DescriptionAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DescriptionAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DescriptionAttribute**)Il2CppClass::FromTypeDefinitionIndex(DescriptionAttribute_TypeDefinitionIndex)->GetStaticField(0x2640);
		}
		::System::String* description; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE__CTOR_1_OFFSET))(this, description);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_DescriptionValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTIONVALUE_OFFSET))(this);
		}

		::System::Void set_DescriptionValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_SET_DESCRIPTIONVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
