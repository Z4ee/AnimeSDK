#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x968480)
#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2E1000)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int CameraPlayable_TypeDefinitionIndex = 6296;

	struct alignas(8) CameraPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Playables::CameraPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Playables::CameraPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
