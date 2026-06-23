#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AEDC0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ValueTypeFixupInfo_TypeDefinitionIndex = 1175;

	class ValueTypeFixupInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_parentIndex; // 0x10
		::System::Reflection::FieldInfo* m_parentField; // 0x18
		::System::Int64 m_containerID; // 0x20

		::System::Void _ctor(::System::Int64 containerID, ::System::Reflection::FieldInfo* member, ::Il2CppArray<::System::Int32>* parentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO__CTOR_OFFSET))(this, containerID, member, parentIndex);
		}
	};
}
