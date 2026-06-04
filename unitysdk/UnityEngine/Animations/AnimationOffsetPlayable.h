#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B263850)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B263770)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B263510)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B263390)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x387C880)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2BC6740)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2637D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B263860)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x387C7B0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationOffsetPlayable_TypeDefinitionIndex = 5173;

	struct alignas(8) AnimationOffsetPlayable
	{
		static ::UnityEngine::Animations::AnimationOffsetPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationOffsetPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationOffsetPlayable_TypeDefinitionIndex)->GetStaticField(0xAD50);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationOffsetPlayable Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Animations::AnimationOffsetPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationOffsetPlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationOffsetPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationOffsetPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationOffsetPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Playables::PlayableHandle& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Playables::PlayableHandle& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
		*/
	};
}
