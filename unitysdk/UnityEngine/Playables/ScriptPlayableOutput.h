#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }

#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2F4AF0)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2E1000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1B2F4B70)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2F4DC0)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x962D30)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayableOutput_TypeDefinitionIndex = 6276;

	struct alignas(8) ScriptPlayableOutput
	{
		::UnityEngine::Playables::PlayableOutputHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT__CTOR_OFFSET))(this, handle);
		}

		/*
		static ::UnityEngine::Playables::ScriptPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name)
		{
			return ((::UnityEngine::Playables::ScriptPlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_CREATE_OFFSET))(graph, name);
		}
		*/

		static ::UnityEngine::Playables::ScriptPlayableOutput get_Null()
		{
			return ((::UnityEngine::Playables::ScriptPlayableOutput(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GET_NULL_OFFSET))();
		}

		::UnityEngine::Playables::PlayableOutputHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::PlayableOutput op_Implicit(::UnityEngine::Playables::ScriptPlayableOutput output)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Playables::ScriptPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET))(output);
		}
		*/
	};
}
