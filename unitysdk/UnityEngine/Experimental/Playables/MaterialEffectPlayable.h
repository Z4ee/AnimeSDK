#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x947060)
#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2E1000)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int MaterialEffectPlayable_TypeDefinitionIndex = 6297;

	struct alignas(8) MaterialEffectPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Playables::MaterialEffectPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Playables::MaterialEffectPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
