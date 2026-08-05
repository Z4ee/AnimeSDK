#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/AllocatorManager_AllocatorHandle.h"

#define UNITY_COLLECTIONS_COLLECTIONHELPER_ALIGN_OFFSET UNITYSDK_OFFSET(0x1FC0D000)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_CEILPOW2_OFFSET UNITYSDK_OFFSET(0x1FC0D030)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_LOG2FLOOR_OFFSET UNITYSDK_OFFSET(0x1FC0CF80)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_LZCNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC0CFC0)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_LZCNT_1_OFFSET UNITYSDK_OFFSET(0x1FC0D0A0)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_LZCNT_OFFSET UNITYSDK_OFFSET(0x1FC0D060)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_SHOULDDEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1FC0D020)

namespace Unity::Collections
{
	inline static constexpr unsigned int CollectionHelper_TypeDefinitionIndex = 18859;

	class CollectionHelper : public ::System::Object
	{
	public:
		static ::System::Int32 Log2Floor(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_LOG2FLOOR_OFFSET))(value);
		}

		static ::System::Int32 lzcntInternal(::System::UInt32 x)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_LZCNTINTERNAL_OFFSET))(x);
		}

		static ::System::Int32 Align(::System::Int32 size, ::System::Int32 alignmentPowerOfTwo)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_ALIGN_OFFSET))(size, alignmentPowerOfTwo);
		}

		static ::System::Boolean ShouldDeallocate(::Unity::Collections::AllocatorManager_AllocatorHandle allocator)
		{
			return ((::System::Boolean(*)(::Unity::Collections::AllocatorManager_AllocatorHandle))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_SHOULDDEALLOCATE_OFFSET))(allocator);
		}

		static ::System::Int32 ceilpow2(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_CEILPOW2_OFFSET))(x);
		}

		static ::System::Int32 lzcnt(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_LZCNT_OFFSET))(x);
		}

		static ::System::Int32 lzcnt_1(::System::UInt32 x)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_LZCNT_1_OFFSET))(x);
		}
	};
}
