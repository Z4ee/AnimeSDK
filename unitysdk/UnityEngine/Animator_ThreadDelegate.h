#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANIMATOR_THREADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x189DD2D0)
#define UNITYENGINE_ANIMATOR_THREADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x189DD3B0)
#define UNITYENGINE_ANIMATOR_THREADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x189DC500)
#define UNITYENGINE_ANIMATOR_THREADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x189DD2B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Animator_ThreadDelegate_TypeDefinitionIndex = 5035;

	class Animator_ThreadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_THREADDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::AnimatorStateInfo currentState, ::UnityEngine::AnimatorStateInfo nextState, ::UnityEngine::AnimatorTransitionInfo transitionInfo, ::System::Boolean inTransition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_THREADDELEGATE_INVOKE_OFFSET))(this, currentState, nextState, transitionInfo, inTransition);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::AnimatorStateInfo currentState, ::UnityEngine::AnimatorStateInfo nextState, ::UnityEngine::AnimatorTransitionInfo transitionInfo, ::System::Boolean inTransition, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_THREADDELEGATE_BEGININVOKE_OFFSET))(this, currentState, nextState, transitionInfo, inTransition, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_THREADDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
