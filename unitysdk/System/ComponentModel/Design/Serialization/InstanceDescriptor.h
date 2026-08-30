#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ICollection; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E91E070)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E91D490)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E91C470)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int InstanceDescriptor_TypeDefinitionIndex = 2661;

	class InstanceDescriptor : public ::System::Object
	{
	public:
		::System::Collections::ICollection* arguments; // 0x10
		::System::Reflection::MemberInfo* member; // 0x18
		::System::Boolean isComplete; // 0x20

		::System::Void _ctor(::System::Reflection::MemberInfo* a1, ::System::Collections::ICollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Reflection::MemberInfo* a1, ::System::Collections::ICollection* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_INVOKE_OFFSET))(this);
		}
	};
}
