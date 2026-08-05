#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListSortDirection.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class PropertyDescriptor; }

#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_PROPERTYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8653E0)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C865400)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_PROPERTYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8653F0)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C865410)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8653D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListSortDescription_TypeDefinitionIndex = 2938;

	class ListSortDescription : public ::System::Object
	{
	public:
		::System::ComponentModel::PropertyDescriptor* property; // 0x10
		::System::ComponentModel::ListSortDirection sortDirection; // 0x18

		::System::Void _ctor(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION__CTOR_OFFSET))(this, property, direction);
		}

		::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_PROPERTYDESCRIPTOR_OFFSET))(this);
		}

		::System::Void set_PropertyDescriptor(::System::ComponentModel::PropertyDescriptor* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_PROPERTYDESCRIPTOR_OFFSET))(this, value);
		}

		::System::ComponentModel::ListSortDirection get_SortDirection()
		{
			return ((::System::ComponentModel::ListSortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_SORTDIRECTION_OFFSET))(this);
		}

		::System::Void set_SortDirection(::System::ComponentModel::ListSortDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListSortDirection))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_SORTDIRECTION_OFFSET))(this, value);
		}
	};
}
