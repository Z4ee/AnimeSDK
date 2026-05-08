#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHSUPPORTHID_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4ED000)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchSupportHID_TypeDefinitionIndex = 29123;

	class SwitchSupportHID : public ::System::Object
	{
	public:
		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHSUPPORTHID_INITIALIZE_OFFSET))();
		}
	};
}
