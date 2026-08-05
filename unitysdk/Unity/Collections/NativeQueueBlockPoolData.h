#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_ALLOCATEBLOCK_OFFSET UNITYSDK_OFFSET(0xAD0FA0)
#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_FREEBLOCK_OFFSET UNITYSDK_OFFSET(0xAD1010)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueueBlockPoolData_TypeDefinitionIndex = 18870;

	struct alignas(8) NativeQueueBlockPoolData
	{
		::System::IntPtr m_FirstBlock; // 0x10
		::System::Int32 m_NumBlocks; // 0x18
		::System::Int32 m_MaxBlocks; // 0x1C
		::System::Int32 m_AllocLock; // 0x20

		/*
		::Unity::Collections::NativeQueueBlockHeader* AllocateBlock()
		{
			return ((::Unity::Collections::NativeQueueBlockHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_ALLOCATEBLOCK_OFFSET))(this);
		}
		*/

		/*
		::System::Void FreeBlock(::Unity::Collections::NativeQueueBlockHeader* block)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeQueueBlockHeader*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_FREEBLOCK_OFFSET))(this, block);
		}
		*/
	};
}
