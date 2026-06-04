#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_EVENTS_INVOKABLECALL_ADD_DELEGATE_OFFSET UNITYSDK_OFFSET(0x1B291D50)
#define UNITYENGINE_EVENTS_INVOKABLECALL_FIND_OFFSET UNITYSDK_OFFSET(0x1B292020)
#define UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1B291FB0)
#define UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B291F30)
#define UNITYENGINE_EVENTS_INVOKABLECALL_REMOVE_DELEGATE_OFFSET UNITYSDK_OFFSET(0x1B291DB0)
#define UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B291ED0)
#define UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B291E10)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_TypeDefinitionIndex = 4461;

	class InvokableCall : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction* Delegate; // 0x10

		::System::Void _ctor(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void add_Delegate(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_ADD_DELEGATE_OFFSET))(this, a1);
		}

		::System::Void remove_Delegate(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_REMOVE_DELEGATE_OFFSET))(this, a1);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET))(this, a1);
		}

		::System::Void Invoke_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_1_OFFSET))(this);
		}

		::System::Boolean Find(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_FIND_OFFSET))(this, a1, a2);
		}
	};
}
