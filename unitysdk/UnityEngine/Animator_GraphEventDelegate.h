#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ECF70A0)
#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ECF7150)
#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ECF6B20)
#define UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF7030)

namespace UnityEngine
{
	inline static constexpr unsigned int Animator_GraphEventDelegate_TypeDefinitionIndex = 5705;

	class Animator_GraphEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_GRAPHEVENTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
