#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::UIElements { class EventDispatcher; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x884FF0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x885080)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x645440)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6B75A0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x884F80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcherGate_TypeDefinitionIndex = 24938;

	struct alignas(8) EventDispatcherGate
	{
		::UnityEngine::UIElements::EventDispatcher* m_Dispatcher; // 0x10

		::System::Void _ctor(::UnityEngine::UIElements::EventDispatcher* d)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventDispatcher*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE__CTOR_OFFSET))(this, d);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::EventDispatcherGate other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventDispatcherGate))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
