#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2BC6740)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int TexturePlayableOutput_TypeDefinitionIndex = 4912;

	struct alignas(8) TexturePlayableOutput
	{
		::UnityEngine::Playables::PlayableOutputHandle m_Handle; // 0x10

		::UnityEngine::Playables::PlayableOutputHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREPLAYABLEOUTPUT_GETHANDLE_OFFSET))(this);
		}
	};
}
