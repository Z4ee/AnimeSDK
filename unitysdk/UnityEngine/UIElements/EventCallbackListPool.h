#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::UIElements { class EventCallbackList; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1CFF72C0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CFF7440)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF74D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackListPool_TypeDefinitionIndex = 28112;

	class EventCallbackListPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* m_Stack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL__CTOR_OFFSET))(this);
		}

		::UnityEngine::UIElements::EventCallbackList* Get(::UnityEngine::UIElements::EventCallbackList* initializer)
		{
			return ((::UnityEngine::UIElements::EventCallbackList*(*)(::PVOID, ::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_GET_OFFSET))(this, initializer);
		}

		::System::Void Release(::UnityEngine::UIElements::EventCallbackList* element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_RELEASE_OFFSET))(this, element);
		}
	};
}
