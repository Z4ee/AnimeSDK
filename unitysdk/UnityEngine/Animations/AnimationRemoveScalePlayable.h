#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A40FFE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40FF10)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A40FCC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A40FB50)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E0A10)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A40FF60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A40FFF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x22E08F0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationRemoveScalePlayable_TypeDefinitionIndex = 5084;

	struct alignas(8) AnimationRemoveScalePlayable
	{
		static ::UnityEngine::Animations::AnimationRemoveScalePlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationRemoveScalePlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationRemoveScalePlayable_TypeDefinitionIndex)->GetStaticField(0x62A0);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationRemoveScalePlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Animations::AnimationRemoveScalePlayable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATE_OFFSET))(graph, inputCount);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLE_OFFSET))(graph, inputCount);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationRemoveScalePlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationRemoveScalePlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationRemoveScalePlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationRemoveScalePlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, handle);
		}
		*/

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, handle);
		}
		*/
	};
}
