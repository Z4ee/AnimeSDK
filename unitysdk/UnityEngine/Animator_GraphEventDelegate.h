#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A416A00)
#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A416AB0)
#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A415600)
#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4169E0)

namespace UnityEngine
{
	inline static constexpr unsigned int Animator_GraphEventDelegate_TypeDefinitionIndex = 5044;

	class Animator_GraphEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 eventID, ::UnityEngine::AnimatorStateInfo currentState, ::UnityEngine::AnimatorTransitionInfo transitionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_INVOKE_OFFSET))(this, eventID, currentState, transitionInfo);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 eventID, ::UnityEngine::AnimatorStateInfo currentState, ::UnityEngine::AnimatorTransitionInfo transitionInfo, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_BEGININVOKE_OFFSET))(this, eventID, currentState, transitionInfo, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
