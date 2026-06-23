#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_MatchResult.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUserAccountHandle.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser_UserFlags.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class IInputActionCollection; }

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_UserData_TypeDefinitionIndex = 31753;

	struct alignas(8) InputUser_UserData
	{
		::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle; // 0x10
		::System::String* platformUserAccountName; // 0x28
		::System::String* platformUserAccountId; // 0x30
		::System::Int32 deviceCount; // 0x38
		::System::Int32 deviceStartIndex; // 0x3C
		::UnityEngine::InputSystem::IInputActionCollection* actions; // 0x40
		::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme; // 0x48
		::UnityEngine::InputSystem::InputControlScheme_MatchResult controlSchemeMatch; // 0x68
		::System::Int32 lostDeviceCount; // 0xB8
		::System::Int32 lostDeviceStartIndex; // 0xBC
		::UnityEngine::InputSystem::Users::InputUser_UserFlags flags; // 0xC0
	};
}
