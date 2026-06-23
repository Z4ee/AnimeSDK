#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlExtensions_ControlBuilder.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlExtensions_DeviceBuilder.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlExtensions_Enumerate.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlExtensions_InputEventControlCollection.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { template <typename T> class InputControl_1; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_1_OFFSET UNITYSDK_OFFSET(0x1DDEAE20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_OFFSET UNITYSDK_OFFSET(0x1DDEAD50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x1DDEAF20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_1_OFFSET UNITYSDK_OFFSET(0x1DDEA280)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_OFFSET UNITYSDK_OFFSET(0x1DDEA170)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_1_OFFSET UNITYSDK_OFFSET(0x1DDE9F60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_OFFSET UNITYSDK_OFFSET(0x1DDE9610)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATEIGNORINGNOISE_OFFSET UNITYSDK_OFFSET(0x1DDEA330)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_1_OFFSET UNITYSDK_OFFSET(0x1DDEA4B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_OFFSET UNITYSDK_OFFSET(0x1DDEA0B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COPYSTATE_OFFSET UNITYSDK_OFFSET(0x1DDE9E40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECHANGEDCONTROLS_OFFSET UNITYSDK_OFFSET(0x1DDEB610)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECONTROLS_OFFSET UNITYSDK_OFFSET(0x1DDEB3D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETALLBUTTONPRESSES_OFFSET UNITYSDK_OFFSET(0x1DDEB910)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETFIRSTBUTTONPRESSORNULL_OFFSET UNITYSDK_OFFSET(0x1DDEB670)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENTUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1DDEA8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1DDE9A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x1DDEB650)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINEVENT_OFFSET UNITYSDK_OFFSET(0x1DDEA730)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINSTATE_OFFSET UNITYSDK_OFFSET(0x1DDEA630)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISACTUATED_OFFSET UNITYSDK_OFFSET(0x1DDE9490)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1DDE9260)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READDEFAULTVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1DDE9890)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1DDE96C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENTASOBJECT_OFFSET UNITYSDK_OFFSET(0x1DDE9920)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1DDE9780)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_RESETTODEFAULTSTATEINEVENT_OFFSET UNITYSDK_OFFSET(0x1DDEAB40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_1_OFFSET UNITYSDK_OFFSET(0x1DDEBA40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_OFFSET UNITYSDK_OFFSET(0x1DDEB990)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEFROMOBJECTINTOEVENT_OFFSET UNITYSDK_OFFSET(0x1DDE9B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1DDE9C30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions_TypeDefinitionIndex = 31607;

	class InputControlExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsPressed(::UnityEngine::InputSystem::InputControl* control, ::System::Single buttonPressPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISPRESSED_OFFSET))(control, buttonPressPoint);
		}

		static ::System::Boolean IsActuated(::UnityEngine::InputSystem::InputControl* control, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ISACTUATED_OFFSET))(control, threshold);
		}

		static ::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Object*(*)(::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEASOBJECT_OFFSET))(control);
		}

		static ::System::Void ReadValueIntoBuffer(::UnityEngine::InputSystem::InputControl* control, ::System::Void* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEINTOBUFFER_OFFSET))(control, buffer, bufferSize);
		}

		static ::System::Object* ReadDefaultValueAsObject(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Object*(*)(::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READDEFAULTVALUEASOBJECT_OFFSET))(control);
		}

		static ::System::Object* ReadValueFromEventAsObject(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent)
		{
			return ((::System::Object*(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_READVALUEFROMEVENTASOBJECT_OFFSET))(control, inputEvent);
		}

		static ::System::Void WriteValueFromObjectIntoEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Object* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEFROMOBJECTINTOEVENT_OFFSET))(control, eventPtr, value);
		}

		static ::System::Void WriteValueIntoState(::UnityEngine::InputSystem::InputControl* control, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_WRITEVALUEINTOSTATE_OFFSET))(control, statePtr);
		}

		static ::System::Void CopyState(::UnityEngine::InputSystem::InputDevice* device, ::System::Void* buffer, ::System::Int32 bufferSizeInBytes)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COPYSTATE_OFFSET))(device, buffer, bufferSizeInBytes);
		}

		static ::System::Boolean CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_OFFSET))(control);
		}

		static ::System::Boolean CheckStateIsAtDefault_1(::UnityEngine::InputSystem::InputControl* control, ::System::Void* statePtr, ::System::Void* maskPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULT_1_OFFSET))(control, statePtr, maskPtr);
		}

		static ::System::Boolean CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_OFFSET))(control);
		}

		static ::System::Boolean CheckStateIsAtDefaultIgnoringNoise_1(::UnityEngine::InputSystem::InputControl* control, ::System::Void* statePtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CHECKSTATEISATDEFAULTIGNORINGNOISE_1_OFFSET))(control, statePtr);
		}

		static ::System::Boolean CompareStateIgnoringNoise(::UnityEngine::InputSystem::InputControl* control, ::System::Void* statePtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATEIGNORINGNOISE_OFFSET))(control, statePtr);
		}

		static ::System::Boolean CompareState(::UnityEngine::InputSystem::InputControl* control, ::System::Void* firstStatePtr, ::System::Void* secondStatePtr, ::System::Void* maskPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_OFFSET))(control, firstStatePtr, secondStatePtr, maskPtr);
		}

		static ::System::Boolean CompareState_1(::UnityEngine::InputSystem::InputControl* control, ::System::Void* statePtr, ::System::Void* maskPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_COMPARESTATE_1_OFFSET))(control, statePtr, maskPtr);
		}

		static ::System::Boolean HasValueChangeInState(::UnityEngine::InputSystem::InputControl* control, ::System::Void* statePtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINSTATE_OFFSET))(control, statePtr);
		}

		static ::System::Boolean HasValueChangeInEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASVALUECHANGEINEVENT_OFFSET))(control, eventPtr);
		}

		static ::System::Void* GetStatePtrFromStateEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void*(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENT_OFFSET))(control, eventPtr);
		}

		static ::System::Void* GetStatePtrFromStateEventUnchecked(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::Utilities::FourCC eventType)
		{
			return ((::System::Void*(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETSTATEPTRFROMSTATEEVENTUNCHECKED_OFFSET))(control, eventPtr, eventType);
		}

		static ::System::Boolean ResetToDefaultStateInEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_RESETTODEFAULTSTATEINEVENT_OFFSET))(control, eventPtr);
		}

		static ::System::Void AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<::System::Single>* control, ::System::Void* currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr newState)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl_1<::System::Single>*, ::System::Void*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_OFFSET))(control, currentStatePtr, newState);
		}

		static ::System::Void AccumulateValueInEvent_1(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>* control, ::System::Void* currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr newState)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*, ::System::Void*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ACCUMULATEVALUEINEVENT_1_OFFSET))(control, currentStatePtr, newState);
		}

		static ::System::String* BuildPath(::UnityEngine::InputSystem::InputControl* control, ::System::String* deviceLayout, ::System::Text::StringBuilder* builder)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_BUILDPATH_OFFSET))(control, deviceLayout, builder);
		}

		static ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection EnumerateControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate flags, ::UnityEngine::InputSystem::InputDevice* device, ::System::Single magnitudeThreshold)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate, ::UnityEngine::InputSystem::InputDevice*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECONTROLS_OFFSET))(eventPtr, flags, device, magnitudeThreshold);
		}

		static ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection EnumerateChangedControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device, ::System::Single magnitudeThreshold)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_ENUMERATECHANGEDCONTROLS_OFFSET))(eventPtr, device, magnitudeThreshold);
		}

		static ::System::Boolean HasButtonPress(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Single magnitude, ::System::Boolean buttonControlsOnly)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_HASBUTTONPRESS_OFFSET))(eventPtr, magnitude, buttonControlsOnly);
		}

		static ::UnityEngine::InputSystem::InputControl* GetFirstButtonPressOrNull(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Single magnitude, ::System::Boolean buttonControlsOnly)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETFIRSTBUTTONPRESSORNULL_OFFSET))(eventPtr, magnitude, buttonControlsOnly);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* GetAllButtonPresses(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Single magnitude, ::System::Boolean buttonControlsOnly)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_GETALLBUTTONPRESSES_OFFSET))(eventPtr, magnitude, buttonControlsOnly);
		}

		static ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder Setup(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_OFFSET))(control);
		}

		static ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder Setup_1(::UnityEngine::InputSystem::InputDevice* device, ::System::Int32 controlCount, ::System::Int32 usageCount, ::System::Int32 aliasCount)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_SETUP_1_OFFSET))(device, controlCount, usageCount, aliasCount);
		}
	};
}
