#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimationEventSource.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace System { class String; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1FC57560)
#define UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1FC57570)
#define UNITYENGINE_ANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC57500)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationEvent_TypeDefinitionIndex = 6661;

	class AnimationEvent : public ::System::Object
	{
	public:
		::System::Single m_Time; // 0x10
		::System::String* m_FunctionName; // 0x18
		::System::String* m_StringParameter; // 0x20
		::UnityEngine::Object* m_ObjectReferenceParameter; // 0x28
		::System::Single m_FloatParameter; // 0x30
		::System::Int32 m_IntParameter; // 0x34
		::System::Int32 m_MessageOptions; // 0x38
		::UnityEngine::AnimationEventSource m_Source; // 0x3C
		::UnityEngine::AnimationState* m_StateSender; // 0x40
		::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo; // 0x48
		::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void set_functionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET))(this, value);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET))(this, value);
		}
	};
}
