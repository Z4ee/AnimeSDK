#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class EventCallbackFunctorBase; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1B355840)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B355A30)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_BUBBLEUPCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B355750)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B3559C0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B3559E0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_TRICKLEDOWNCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B355730)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_BUBBLEUPCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B355760)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_TRICKLEDOWNCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B355740)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3557D0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B355770)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackList_TypeDefinitionIndex = 6190;

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

		::System::Void _ctor_1(::UnityEngine::UIElements::EventCallbackList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_trickleDownCallbackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_TRICKLEDOWNCALLBACKCOUNT_OFFSET))(this);
		}

		::System::Void set_trickleDownCallbackCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_TRICKLEDOWNCALLBACKCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_bubbleUpCallbackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_BUBBLEUPCALLBACKCOUNT_OFFSET))(this);
		}

		::System::Void set_bubbleUpCallbackCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_BUBBLEUPCALLBACKCOUNT_OFFSET))(this, a1);
		}

		::System::Void AddRange(::UnityEngine::UIElements::EventCallbackList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventCallbackList*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADDRANGE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::UIElements::EventCallbackFunctorBase* get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::UIElements::EventCallbackFunctorBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CLEAR_OFFSET))(this);
		}
	};
}
