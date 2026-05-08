#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::ComponentModel { class MemberDescriptor; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x8C4C30)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8C4C90)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x396A90)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A23FA60)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A23FA80)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A23FAA0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x8C4C20)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int MemberRelationship_TypeDefinitionIndex = 3113;

	struct alignas(8) MemberRelationship
	{
		static ::System::ComponentModel::Design::Serialization::MemberRelationship* StaticGet_Empty()
		{
			return (::System::ComponentModel::Design::Serialization::MemberRelationship*)Il2CppClass::FromTypeDefinitionIndex(MemberRelationship_TypeDefinitionIndex)->GetStaticField(0x28F0);
		}
		::System::Object* _owner; // 0x10
		::System::ComponentModel::MemberDescriptor* _member; // 0x18

		::System::Void _ctor(::System::Object* owner, ::System::ComponentModel::MemberDescriptor* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP__CTOR_OFFSET))(this, owner, member);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GET_ISEMPTY_OFFSET))(this);
		}

		::System::ComponentModel::MemberDescriptor* get_Member()
		{
			return ((::System::ComponentModel::MemberDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GET_MEMBER_OFFSET))(this);
		}

		::System::Object* get_Owner()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GET_OWNER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::ComponentModel::Design::Serialization::MemberRelationship left, ::System::ComponentModel::Design::Serialization::MemberRelationship right)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::Design::Serialization::MemberRelationship, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::ComponentModel::Design::Serialization::MemberRelationship left, ::System::ComponentModel::Design::Serialization::MemberRelationship right)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::Design::Serialization::MemberRelationship, ::System::ComponentModel::Design::Serialization::MemberRelationship))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_MEMBERRELATIONSHIP_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
