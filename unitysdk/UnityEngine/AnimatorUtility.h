#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_ANIMATORUTILITY_OPTIMIZETRANSFORMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1EE9C270)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorUtility_TypeDefinitionIndex = 5709;

	class AnimatorUtility : public ::System::Object
	{
	public:
		static ::System::Void OptimizeTransformHierarchy(::UnityEngine::GameObject* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORUTILITY_OPTIMIZETRANSFORMHIERARCHY_OFFSET))(a1, a2);
		}
	};
}
