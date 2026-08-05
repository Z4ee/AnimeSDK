#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Design/Serialization/MemberRelationship.h"
#include "unitysdk/System/ComponentModel/Design/Serialization/MemberRelationshipService_RelationshipEntry.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::ComponentModel { class MemberDescriptor; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_GETRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x1D882B70)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D882970)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D8827D0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_SETRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x1D882D70)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D882A70)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D8828A0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D883160)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int MemberRelationshipService_TypeDefinitionIndex = 3110;

	class MemberRelationshipService : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry, ::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry>* _relationships; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::Design::Serialization::MemberRelationship get_Item(::System::ComponentModel::Design::Serialization::MemberRelationship source)
		{
			return ((::System::ComponentModel::Design::Serialization::MemberRelationship(*)(::PVOID, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_GET_ITEM_OFFSET))(this, source);
		}

		::System::Void set_Item(::System::ComponentModel::Design::Serialization::MemberRelationship source, ::System::ComponentModel::Design::Serialization::MemberRelationship value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::Serialization::MemberRelationship, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_SET_ITEM_OFFSET))(this, source, value);
		}

		::System::ComponentModel::Design::Serialization::MemberRelationship get_Item_1(::System::Object* sourceOwner, ::System::ComponentModel::MemberDescriptor* sourceMember)
		{
			return ((::System::ComponentModel::Design::Serialization::MemberRelationship(*)(::PVOID, ::System::Object*, ::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_GET_ITEM_1_OFFSET))(this, sourceOwner, sourceMember);
		}

		::System::Void set_Item_1(::System::Object* sourceOwner, ::System::ComponentModel::MemberDescriptor* sourceMember, ::System::ComponentModel::Design::Serialization::MemberRelationship value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::MemberDescriptor*, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_SET_ITEM_1_OFFSET))(this, sourceOwner, sourceMember, value);
		}

		::System::ComponentModel::Design::Serialization::MemberRelationship GetRelationship(::System::ComponentModel::Design::Serialization::MemberRelationship source)
		{
			return ((::System::ComponentModel::Design::Serialization::MemberRelationship(*)(::PVOID, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_GETRELATIONSHIP_OFFSET))(this, source);
		}

		::System::Void SetRelationship(::System::ComponentModel::Design::Serialization::MemberRelationship source, ::System::ComponentModel::Design::Serialization::MemberRelationship relationship)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::Serialization::MemberRelationship, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_SETRELATIONSHIP_OFFSET))(this, source, relationship);
		}
	};
}
