#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Mouse.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1D8D6ED0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSECLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1D8D7690)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAX_OFFSET UNITYSDK_OFFSET(0x1D8D7C50)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAY_OFFSET UNITYSDK_OFFSET(0x1D8D7E30)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTA_OFFSET UNITYSDK_OFFSET(0x1D8D5E20)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEFORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x1D8D6C50)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSELEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x1D8D6400)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEMIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1D8D69A0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOINTERID_OFFSET UNITYSDK_OFFSET(0x1D8D74F0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1D8D7830)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1D8D7A40)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8D5C30)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESSURE_OFFSET UNITYSDK_OFFSET(0x1D8D7150)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESS_OFFSET UNITYSDK_OFFSET(0x1D8D6190)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSX_OFFSET UNITYSDK_OFFSET(0x1D8D8410)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSY_OFFSET UNITYSDK_OFFSET(0x1D8D85F0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUS_OFFSET UNITYSDK_OFFSET(0x1D8D7330)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x1D8D66D0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLX_OFFSET UNITYSDK_OFFSET(0x1D8D8010)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLY_OFFSET UNITYSDK_OFFSET(0x1D8D8210)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1D8D5FE0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1D8D8990)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8D87D0)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1D8D8830)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1D8D8A30)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8D8920)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1D8D8980)
#define UNITYENGINE_INPUTSYSTEM_FASTMOUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D5190)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int FastMouse_TypeDefinitionIndex = 31639;

	class FastMouse : public ::UnityEngine::InputSystem::Mouse
	{
	public:
		// static const ::System::String* metadata; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMouseposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITION_OFFSET))(this, kVector2Layout, parent);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMousedelta(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTA_OFFSET))(this, kVector2Layout, parent);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMousescroll(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLL_OFFSET))(this, kVector2Layout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousepress(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESS_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouseleftButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSELEFTBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouserightButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERIGHTBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousemiddleButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEMIDDLEBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouseforwardButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEFORWARDBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousebackButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEBACKBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPRESSURE_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMouseradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUS_OFFSET))(this, kVector2Layout, parent);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMousepointerId(::UnityEngine::InputSystem::Utilities::InternedString kDigitalLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOINTERID_OFFSET))(this, kDigitalLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMouseclickCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSECLICKCOUNT_OFFSET))(this, kIntegerLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONX_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEPOSITIONY_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAX_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSEDELTAY_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLX_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrolly(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSESCROLLY_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMouseradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSX_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMouseradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_INITIALIZE_CTRLMOUSERADIUSY_OFFSET))(this, kAxisLayout, parent);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		static ::System::Boolean MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_MERGEFORWARD_OFFSET))(currentEventPtr, nextEventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTMOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET))(this, currentEventPtr, nextEventPtr);
		}
	};
}
