#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D1B5E60)
#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D1B5E90)
#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1B4020)
#define UNITYENGINE_ANIMATOR_ONANIMATORDISPATCHMOVEMENTJOBFINISHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B5DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Animator_OnAnimatorDispatchMovementJobFinishDelegate_TypeDefinitionIndex = 5141;

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
