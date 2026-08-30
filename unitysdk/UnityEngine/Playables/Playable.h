#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace System { class Type; }

#define UNITYENGINE_PLAYABLES_PLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECC65F0)
#define UNITYENGINE_PLAYABLES_PLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C6C140)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x14A80)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GETPLAYABLETYPE_OFFSET UNITYSDK_OFFSET(0x3C6C100)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1ECC65B0)
#define UNITYENGINE_PLAYABLES_PLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECC67E0)
#define UNITYENGINE_PLAYABLES_PLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x148D0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int Playable_TypeDefinitionIndex = 4904;

	struct alignas(8) Playable
	{
		static ::UnityEngine::Playables::Playable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Playables::Playable*)Il2CppClass::FromTypeDefinitionIndex(Playable_TypeDefinitionIndex)->GetStaticField(0x7D10);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Playables::Playable get_Null()
		{
			return ((::UnityEngine::Playables::Playable(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GET_NULL_OFFSET))();
		}

		/*
		static ::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_CREATE_OFFSET))(a1, a2);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Type* GetPlayableType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GETPLAYABLETYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_EQUALS_OFFSET))(this, a1);
		}
	};
}
