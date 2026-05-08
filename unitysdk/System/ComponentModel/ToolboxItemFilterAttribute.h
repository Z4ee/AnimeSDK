#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/ToolboxItemFilterType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x193A3C90)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193A3DD0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERSTRING_OFFSET UNITYSDK_OFFSET(0x193A3C10)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERTYPE_OFFSET UNITYSDK_OFFSET(0x193A3C20)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x193A3C30)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_MATCH_OFFSET UNITYSDK_OFFSET(0x193A3E60)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193A3F10)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193A3BE0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x193A3BB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ToolboxItemFilterAttribute_TypeDefinitionIndex = 2986;

	class ToolboxItemFilterAttribute : public ::System::Attribute
	{
	public:
		::System::String* filterString; // 0x10
		::System::String* typeId; // 0x18
		::System::ComponentModel::ToolboxItemFilterType filterType; // 0x20

		::System::Void _ctor(::System::String* filterString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE__CTOR_OFFSET))(this, filterString);
		}

		::System::Void _ctor_1(::System::String* filterString, ::System::ComponentModel::ToolboxItemFilterType filterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::ComponentModel::ToolboxItemFilterType))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE__CTOR_1_OFFSET))(this, filterString, filterType);
		}

		::System::String* get_FilterString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERSTRING_OFFSET))(this);
		}

		::System::ComponentModel::ToolboxItemFilterType get_FilterType()
		{
			return ((::System::ComponentModel::ToolboxItemFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERTYPE_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Match(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_MATCH_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_TOSTRING_OFFSET))(this);
		}
	};
}
