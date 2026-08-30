#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_CONTAINERID_OFFSET UNITYSDK_OFFSET(0x19B9D0F0)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTFIELD_OFFSET UNITYSDK_OFFSET(0x19B9D100)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTINDEX_OFFSET UNITYSDK_OFFSET(0x19B9D110)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19B90D80)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ValueTypeFixupInfo_TypeDefinitionIndex = 1139;

	class ValueTypeFixupInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_parentIndex; // 0x10
		::System::Reflection::FieldInfo* m_parentField; // 0x18
		::System::Int64 m_containerID; // 0x20

		::System::Void _ctor(::System::Int64 a1, ::System::Reflection::FieldInfo* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO__CTOR_OFFSET))(this, a1, a2, a3);
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
