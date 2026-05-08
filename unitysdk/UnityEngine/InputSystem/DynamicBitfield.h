#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_BITCOUNTTOULONGCOUNT_OFFSET UNITYSDK_OFFSET(0x1B98B940)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_CLEARBIT_OFFSET UNITYSDK_OFFSET(0x99A310)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETBIT_OFFSET UNITYSDK_OFFSET(0x99A290)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x99A240)
#define UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_TESTBIT_OFFSET UNITYSDK_OFFSET(0x99A2E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int DynamicBitfield_TypeDefinitionIndex = 29055;

	struct alignas(8) DynamicBitfield
	{
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::UInt64> array; // 0x10
		::System::Int32 length; // 0x28

		::System::Void SetLength(::System::Int32 newLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETLENGTH_OFFSET))(this, newLength);
		}

		::System::Void SetBit(::System::Int32 bitIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_SETBIT_OFFSET))(this, bitIndex);
		}

		::System::Boolean TestBit(::System::Int32 bitIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_TESTBIT_OFFSET))(this, bitIndex);
		}

		::System::Void ClearBit(::System::Int32 bitIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_CLEARBIT_OFFSET))(this, bitIndex);
		}

		static ::System::Int32 BitCountToULongCount(::System::Int32 bitCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DYNAMICBITFIELD_BITCOUNTTOULONGCOUNT_OFFSET))(bitCount);
		}
	};
}
