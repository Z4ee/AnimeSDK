#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class WeakReference; }
namespace System::ComponentModel { class MemberDescriptor; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_EQUALS_OFFSET UNITYSDK_OFFSET(0x95ED90)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2B7CC0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C48B930)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C48BA10)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x95ED00)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int MemberRelationshipService_RelationshipEntry_TypeDefinitionIndex = 3111;

	struct alignas(8) MemberRelationshipService_RelationshipEntry
	{
		::System::WeakReference* Owner; // 0x10
		::System::ComponentModel::MemberDescriptor* Member; // 0x18
		::System::Int32 hashCode; // 0x20

		/*
		::System::Void _ctor(::System::ComponentModel::Design::Serialization::MemberRelationship rel)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY__CTOR_OFFSET))(this, rel);
		}
		*/

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_EQUALS_OFFSET))(this, o);
		}

		static ::System::Boolean op_Equality(::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry re1, ::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry re2)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry, ::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_OP_EQUALITY_OFFSET))(re1, re2);
		}

		static ::System::Boolean op_Inequality(::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry re1, ::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry re2)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry, ::System::ComponentModel::Design::Serialization::MemberRelationshipService_RelationshipEntry))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_OP_INEQUALITY_OFFSET))(re1, re2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIPSERVICE_RELATIONSHIPENTRY_GETHASHCODE_OFFSET))(this);
		}
	};
}
