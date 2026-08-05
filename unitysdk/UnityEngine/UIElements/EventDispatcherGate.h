#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::UIElements { class EventDispatcher; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97EC80)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x97ED10)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D9D70)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97EDA0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x97EC10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcherGate_TypeDefinitionIndex = 28043;

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
