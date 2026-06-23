#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA52940)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION_OVERLAP_OFFSET UNITYSDK_OFFSET(0xA52960)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA52950)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int MemoryHelpers_BitRegion_TypeDefinitionIndex = 32057;

	struct alignas(4) MemoryHelpers_BitRegion
	{
		::System::UInt32 bitOffset; // 0x10
		::System::UInt32 sizeInBits; // 0x14

		::System::Void _ctor(::System::UInt32 bitOffset, ::System::UInt32 sizeInBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION__CTOR_OFFSET))(this, bitOffset, sizeInBits);
		}

		::System::Void _ctor_1(::System::UInt32 byteOffset, ::System::UInt32 bitOffset, ::System::UInt32 sizeInBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION__CTOR_1_OFFSET))(this, byteOffset, bitOffset, sizeInBits);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION_GET_ISEMPTY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion Overlap(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion other)
		{
			return ((::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_BITREGION_OVERLAP_OFFSET))(this, other);
		}
	};
}
