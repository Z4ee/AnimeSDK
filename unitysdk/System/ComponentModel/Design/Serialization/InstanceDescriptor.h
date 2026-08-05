#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ICollection; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1DD13140)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DD13150)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1DD13160)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD13170)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD12A70)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD12A60)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int InstanceDescriptor_TypeDefinitionIndex = 3109;

	class InstanceDescriptor : public ::System::Object
	{
	public:
		::System::Collections::ICollection* arguments; // 0x10
		::System::Reflection::MemberInfo* member; // 0x18
		::System::Boolean isComplete; // 0x20

		::System::Void _ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_OFFSET))(this, member, arguments);
		}

		::System::Void _ctor_1(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, ::System::Boolean isComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_1_OFFSET))(this, member, arguments, isComplete);
		}

		::System::Collections::ICollection* get_Arguments()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* get_MemberInfo()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_INVOKE_OFFSET))(this);
		}
	};
}
