#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class IBeginDragHandler; }
namespace UnityEngine::EventSystems { class ICancelHandler; }
namespace UnityEngine::EventSystems { class IDeselectHandler; }
namespace UnityEngine::EventSystems { class IDragHandler; }
namespace UnityEngine::EventSystems { class IDropHandler; }
namespace UnityEngine::EventSystems { class IEndDragHandler; }
namespace UnityEngine::EventSystems { class IEventSystemHandler; }
namespace UnityEngine::EventSystems { class IExecuteEventBlocker; }
namespace UnityEngine::EventSystems { class IIgnoreHandler; }
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { template <typename T> class ExecuteEvents_EventFunction_1; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTEEXIT_OFFSET UNITYSDK_OFFSET(0x1B3787F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_10_OFFSET UNITYSDK_OFFSET(0x1B377BC0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_11_OFFSET UNITYSDK_OFFSET(0x1B377CD0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_12_OFFSET UNITYSDK_OFFSET(0x1B377DB0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_13_OFFSET UNITYSDK_OFFSET(0x1B377E60)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_14_OFFSET UNITYSDK_OFFSET(0x1B377F10)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_15_OFFSET UNITYSDK_OFFSET(0x1B378020)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_16_OFFSET UNITYSDK_OFFSET(0x1B378100)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_17_OFFSET UNITYSDK_OFFSET(0x1B378510)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1B3772C0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1B3773A0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_3_OFFSET UNITYSDK_OFFSET(0x1B377480)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_4_OFFSET UNITYSDK_OFFSET(0x1B377560)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_5_OFFSET UNITYSDK_OFFSET(0x1B377670)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_6_OFFSET UNITYSDK_OFFSET(0x1B377780)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_7_OFFSET UNITYSDK_OFFSET(0x1B377890)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_8_OFFSET UNITYSDK_OFFSET(0x1B3779A0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_9_OFFSET UNITYSDK_OFFSET(0x1B377AB0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B3771E0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET UNITYSDK_OFFSET(0x1B378620)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_BEGINDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378300)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_CANCELHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3784E0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DESELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378450)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378330)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DROPHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378390)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_ENDDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378360)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3785F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_INITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1B3782D0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_MOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378480)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERCLICKHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3782A0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERDOWNHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378240)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERENTERHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3781E0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTEREXITHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378210)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERUPHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378270)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SCROLLHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3783C0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B378420)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SUBMITHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3784B0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_UPDATESELECTEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3783F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x1B3770C0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_SETEXECUTEEVENTBLOCKER_OFFSET UNITYSDK_OFFSET(0x1B377080)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B378840)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int ExecuteEvents_TypeDefinitionIndex = 6091;

	class ExecuteEvents : public ::System::Object
	{
	public:
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>** StaticGet_s_SubmitHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E50);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>** StaticGet_s_EndDragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E58);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>** StaticGet_s_CancelHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E60);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>** StaticGet_s_DragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E68);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>** StaticGet_s_PointerDownHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E70);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>** StaticGet_s_DropHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E78);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>** StaticGet_s_PointerUpHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E80);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>** StaticGet_s_DeselectHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E88);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IIgnoreHandler*>** StaticGet_s_IgnoreHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IIgnoreHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E90);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>** StaticGet_s_PointerExitHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12E98);
		}
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>** StaticGet_s_HandlerListPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EA0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>** StaticGet_s_SelectHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EA8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>** StaticGet_s_MoveHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EB0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>** StaticGet_s_PointerClickHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EB8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>** StaticGet_s_InitializePotentialDragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EC0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>** StaticGet_s_ScrollHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EC8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>** StaticGet_s_PointerEnterHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12ED0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>** StaticGet_s_BeginDragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12ED8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>** StaticGet_s_UpdateSelectedHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EE0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_s_InternalTransformList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EE8);
		}
		static ::UnityEngine::EventSystems::IExecuteEventBlocker** StaticGet__ExecuteEventBlocker()
		{
			return (::UnityEngine::EventSystems::IExecuteEventBlocker**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x12EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS__CCTOR_OFFSET))();
		}

		static ::System::Void SetExecuteEventBlocker(::UnityEngine::EventSystems::IExecuteEventBlocker* a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IExecuteEventBlocker*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_SETEXECUTEEVENTBLOCKER_OFFSET))(a1);
		}

		static ::System::Boolean IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_ISEVENTBLOCK_OFFSET))(a1);
		}

		static ::System::Void Execute(::UnityEngine::EventSystems::IPointerEnterHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_1(::UnityEngine::EventSystems::IPointerExitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_1_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_2(::UnityEngine::EventSystems::IPointerDownHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_2_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_3(::UnityEngine::EventSystems::IPointerUpHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_3_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_4(::UnityEngine::EventSystems::IPointerClickHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_4_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_5(::UnityEngine::EventSystems::IInitializePotentialDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_5_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_6(::UnityEngine::EventSystems::IBeginDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_6_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_7(::UnityEngine::EventSystems::IDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_7_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_8(::UnityEngine::EventSystems::IEndDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_8_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_9(::UnityEngine::EventSystems::IDropHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_9_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_10(::UnityEngine::EventSystems::IScrollHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_10_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_11(::UnityEngine::EventSystems::IUpdateSelectedHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_11_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_12(::UnityEngine::EventSystems::ISelectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_12_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_13(::UnityEngine::EventSystems::IDeselectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_13_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_14(::UnityEngine::EventSystems::IMoveHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_14_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_15(::UnityEngine::EventSystems::ISubmitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_15_OFFSET))(a1, a2);
		}

		static ::System::Void Execute_16(::UnityEngine::EventSystems::ICancelHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_16_OFFSET))(a1, a2);
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* get_pointerEnterHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERENTERHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* get_pointerExitHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTEREXITHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* get_pointerDownHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERDOWNHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* get_pointerUpHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERUPHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* get_pointerClickHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERCLICKHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* get_initializePotentialDrag()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_INITIALIZEPOTENTIALDRAG_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* get_beginDragHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_BEGINDRAGHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* get_dragHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DRAGHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* get_endDragHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_ENDDRAGHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* get_dropHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DROPHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* get_scrollHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SCROLLHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* get_updateSelectedHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_UPDATESELECTEDHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* get_selectHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SELECTHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* get_deselectHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DESELECTHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* get_moveHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_MOVEHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* get_submitHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SUBMITHANDLER_OFFSET))();
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* get_cancelHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_CANCELHANDLER_OFFSET))();
		}

		static ::System::Void Execute_17(::UnityEngine::EventSystems::IIgnoreHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IIgnoreHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_17_OFFSET))(a1, a2);
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IIgnoreHandler*>* get_ignoreHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IIgnoreHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_IGNOREHANDLER_OFFSET))();
		}

		static ::System::Void GetEventChain(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET))(a1, a2);
		}

		static ::System::Boolean ExecuteExit(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2, ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTEEXIT_OFFSET))(a1, a2, a3);
		}
	};
}
