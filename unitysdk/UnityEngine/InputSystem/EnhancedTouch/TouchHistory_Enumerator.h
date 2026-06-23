#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/TouchHistory.h"

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D73C850)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D73C780)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D73C750)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D73C770)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D73C7D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D73C730)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int TouchHistory_Enumerator_TypeDefinitionIndex = 31816;

	class TouchHistory_Enumerator : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory m_Owner; // 0x10
		::System::Int32 m_Index; // 0x30

		::System::Void _ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR__CTOR_OFFSET))(this, owner);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_RESET_OFFSET))(this);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch get_Current()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_ENUMERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
