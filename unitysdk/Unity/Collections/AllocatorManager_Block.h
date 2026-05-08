#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/AllocatorManager_Range.h"

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DE6C0)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x9DE670)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x9DE660)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x9DE680)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_TRYFREE_OFFSET UNITYSDK_OFFSET(0x9DE7E0)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_Block_TypeDefinitionIndex = 20149;

	struct alignas(8) AllocatorManager_Block
	{
		::Unity::Collections::AllocatorManager_Range Range; // 0x10
		::System::Int32 BytesPerItem; // 0x20
		::System::Int32 AllocatedItems; // 0x24
		::System::Byte Log2Alignment; // 0x28
		::System::Byte Padding0; // 0x29
		::System::UInt16 Padding1; // 0x2A
		::System::UInt32 Padding2; // 0x2C

		::System::Int64 get_Bytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_GET_BYTES_OFFSET))(this);
		}

		::System::Int32 get_Alignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_Alignment(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_DISPOSE_OFFSET))(this);
		}

		::System::Int32 TryFree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_BLOCK_TRYFREE_OFFSET))(this);
		}
	};
}
