#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_SMALLALLOCATORHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FC0C860)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_SmallAllocatorHandle_TypeDefinitionIndex = 18854;

	struct alignas(2) AllocatorManager_SmallAllocatorHandle
	{
		::System::UInt16 Value; // 0x10

		/*
		static ::Unity::Collections::AllocatorManager_SmallAllocatorHandle op_Implicit(::Unity::Collections::AllocatorManager_AllocatorHandle a)
		{
			return ((::Unity::Collections::AllocatorManager_SmallAllocatorHandle(*)(::Unity::Collections::AllocatorManager_AllocatorHandle))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_SMALLALLOCATORHANDLE_OP_IMPLICIT_OFFSET))(a);
		}
		*/
	};
}
