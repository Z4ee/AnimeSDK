#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

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
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { template <typename T> class ExecuteEvents_EventFunction_1; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_10_OFFSET UNITYSDK_OFFSET(0x1BBC47D0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_11_OFFSET UNITYSDK_OFFSET(0x1BBC4910)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_12_OFFSET UNITYSDK_OFFSET(0x1BBC4A50)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_13_OFFSET UNITYSDK_OFFSET(0x1BBC4B50)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_14_OFFSET UNITYSDK_OFFSET(0x1BBC4C50)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_15_OFFSET UNITYSDK_OFFSET(0x1BBC4D50)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_16_OFFSET UNITYSDK_OFFSET(0x1BBC4E90)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_17_OFFSET UNITYSDK_OFFSET(0x1BBC4F90)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1BBC3C90)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1BBC3DD0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_3_OFFSET UNITYSDK_OFFSET(0x1BBC3F10)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_4_OFFSET UNITYSDK_OFFSET(0x1BBC4050)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_5_OFFSET UNITYSDK_OFFSET(0x1BBC4190)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_6_OFFSET UNITYSDK_OFFSET(0x1BBC42D0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_7_OFFSET UNITYSDK_OFFSET(0x1BBC4410)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_8_OFFSET UNITYSDK_OFFSET(0x1BBC4550)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_9_OFFSET UNITYSDK_OFFSET(0x1BBC4690)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BBC3BE0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET UNITYSDK_OFFSET(0x1BBC5750)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_BEGINDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5330)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_CANCELHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC56F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DESELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC55D0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5390)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DROPHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5450)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_ENDDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC53F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_INITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1BBC52D0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_MOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5630)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERCLICKHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5270)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERDOWNHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC51B0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERENTERHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC50F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTEREXITHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5150)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5090)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERUPHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5210)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SCROLLHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC54B0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SELECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5570)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SUBMITHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5690)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_UPDATESELECTEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1BBC5510)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBC5B00)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int ExecuteEvents_TypeDefinitionIndex = 8534;

	class ExecuteEvents : public ::System::Object
	{
	public:
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>** StaticGet_s_BeginDragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7470);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>** StaticGet_s_PointerDownHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7478);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>** StaticGet_s_UpdateSelectedHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7480);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>** StaticGet_s_CancelHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7488);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>** StaticGet_s_SelectHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7490);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>** StaticGet_s_MoveHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7498);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>** StaticGet_s_SubmitHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74A0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>** StaticGet_s_PointerMoveHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74A8);
		}
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>** StaticGet_s_HandlerListPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74B0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>** StaticGet_s_InitializePotentialDragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74B8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>** StaticGet_s_PointerEnterHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74C0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_s_InternalTransformList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74C8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>** StaticGet_s_PointerUpHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74D0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>** StaticGet_s_EndDragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74D8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>** StaticGet_s_DropHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74E0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>** StaticGet_s_ScrollHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74E8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>** StaticGet_s_PointerClickHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74F0);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>** StaticGet_s_DeselectHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x74F8);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>** StaticGet_s_DragHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7500);
		}
		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>** StaticGet_s_PointerExitHandler()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents_TypeDefinitionIndex)->GetStaticField(0x7508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS__CCTOR_OFFSET))();
		}

		static ::System::Void Execute(::UnityEngine::EventSystems::IPointerMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_1(::UnityEngine::EventSystems::IPointerEnterHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_1_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_2(::UnityEngine::EventSystems::IPointerExitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_2_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_3(::UnityEngine::EventSystems::IPointerDownHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_3_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_4(::UnityEngine::EventSystems::IPointerUpHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_4_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_5(::UnityEngine::EventSystems::IPointerClickHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_5_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_6(::UnityEngine::EventSystems::IInitializePotentialDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_6_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_7(::UnityEngine::EventSystems::IBeginDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_7_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_8(::UnityEngine::EventSystems::IDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_8_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_9(::UnityEngine::EventSystems::IEndDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_9_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_10(::UnityEngine::EventSystems::IDropHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_10_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_11(::UnityEngine::EventSystems::IScrollHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_11_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_12(::UnityEngine::EventSystems::IUpdateSelectedHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_12_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_13(::UnityEngine::EventSystems::ISelectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_13_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_14(::UnityEngine::EventSystems::IDeselectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_14_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_15(::UnityEngine::EventSystems::IMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_15_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_16(::UnityEngine::EventSystems::ISubmitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_16_OFFSET))(handler, eventData);
		}

		static ::System::Void Execute_17(::UnityEngine::EventSystems::ICancelHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_17_OFFSET))(handler, eventData);
		}

		static ::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* get_pointerMoveHandler()
		{
			return ((::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERMOVEHANDLER_OFFSET))();
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

		static ::System::Void GetEventChain(::UnityEngine::GameObject* root, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>* eventChain)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET))(root, eventChain);
		}
	};
}
