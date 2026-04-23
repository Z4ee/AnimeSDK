#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ICollection; }
namespace System::ComponentModel::Design { class ITypeDescriptorFilterService; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A0D6020)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D6030)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_FilterCacheItem_TypeDefinitionIndex = 2627;

	class TypeDescriptor_FilterCacheItem : public ::System::Object
	{
	public:
		::System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService; // 0x10
		::System::Collections::ICollection* FilteredMembers; // 0x18

		::System::Void _ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM__CTOR_OFFSET))(this, filterService, filteredMembers);
		}

		::System::Boolean IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::Design::ITypeDescriptorFilterService*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM_ISVALID_OFFSET))(this, filterService);
		}
	};
}
