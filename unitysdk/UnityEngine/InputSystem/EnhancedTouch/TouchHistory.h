#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Finger; }
namespace UnityEngine::InputSystem::LowLevel { template <typename T> class InputStateHistory_1; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x9C1A70)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9C19E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C1A50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9C19E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x9C1980)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int TouchHistory_TypeDefinitionIndex = 29159;

	struct alignas(8) TouchHistory
	{
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* m_History; // 0x10
		::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger; // 0x18
		::System::Int32 m_Count; // 0x20
		::System::Int32 m_StartIndex; // 0x24
		::System::UInt32 m_Version; // 0x28

		::System::Void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* history, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY__CTOR_OFFSET))(this, finger, history, startIndex, count);
		}

		/*
		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_COUNT_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::EnhancedTouch::Touch get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_ITEM_OFFSET))(this, index);
		}
		*/

		::System::Void CheckValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_CHECKVALID_OFFSET))(this);
		}
	};
}
