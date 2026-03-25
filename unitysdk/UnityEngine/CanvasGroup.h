#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_CANVASGROUP_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x18AE6AE0)
#define UNITYENGINE_CANVASGROUP_GET_BLOCKSRAYCASTS_OFFSET UNITYSDK_OFFSET(0x18AE6B20)
#define UNITYENGINE_CANVASGROUP_GET_IGNOREPARENTGROUPS_OFFSET UNITYSDK_OFFSET(0x18AE6B40)
#define UNITYENGINE_CANVASGROUP_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18AE6B00)
#define UNITYENGINE_CANVASGROUP_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x18AE6B60)
#define UNITYENGINE_CANVASGROUP_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x18AE6AF0)
#define UNITYENGINE_CANVASGROUP_SET_BLOCKSRAYCASTS_OFFSET UNITYSDK_OFFSET(0x18AE6B30)
#define UNITYENGINE_CANVASGROUP_SET_IGNOREPARENTGROUPS_OFFSET UNITYSDK_OFFSET(0x18AE6B50)
#define UNITYENGINE_CANVASGROUP_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18AE6B10)
#define UNITYENGINE_CANVASGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE6B70)

namespace UnityEngine
{
	inline static constexpr unsigned int CanvasGroup_TypeDefinitionIndex = 5252;

	class CanvasGroup : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP__CTOR_OFFSET))(this);
		}

		::System::Single get_alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_GET_ALPHA_OFFSET))(this);
		}

		::System::Void set_alpha(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_ALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Boolean get_blocksRaycasts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_GET_BLOCKSRAYCASTS_OFFSET))(this);
		}

		::System::Void set_blocksRaycasts(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_BLOCKSRAYCASTS_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreParentGroups()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_GET_IGNOREPARENTGROUPS_OFFSET))(this);
		}

		::System::Void set_ignoreParentGroups(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_IGNOREPARENTGROUPS_OFFSET))(this, value);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_ISRAYCASTLOCATIONVALID_OFFSET))(this, sp, eventCamera);
		}
	};
}
