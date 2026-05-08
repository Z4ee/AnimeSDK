#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A04F030)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F070)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__PLAYALLEVENTSACCORDINGTOTIMESTAMPS_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A04F080)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_ReplayController___c_TypeDefinitionIndex = 29266;

	class InputEventTrace_ReplayController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>**)Il2CppClass::FromTypeDefinitionIndex(InputEventTrace_ReplayController___c_TypeDefinitionIndex)->GetStaticField(0x22420);
		}
		static ::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController___c**)Il2CppClass::FromTypeDefinitionIndex(InputEventTrace_ReplayController___c_TypeDefinitionIndex)->GetStaticField(0x22428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _PlayAllEventsAccordingToTimestamps_b__38_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr a, ::UnityEngine::InputSystem::LowLevel::InputEventPtr b)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__PLAYALLEVENTSACCORDINGTOTIMESTAMPS_B__38_0_OFFSET))(this, a, b);
		}
	};
}
