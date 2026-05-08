#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AFA3CB0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_COUNT_OFFSET UNITYSDK_OFFSET(0x1AFA3CC0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CREATE_OFFSET UNITYSDK_OFFSET(0x1AFA3C90)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_DESTROY_OFFSET UNITYSDK_OFFSET(0x1AFA3CA0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_INSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1AFA3CE0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1AFA3CD0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int ValueSparseHashMapHelper8_4_TypeDefinitionIndex = 5115;

	class ValueSparseHashMapHelper8_4 : public ::System::Object
	{
	public:
		static ::System::Void* Create(::System::UInt64 deleteKey, ::System::Int32 capacity)
		{
			return ((::System::Void*(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CREATE_OFFSET))(deleteKey, capacity);
		}

		static ::System::Void Destroy(::System::Void* ptr)
		{
			return ((::System::Void(*)(::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_DESTROY_OFFSET))(ptr);
		}

		static ::System::Void Clear(::System::Void* dict)
		{
			return ((::System::Void(*)(::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_CLEAR_OFFSET))(dict);
		}

		static ::System::Int32 Count(::System::Void* dict)
		{
			return ((::System::Int32(*)(::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_COUNT_OFFSET))(dict);
		}

		static ::System::Boolean TryGetValue(::System::Void* dict, ::System::UInt64 key, ::System::Void* newValuePtr)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::UInt64, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_TRYGETVALUE_OFFSET))(dict, key, newValuePtr);
		}

		static ::System::Void InsertOrUpdate(::System::Void* dict, ::System::UInt64 key, ::System::Void* newValuePtr)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_4_INSERTORUPDATE_OFFSET))(dict, key, newValuePtr);
		}
	};
}
