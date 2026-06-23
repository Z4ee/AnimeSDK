#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E88AA90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E88AA20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8D9B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1E88A650)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E88A830)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E88AAA0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E88A9B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTS_OFFSET UNITYSDK_OFFSET(0xA8DA60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88AAB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D830)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationScriptPlayable_TypeDefinitionIndex = 6683;

	struct alignas(8) AnimationScriptPlayable
	{
		static ::UnityEngine::Animations::AnimationScriptPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationScriptPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationScriptPlayable_TypeDefinitionIndex)->GetStaticField(0x3170);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Animations::AnimationScriptPlayable get_Null()
		{
			return ((::UnityEngine::Animations::AnimationScriptPlayable(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GET_NULL_OFFSET))();
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationScriptPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationScriptPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		::System::Void SetProcessInputs(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTS_OFFSET))(this, value);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::PlayableHandle& handle, ::System::IntPtr jobReflectionData)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, handle, jobReflectionData);
		}
		*/

		static ::System::Void SetProcessInputsInternal(::UnityEngine::Playables::PlayableHandle handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_OFFSET))(handle, value);
		}

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::Playables::PlayableHandle& handle, ::System::IntPtr jobReflectionData)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, handle, jobReflectionData);
		}
		*/

		static ::System::Void SetProcessInputsInternal_Injected(::UnityEngine::Playables::PlayableHandle& handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_INJECTED_OFFSET))(handle, value);
		}
	};
}
