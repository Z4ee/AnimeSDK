#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA78C70)
#define UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2ADAB0)

namespace UnityEngine::Experimental::Video
{
	inline static constexpr unsigned int VideoClipPlayable_TypeDefinitionIndex = 19074;

	struct alignas(8) VideoClipPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Video::VideoClipPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Video::VideoClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
