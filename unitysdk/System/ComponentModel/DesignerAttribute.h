#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1939A750)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1939A800)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERBASETYPENAME_OFFSET UNITYSDK_OFFSET(0x1939A6A0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1939A6B0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1939A6C0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1939A530)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1939A5A0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1939A5F0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1939A650)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1939A4B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerAttribute_TypeDefinitionIndex = 2866;

	class DesignerAttribute : public ::System::Attribute
	{
	public:
		::System::String* designerBaseTypeName; // 0x10
		::System::String* designerTypeName; // 0x18
		::System::String* typeId; // 0x20

		::System::Void _ctor(::System::String* designerTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_OFFSET))(this, designerTypeName);
		}

		::System::Void _ctor_1(::System::Type* designerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_1_OFFSET))(this, designerType);
		}

		::System::Void _ctor_2(::System::String* designerTypeName, ::System::String* designerBaseTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_2_OFFSET))(this, designerTypeName, designerBaseTypeName);
		}

		::System::Void _ctor_3(::System::String* designerTypeName, ::System::Type* designerBaseType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_3_OFFSET))(this, designerTypeName, designerBaseType);
		}

		::System::Void _ctor_4(::System::Type* designerType, ::System::Type* designerBaseType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_4_OFFSET))(this, designerType, designerBaseType);
		}

		::System::String* get_DesignerBaseTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERBASETYPENAME_OFFSET))(this);
		}

		::System::String* get_DesignerTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERTYPENAME_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
