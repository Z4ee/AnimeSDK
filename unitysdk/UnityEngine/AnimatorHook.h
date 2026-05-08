#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Animator; }

#define UNITYENGINE_ANIMATORHOOK_INVOKE_ONHOOKANIMATORSETBOOL_OFFSET UNITYSDK_OFFSET(0x1C552970)
#define UNITYENGINE_ANIMATORHOOK_INVOKE_ONHOOKANIMATORSETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C5529F0)
#define UNITYENGINE_ANIMATORHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C552A60)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorHook_TypeDefinitionIndex = 6529;

	class AnimatorHook : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::Animator*, ::System::Int32>** StaticGet_onHookSetTrigger()
		{
			return (::System::Action_2<::UnityEngine::Animator*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorHook_TypeDefinitionIndex)->GetStaticField(0x5A80);
		}
		static ::System::Action_3<::UnityEngine::Animator*, ::System::Int32, ::System::Boolean>** StaticGet_onHookSetBool()
		{
			return (::System::Action_3<::UnityEngine::Animator*, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorHook_TypeDefinitionIndex)->GetStaticField(0x5A88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookAnimatorSetBool(::UnityEngine::Animator* ani, ::System::Int32 id, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORHOOK_INVOKE_ONHOOKANIMATORSETBOOL_OFFSET))(ani, id, value);
		}

		static ::System::Void invoke_onHookAnimatorSetTrigger(::UnityEngine::Animator* ani, ::System::Int32 id)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORHOOK_INVOKE_ONHOOKANIMATORSETTRIGGER_OFFSET))(ani, id);
		}
	};
}
