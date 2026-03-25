#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimationEventSource.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/SendMessageOptions.h"

namespace System { class String; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ANIMATIONEVENT_GETHASH_OFFSET UNITYSDK_OFFSET(0x189D3900)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x189D36C0)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x189D3850)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0x189D3770)
#define UNITYENGINE_ANIMATIONEVENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x189D35A0)
#define UNITYENGINE_ANIMATIONEVENT_GET_FLOATPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D35E0)
#define UNITYENGINE_ANIMATIONEVENT_GET_FUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x189D3640)
#define UNITYENGINE_ANIMATIONEVENT_GET_INTPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D3600)
#define UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYANIMATOR_OFFSET UNITYSDK_OFFSET(0x189D36B0)
#define UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYLEGACY_OFFSET UNITYSDK_OFFSET(0x189D36A0)
#define UNITYENGINE_ANIMATIONEVENT_GET_MESSAGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x189D3680)
#define UNITYENGINE_ANIMATIONEVENT_GET_OBJECTREFERENCEPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D3620)
#define UNITYENGINE_ANIMATIONEVENT_GET_STRINGPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D35C0)
#define UNITYENGINE_ANIMATIONEVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x189D3660)
#define UNITYENGINE_ANIMATIONEVENT_SET_DATA_OFFSET UNITYSDK_OFFSET(0x189D35B0)
#define UNITYENGINE_ANIMATIONEVENT_SET_FLOATPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D35F0)
#define UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x189D3650)
#define UNITYENGINE_ANIMATIONEVENT_SET_INTPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D3610)
#define UNITYENGINE_ANIMATIONEVENT_SET_MESSAGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x189D3690)
#define UNITYENGINE_ANIMATIONEVENT_SET_OBJECTREFERENCEPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D3630)
#define UNITYENGINE_ANIMATIONEVENT_SET_STRINGPARAMETER_OFFSET UNITYSDK_OFFSET(0x189D35D0)
#define UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x189D3670)
#define UNITYENGINE_ANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x189D3570)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationEvent_TypeDefinitionIndex = 5054;

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
		::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_data()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_DATA_OFFSET))(this);
		}

		::System::Void set_data(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_DATA_OFFSET))(this, value);
		}

		::System::String* get_stringParameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_STRINGPARAMETER_OFFSET))(this);
		}

		::System::Void set_stringParameter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_STRINGPARAMETER_OFFSET))(this, value);
		}

		::System::Single get_floatParameter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_FLOATPARAMETER_OFFSET))(this);
		}

		::System::Void set_floatParameter(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_FLOATPARAMETER_OFFSET))(this, value);
		}

		::System::Int32 get_intParameter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_INTPARAMETER_OFFSET))(this);
		}

		::System::Void set_intParameter(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_INTPARAMETER_OFFSET))(this, value);
		}

		::UnityEngine::Object* get_objectReferenceParameter()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_OBJECTREFERENCEPARAMETER_OFFSET))(this);
		}

		::System::Void set_objectReferenceParameter(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_OBJECTREFERENCEPARAMETER_OFFSET))(this, value);
		}

		::System::String* get_functionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_FUNCTIONNAME_OFFSET))(this);
		}

		::System::Void set_functionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET))(this, value);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET))(this, value);
		}

		::UnityEngine::SendMessageOptions get_messageOptions()
		{
			return ((::UnityEngine::SendMessageOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_MESSAGEOPTIONS_OFFSET))(this);
		}

		::System::Void set_messageOptions(::UnityEngine::SendMessageOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_MESSAGEOPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_isFiredByLegacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYLEGACY_OFFSET))(this);
		}

		::System::Boolean get_isFiredByAnimator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYANIMATOR_OFFSET))(this);
		}

		::UnityEngine::AnimationState* get_animationState()
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ANIMATIONSTATE_OFFSET))(this);
		}

		::UnityEngine::AnimatorStateInfo get_animatorStateInfo()
		{
			return ((::UnityEngine::AnimatorStateInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORSTATEINFO_OFFSET))(this);
		}

		::UnityEngine::AnimatorClipInfo get_animatorClipInfo()
		{
			return ((::UnityEngine::AnimatorClipInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORCLIPINFO_OFFSET))(this);
		}

		::System::Int32 GetHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GETHASH_OFFSET))(this);
		}
	};
}
