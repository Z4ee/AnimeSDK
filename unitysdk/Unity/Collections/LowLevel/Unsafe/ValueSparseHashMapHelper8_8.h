#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B48CB90)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1B48CBE0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_COUNT_OFFSET UNITYSDK_OFFSET(0x1B48CBA0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CREATE_OFFSET UNITYSDK_OFFSET(0x1B48CB70)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B48CB80)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_INSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1B48CBC0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B48CBD0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1B48CBB0)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int ValueSparseHashMapHelper8_8_TypeDefinitionIndex = 5114;

	class ValueSparseHashMapHelper8_8 : public ::System::Object
	{
	public:
		static ::System::Void* Create(::System::UInt64 deleteKey, ::System::Int32 capacity)
		{
			return ((::System::Void*(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CREATE_OFFSET))(deleteKey, capacity);
		}

		static ::System::Void Destroy(::System::Void* ptr)
		{
			return ((::System::Void(*)(::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_DESTROY_OFFSET))(ptr);
		}

		static ::System::Void Clear(::System::Void* dict)
		{
			return ((::System::Void(*)(::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CLEAR_OFFSET))(dict);
		}

		static ::System::Int32 Count(::System::Void* dict)
		{
			return ((::System::Int32(*)(::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_COUNT_OFFSET))(dict);
		}

		static ::System::Boolean TryGetValue(::System::Void* dict, ::System::UInt64 key, ::System::Void* newValuePtr)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::UInt64, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_TRYGETVALUE_OFFSET))(dict, key, newValuePtr);
		}

		static ::System::Void InsertOrUpdate(::System::Void* dict, ::System::UInt64 key, ::System::Void* newValuePtr)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_INSERTORUPDATE_OFFSET))(dict, key, newValuePtr);
		}

		static ::System::Void Remove(::System::Void* dict, ::System::UInt64 key)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_REMOVE_OFFSET))(dict, key);
		}

		static ::System::Boolean ContainsKey(::System::Void* dict, ::System::UInt64 key)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_VALUESPARSEHASHMAPHELPER8_8_CONTAINSKEY_OFFSET))(dict, key);
		}
	};
}
