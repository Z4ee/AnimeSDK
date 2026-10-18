#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F3BEF80)
#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F3BEFB0)
#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F3BD170)
#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BEF10)

namespace UnityEngine
{
	inline static constexpr unsigned int Animator_OnAnimatorDispatchMovementJobFinishDelegate_TypeDefinitionIndex = 5711;

	class Animator_OnAnimatorDispatchMovementJobFinishDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
