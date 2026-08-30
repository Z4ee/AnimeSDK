#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ICollection; }
namespace System::ComponentModel::Design { class ITypeDescriptorFilterService; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E93AAA0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E93AAB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_FilterCacheItem_TypeDefinitionIndex = 2638;

	class TypeDescriptor_FilterCacheItem : public ::System::Object
	{
	public:
		::System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService; // 0x10
		::System::Collections::ICollection* FilteredMembers; // 0x18

		::System::Void _ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* a1, ::System::Collections::ICollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::Design::ITypeDescriptorFilterService*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_FILTERCACHEITEM_ISVALID_OFFSET))(this, a1);
		}
	};
}
