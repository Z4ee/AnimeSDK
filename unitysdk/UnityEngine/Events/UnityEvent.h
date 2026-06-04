#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1B293820)
#define UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0x1B293A80)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1B293910)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B293D20)
#define UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B293D60)
#define UNITYENGINE_EVENTS_UNITYEVENT_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1B293A10)
#define UNITYENGINE_EVENTS_UNITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B293740)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_TypeDefinitionIndex = 4473;

	class UnityEvent : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT__CTOR_OFFSET))(this);
		}

		::System::Void AddListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_REMOVELISTENER_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* FindMethod_Impl(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Events::BaseInvokableCall* GetDelegate_1(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_1_OFFSET))(a1);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET))(this);
		}
	};
}
