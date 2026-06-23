#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class EventCallbackFunctorBase; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1BBDF9C0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BBDFBE0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_BUBBLEUPCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBDF8A0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BBDFB60)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BBDFB80)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_TRICKLEDOWNCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBDF880)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_BUBBLEUPCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBDF8B0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_TRICKLEDOWNCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBDF890)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BBDF950)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDF8C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackList_TypeDefinitionIndex = 27511;

	class EventCallbackList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* m_List; // 0x10
		::System::Int32 _trickleDownCallbackCount_k__BackingField; // 0x18
		::System::Int32 _bubbleUpCallbackCount_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::UIElements::EventCallbackList* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST__CTOR_1_OFFSET))(this, source);
		}

		::System::Int32 get_trickleDownCallbackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_TRICKLEDOWNCALLBACKCOUNT_OFFSET))(this);
		}

		::System::Void set_trickleDownCallbackCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_TRICKLEDOWNCALLBACKCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_bubbleUpCallbackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_BUBBLEUPCALLBACKCOUNT_OFFSET))(this);
		}

		::System::Void set_bubbleUpCallbackCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_BUBBLEUPCALLBACKCOUNT_OFFSET))(this, value);
		}

		::System::Void AddRange(::UnityEngine::UIElements::EventCallbackList* list)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADDRANGE_OFFSET))(this, list);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::UIElements::EventCallbackFunctorBase* get_Item(::System::Int32 i)
		{
			return ((::UnityEngine::UIElements::EventCallbackFunctorBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CLEAR_OFFSET))(this);
		}
	};
}
