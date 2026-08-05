#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATORHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FC0CC20)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_AllocatorHandle_TypeDefinitionIndex = 18855;

	struct alignas(4) AllocatorManager_AllocatorHandle
	{
		::System::Int32 Value; // 0x10

		static ::Unity::Collections::AllocatorManager_AllocatorHandle op_Implicit(::Unity::Collections::Allocator a)
		{
			return ((::Unity::Collections::AllocatorManager_AllocatorHandle(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATORHANDLE_OP_IMPLICIT_OFFSET))(a);
		}
	};
}
