#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUserAccountHandle.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_COMPAREDEVICESBYUSERACCOUNT_COMPARE_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_COMPAREDEVICESBYUSERACCOUNT_GETUSERACCOUNTHANDLEFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1D74AB70)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_CompareDevicesByUserAccount_TypeDefinitionIndex = 31754;

	struct alignas(8) InputUser_CompareDevicesByUserAccount
	{
		::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle; // 0x10

		::System::Int32 Compare(::UnityEngine::InputSystem::InputDevice* x, ::UnityEngine::InputSystem::InputDevice* y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_COMPAREDEVICESBYUSERACCOUNT_COMPARE_OFFSET))(this, x, y);
		}

		/*
		static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_COMPAREDEVICESBYUSERACCOUNT_GETUSERACCOUNTHANDLEFORDEVICE_OFFSET))(device);
		}
		*/
	};
}
