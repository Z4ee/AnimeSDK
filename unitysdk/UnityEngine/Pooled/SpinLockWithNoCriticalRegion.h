#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_POOLED_SPINLOCKWITHNOCRITICALREGION_ENTER_OFFSET UNITYSDK_OFFSET(0x20DC540)
#define UNITYENGINE_POOLED_SPINLOCKWITHNOCRITICALREGION_EXIT_OFFSET UNITYSDK_OFFSET(0x2114240)

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int SpinLockWithNoCriticalRegion_TypeDefinitionIndex = 4340;

	struct alignas(4) SpinLockWithNoCriticalRegion
	{
		::System::Int32 _isRunning; // 0x10

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_SPINLOCKWITHNOCRITICALREGION_ENTER_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_SPINLOCKWITHNOCRITICALREGION_EXIT_OFFSET))(this);
		}
	};
}
