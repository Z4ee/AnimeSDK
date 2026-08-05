#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define UNITY_COLLECTIONS_NATIVEQUEUEDATA_DEALLOCATEQUEUE_OFFSET UNITYSDK_OFFSET(0x1FC0DB70)
#define UNITY_COLLECTIONS_NATIVEQUEUEDATA_GETCURRENTWRITEBLOCKTLS_OFFSET UNITYSDK_OFFSET(0xAD1080)
#define UNITY_COLLECTIONS_NATIVEQUEUEDATA_SETCURRENTWRITEBLOCKTLS_OFFSET UNITYSDK_OFFSET(0xAD1090)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueueData_TypeDefinitionIndex = 18872;

	struct alignas(8) NativeQueueData
	{
		::System::IntPtr m_FirstBlock; // 0x10
		::System::IntPtr m_LastBlock; // 0x18
		::System::Int32 m_MaxItems; // 0x20
		::System::Int32 m_CurrentRead; // 0x24
		::System::Byte* m_CurrentWriteBlockTLS; // 0x28

		/*
		::Unity::Collections::NativeQueueBlockHeader* GetCurrentWriteBlockTLS(::System::Int32 threadIndex)
		{
			return ((::Unity::Collections::NativeQueueBlockHeader*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEDATA_GETCURRENTWRITEBLOCKTLS_OFFSET))(this, threadIndex);
		}
		*/

		/*
		::System::Void SetCurrentWriteBlockTLS(::System::Int32 threadIndex, ::Unity::Collections::NativeQueueBlockHeader* currentWriteBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Unity::Collections::NativeQueueBlockHeader*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEDATA_SETCURRENTWRITEBLOCKTLS_OFFSET))(this, threadIndex, currentWriteBlock);
		}
		*/

		/*
		static ::System::Void DeallocateQueue(::Unity::Collections::NativeQueueData* data, ::Unity::Collections::NativeQueueBlockPoolData* pool, ::Unity::Collections::Allocator allocation)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeQueueData*, ::Unity::Collections::NativeQueueBlockPoolData*, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEDATA_DEALLOCATEQUEUE_OFFSET))(data, pool, allocation);
		}
		*/
	};
}
