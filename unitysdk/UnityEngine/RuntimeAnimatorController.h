#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER_GET_ANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x1B26B670)
#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26AA70)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeAnimatorController_TypeDefinitionIndex = 5152;

	class RuntimeAnimatorController : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::AnimationClip*>* get_animationClips()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER_GET_ANIMATIONCLIPS_OFFSET))(this);
		}
	};
}
