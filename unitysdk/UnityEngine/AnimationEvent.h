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

#define UNITYENGINE_ANIMATIONEVENT_GETHASH_OFFSET UNITYSDK_OFFSET(0x1F3B6200)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1F3B5FC0)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0x1F3B6150)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0x1F3B6070)
#define UNITYENGINE_ANIMATIONEVENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1F3B5EA0)
#define UNITYENGINE_ANIMATIONEVENT_GET_FLOATPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5EE0)
#define UNITYENGINE_ANIMATIONEVENT_GET_FUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F3B5F40)
#define UNITYENGINE_ANIMATIONEVENT_GET_INTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5F00)
#define UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYANIMATOR_OFFSET UNITYSDK_OFFSET(0x1F3B5FB0)
#define UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYLEGACY_OFFSET UNITYSDK_OFFSET(0x1F3B5FA0)
#define UNITYENGINE_ANIMATIONEVENT_GET_MESSAGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1F3B5F80)
#define UNITYENGINE_ANIMATIONEVENT_GET_OBJECTREFERENCEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5F20)
#define UNITYENGINE_ANIMATIONEVENT_GET_STRINGPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5EC0)
#define UNITYENGINE_ANIMATIONEVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1F3B5F60)
#define UNITYENGINE_ANIMATIONEVENT_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1F3B5EB0)
#define UNITYENGINE_ANIMATIONEVENT_SET_FLOATPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5EF0)
#define UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F3B5F50)
#define UNITYENGINE_ANIMATIONEVENT_SET_INTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5F10)
#define UNITYENGINE_ANIMATIONEVENT_SET_MESSAGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1F3B5F90)
#define UNITYENGINE_ANIMATIONEVENT_SET_OBJECTREFERENCEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5F30)
#define UNITYENGINE_ANIMATIONEVENT_SET_STRINGPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F3B5ED0)
#define UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1F3B5F70)
#define UNITYENGINE_ANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B5E70)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationEvent_TypeDefinitionIndex = 5735;

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

		::System::Void set_data(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_DATA_OFFSET))(this, a1);
		}

		::System::String* get_stringParameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_STRINGPARAMETER_OFFSET))(this);
		}

		::System::Void set_stringParameter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_STRINGPARAMETER_OFFSET))(this, a1);
		}

		::System::Single get_floatParameter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_FLOATPARAMETER_OFFSET))(this);
		}

		::System::Void set_floatParameter(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_FLOATPARAMETER_OFFSET))(this, a1);
		}

		::System::Int32 get_intParameter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_INTPARAMETER_OFFSET))(this);
		}

		::System::Void set_intParameter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_INTPARAMETER_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_objectReferenceParameter()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_OBJECTREFERENCEPARAMETER_OFFSET))(this);
		}

		::System::Void set_objectReferenceParameter(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_OBJECTREFERENCEPARAMETER_OFFSET))(this, a1);
		}

		::System::String* get_functionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_FUNCTIONNAME_OFFSET))(this);
		}

		::System::Void set_functionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET))(this, a1);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET))(this, a1);
		}

		::UnityEngine::SendMessageOptions get_messageOptions()
		{
			return ((::UnityEngine::SendMessageOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_MESSAGEOPTIONS_OFFSET))(this);
		}

		::System::Void set_messageOptions(::UnityEngine::SendMessageOptions a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_MESSAGEOPTIONS_OFFSET))(this, a1);
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
