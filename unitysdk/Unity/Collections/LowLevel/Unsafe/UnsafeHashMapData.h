#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeHashMapData__firstFreeTLS_e__FixedBuffer.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_DEALLOCATEHASHMAP_OFFSET UNITYSDK_OFFSET(0x1E833C80)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GETBUCKETSIZE_OFFSET UNITYSDK_OFFSET(0x1E833C60)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GROWCAPACITY_OFFSET UNITYSDK_OFFSET(0x1E833C70)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeHashMapData_TypeDefinitionIndex = 18469;

	struct alignas(8) UnsafeHashMapData
	{
		::System::Byte* values; // 0x10
		::System::Byte* keys; // 0x18
		::System::Byte* next; // 0x20
		::System::Byte* buckets; // 0x28
		::System::Int32 keyCapacity; // 0x30
		::System::Int32 bucketCapacityMask; // 0x34
		::System::Int32 allocatedIndexLength; // 0x38
		::Unity::Collections::LowLevel::Unsafe::UnsafeHashMapData__firstFreeTLS_e__FixedBuffer firstFreeTLS; // 0x50

		static ::System::Int32 GetBucketSize(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GETBUCKETSIZE_OFFSET))(capacity);
		}

		static ::System::Int32 GrowCapacity(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GROWCAPACITY_OFFSET))(capacity);
		}

		static ::System::Void DeallocateHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMapData* data, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMapData*, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_DEALLOCATEHASHMAP_OFFSET))(data, allocator);
		}
	};
}
