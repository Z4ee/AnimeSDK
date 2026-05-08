#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch_GlobalState.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateHistory_1_Record.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"
#include "unitysdk/UnityEngine/InputSystem/TouchPhase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Finger; }
namespace UnityEngine::InputSystem::Utilities { class ISavedState; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADDTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x1B385600)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x1B384AD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERMOVE_OFFSET UNITYSDK_OFFSET(0x1B384D10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x1B384BF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_BEGINUPDATE_OFFSET UNITYSDK_OFFSET(0x1B385860)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_CREATEGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0x1B3858F0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9673A0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x967330)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x967450)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVEFINGERS_OFFSET UNITYSDK_OFFSET(0x1B3849C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVETOUCHES_OFFSET UNITYSDK_OFFSET(0x1B3848B0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_BEGAN_OFFSET UNITYSDK_OFFSET(0x966BA0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x967050)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x966D10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x9672D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGERS_OFFSET UNITYSDK_OFFSET(0x1B384940)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGER_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_HISTORY_OFFSET UNITYSDK_OFFSET(0x967300)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x966C00)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x967170)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISTAP_OFFSET UNITYSDK_OFFSET(0x967110)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_MAXHISTORYLENGTHPERFINGER_OFFSET UNITYSDK_OFFSET(0x1B384E30)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x966B40)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x966E30)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x966E90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x966F90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENS_OFFSET UNITYSDK_OFFSET(0x1B384A50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREEN_OFFSET UNITYSDK_OFFSET(0x77B550)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x966FF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x966EF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STATE_OFFSET UNITYSDK_OFFSET(0x967270)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x9670B0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TIME_OFFSET UNITYSDK_OFFSET(0x966F50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x966DD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x967240)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UPDATESTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x9671E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_VALID_OFFSET UNITYSDK_OFFSET(0x966AF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVETOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x1B385740)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x1B384B60)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERMOVE_OFFSET UNITYSDK_OFFSET(0x1B384DA0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x1B384C80)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_SAVEANDRESETSTATE_OFFSET UNITYSDK_OFFSET(0x1B385930)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x967320)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B385BB0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x3A5680)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 29154;

	struct alignas(8) Touch
	{
		static ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState* StaticGet_s_GlobalState()
		{
			return (::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState*)Il2CppClass::FromTypeDefinitionIndex(Touch_TypeDefinitionIndex)->GetStaticField(0x21F00);
		}
		::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord; // 0x18

		::System::Void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> touchRecord)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CTOR_OFFSET))(this, finger, touchRecord);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH__CCTOR_OFFSET))();
		}

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_VALID_OFFSET))(this);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Finger* get_finger()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Finger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::TouchPhase get_phase()
		{
			return ((::UnityEngine::InputSystem::TouchPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PHASE_OFFSET))(this);
		}

		::System::Boolean get_began()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_BEGAN_OFFSET))(this);
		}

		::System::Boolean get_inProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ENDED_OFFSET))(this);
		}

		::System::Int32 get_touchId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TOUCHID_OFFSET))(this);
		}

		::System::Single get_pressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PRESSURE_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_radius()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_RADIUS_OFFSET))(this);
		}
		*/

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TIME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Touchscreen* get_screen()
		{
			return ((::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREEN_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_screenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENPOSITION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_startScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTSCREENPOSITION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_delta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DELTA_OFFSET))(this);
		}
		*/

		::System::Int32 get_tapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TAPCOUNT_OFFSET))(this);
		}

		::System::Boolean get_isTap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISTAP_OFFSET))(this);
		}

		::System::Boolean get_isInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_updateStepCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UPDATESTEPCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_uniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UNIQUEID_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::TouchState& get_state()
		{
			return ((::UnityEngine::InputSystem::LowLevel::TouchState&(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STATE_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState& get_extraData()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState&(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_EXTRADATA_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_history()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::TouchHistory(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_HISTORY_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> get_activeTouches()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVETOUCHES_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_fingers()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGERS_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_activeFingers()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVEFINGERS_OFFSET))();
		}
		*/

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* get_screens()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENS_OFFSET))();
		}

		static ::System::Void add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERDOWN_OFFSET))(value);
		}

		static ::System::Void remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERDOWN_OFFSET))(value);
		}

		static ::System::Void add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERUP_OFFSET))(value);
		}

		static ::System::Void remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERUP_OFFSET))(value);
		}

		static ::System::Void add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERMOVE_OFFSET))(value);
		}

		static ::System::Void remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERMOVE_OFFSET))(value);
		}

		static ::System::Int32 get_maxHistoryLengthPerFinger()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_MAXHISTORYLENGTHPERFINGER_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Touch))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADDTOUCHSCREEN_OFFSET))(screen);
		}

		static ::System::Void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVETOUCHSCREEN_OFFSET))(screen);
		}

		static ::System::Void BeginUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_BEGINUPDATE_OFFSET))();
		}

		static ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState CreateGlobalState()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_CREATEGLOBALSTATE_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState()
		{
			return ((::UnityEngine::InputSystem::Utilities::ISavedState*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_SAVEANDRESETSTATE_OFFSET))();
		}
	};
}
