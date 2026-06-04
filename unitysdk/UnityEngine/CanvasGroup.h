#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_CANVASGROUP_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1B36D9E0)
#define UNITYENGINE_CANVASGROUP_GET_BLOCKSRAYCASTS_OFFSET UNITYSDK_OFFSET(0x1B36DA20)
#define UNITYENGINE_CANVASGROUP_GET_IGNOREPARENTGROUPS_OFFSET UNITYSDK_OFFSET(0x1B36DA40)
#define UNITYENGINE_CANVASGROUP_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B36DA00)
#define UNITYENGINE_CANVASGROUP_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1B36DA60)
#define UNITYENGINE_CANVASGROUP_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x1B36D9F0)
#define UNITYENGINE_CANVASGROUP_SET_BLOCKSRAYCASTS_OFFSET UNITYSDK_OFFSET(0x1B36DA30)
#define UNITYENGINE_CANVASGROUP_SET_IGNOREPARENTGROUPS_OFFSET UNITYSDK_OFFSET(0x1B36DA50)
#define UNITYENGINE_CANVASGROUP_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B36DA10)
#define UNITYENGINE_CANVASGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36DA70)

namespace UnityEngine
{
	inline static constexpr unsigned int CanvasGroup_TypeDefinitionIndex = 5339;

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

		::System::Void set_alpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_ALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_blocksRaycasts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_GET_BLOCKSRAYCASTS_OFFSET))(this);
		}

		::System::Void set_blocksRaycasts(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_BLOCKSRAYCASTS_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreParentGroups()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_GET_IGNOREPARENTGROUPS_OFFSET))(this);
		}

		::System::Void set_ignoreParentGroups(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_SET_IGNOREPARENTGROUPS_OFFSET))(this, a1);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASGROUP_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}
	};
}
