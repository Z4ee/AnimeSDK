#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/AllocatorManager_AllocatorHandle.h"
#include "unitysdk/Unity/Collections/NativeArrayOptions.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_CLEAR_OFFSET UNITYSDK_OFFSET(0xA806A0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_CREATE_OFFSET UNITYSDK_OFFSET(0x1E833CC0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E833EA0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA80690)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_REALLOC_OFFSET UNITYSDK_OFFSET(0xA80770)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_REMOVERANGESWAPBACK_OFFSET UNITYSDK_OFFSET(0xA807E0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_RESIZE_OFFSET UNITYSDK_OFFSET(0xA806B0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0xA80780)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeList_TypeDefinitionIndex = 18474;

	struct alignas(8) UnsafeList
	{
		::System::Void* Ptr; // 0x10
		::System::Int32 Length; // 0x18
		::System::Int32 Capacity; // 0x1C
		::Unity::Collections::AllocatorManager_AllocatorHandle Allocator; // 0x20

		static ::Unity::Collections::LowLevel::Unsafe::UnsafeList* Create(::System::Int32 sizeOf, ::System::Int32 alignOf, ::System::Int32 initialCapacity, ::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArrayOptions options)
		{
			return ((::Unity::Collections::LowLevel::Unsafe::UnsafeList*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::Allocator, ::Unity::Collections::NativeArrayOptions))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_CREATE_OFFSET))(sizeOf, alignOf, initialCapacity, allocator, options);
		}

		static ::System::Void Destroy(::Unity::Collections::LowLevel::Unsafe::UnsafeList* listData)
		{
			return ((::System::Void(*)(::Unity::Collections::LowLevel::Unsafe::UnsafeList*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_DESTROY_OFFSET))(listData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_CLEAR_OFFSET))(this);
		}

		::System::Void Resize(::System::Int32 sizeOf, ::System::Int32 alignOf, ::System::Int32 length, ::Unity::Collections::NativeArrayOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArrayOptions))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_RESIZE_OFFSET))(this, sizeOf, alignOf, length, options);
		}

		::System::Void Realloc(::System::Int32 sizeOf, ::System::Int32 alignOf, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_REALLOC_OFFSET))(this, sizeOf, alignOf, capacity);
		}

		::System::Void SetCapacity(::System::Int32 sizeOf, ::System::Int32 alignOf, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_SETCAPACITY_OFFSET))(this, sizeOf, alignOf, capacity);
		}

		::System::Void RemoveRangeSwapBack(::System::Int32 sizeOf, ::System::Int32 begin, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFELIST_REMOVERANGESWAPBACK_OFFSET))(this, sizeOf, begin, end);
		}
	};
}
