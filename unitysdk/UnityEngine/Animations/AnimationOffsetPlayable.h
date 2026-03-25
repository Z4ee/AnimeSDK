#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x189D5730)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x189D5650)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x189D53F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x189D5260)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x210DA00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x148EF80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x189D56B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189D5740)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x210D920)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationOffsetPlayable_TypeDefinitionIndex = 5071;

	struct alignas(8) AnimationOffsetPlayable
	{
		static ::UnityEngine::Animations::AnimationOffsetPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationOffsetPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationOffsetPlayable_TypeDefinitionIndex)->GetStaticField(0x64B0);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationOffsetPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Animations::AnimationOffsetPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATE_OFFSET))(graph, position, rotation, inputCount);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLE_OFFSET))(graph, position, rotation, inputCount);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationOffsetPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationOffsetPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationOffsetPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationOffsetPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, position, rotation, handle);
		}
		*/

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, position, rotation, handle);
		}
		*/
	};
}
