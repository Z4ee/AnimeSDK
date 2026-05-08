#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System::Collections { class ICollection; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEFILTERCACHEITEM_ISVALID_OFFSET UNITYSDK_OFFSET(0x19216DC0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEFILTERCACHEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19216E30)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_AttributeFilterCacheItem_TypeDefinitionIndex = 3000;

	class TypeDescriptor_AttributeFilterCacheItem : public ::System::Object
	{
	public:
		::System::Collections::ICollection* FilteredMembers; // 0x10
		::Il2CppArray<::System::Attribute*>* _filter; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Attribute*>* filter, ::System::Collections::ICollection* filteredMembers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEFILTERCACHEITEM__CTOR_OFFSET))(this, filter, filteredMembers);
		}

		::System::Boolean IsValid(::Il2CppArray<::System::Attribute*>* filter)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEFILTERCACHEITEM_ISVALID_OFFSET))(this, filter);
		}
	};
}
