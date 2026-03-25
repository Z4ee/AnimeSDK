#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_CONTAINERID_OFFSET UNITYSDK_OFFSET(0x163F6310)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTFIELD_OFFSET UNITYSDK_OFFSET(0x163F6320)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTINDEX_OFFSET UNITYSDK_OFFSET(0x163F6330)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x163EB6C0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ValueTypeFixupInfo_TypeDefinitionIndex = 1129;

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

		::System::Int64 get_ContainerID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_CONTAINERID_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* get_ParentField()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTFIELD_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_ParentIndex()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTINDEX_OFFSET))(this);
		}
	};
}
