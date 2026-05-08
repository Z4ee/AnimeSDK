#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/SerializationEntry.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19ED6B40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19ED6C70)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x19ED6DB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19ED6D10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19ED69E0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19ED6C60)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19ED6A10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19ED6E50)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED69B0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationInfoEnumerator_TypeDefinitionIndex = 1172;

	class SerializationInfoEnumerator : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* m_data; // 0x10
		::Il2CppArray<::System::Type*>* m_types; // 0x18
		::Il2CppArray<::System::String*>* m_members; // 0x20
		::System::Int32 m_currItem; // 0x28
		::System::Int32 m_numItems; // 0x2C
		::System::Boolean m_current; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::String*>* members, ::Il2CppArray<::System::Object*>* info, ::Il2CppArray<::System::Type*>* types, ::System::Int32 numItems)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Type*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR__CTOR_OFFSET))(this, members, info, types, numItems);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Runtime::Serialization::SerializationEntry get_Current()
		{
			return ((::System::Runtime::Serialization::SerializationEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_RESET_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_NAME_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Type* get_ObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFOENUMERATOR_GET_OBJECTTYPE_OFFSET))(this);
		}
	};
}
