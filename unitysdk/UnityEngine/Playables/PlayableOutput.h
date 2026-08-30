#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C6CF00)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x14A80)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1ECC6CD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECC7F80)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x148D0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableOutput_TypeDefinitionIndex = 4916;

	struct alignas(8) PlayableOutput
	{
		static ::UnityEngine::Playables::PlayableOutput* StaticGet_m_NullPlayableOutput()
		{
			return (::UnityEngine::Playables::PlayableOutput*)Il2CppClass::FromTypeDefinitionIndex(PlayableOutput_TypeDefinitionIndex)->GetStaticField(0x7D40);
		}
		::UnityEngine::Playables::PlayableOutputHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableOutputHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::PlayableOutput get_Null()
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GET_NULL_OFFSET))();
		}

		::UnityEngine::Playables::PlayableOutputHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Playables::PlayableOutput a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_EQUALS_OFFSET))(this, a1);
		}
	};
}
