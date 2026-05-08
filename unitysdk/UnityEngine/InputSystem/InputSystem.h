#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlLayoutChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlList_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceMatcher.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventListener.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputMetrics.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Version; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class IObservable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputManager; }
namespace UnityEngine::InputSystem { class InputRemoting; }
namespace UnityEngine::InputSystem { class InputSettings; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceFindControlLayoutDelegate; }
namespace UnityEngine::InputSystem::LowLevel { class IInputRuntime; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommandDelegate; }

#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_1_OFFSET UNITYSDK_OFFSET(0x1B4EA770)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B4EA6D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_1_OFFSET UNITYSDK_OFFSET(0x1B4E9400)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_2_OFFSET UNITYSDK_OFFSET(0x1B4E9580)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9310)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4EC160)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4EBAD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4EB810)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1B4E8840)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x1B4E8BA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E8F00)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4E7170)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4EC000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEALLENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4EC710)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ENABLEDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9C60)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x1B4EAAB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROL_OFFSET UNITYSDK_OFFSET(0x1B4EA950)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FLUSHDISCONNECTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1B4E96C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICEBYID_OFFSET UNITYSDK_OFFSET(0x1B4E9A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_1_OFFSET UNITYSDK_OFFSET(0x1B4E97E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9760)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETNAMEOFBASELAYOUT_OFFSET UNITYSDK_OFFSET(0x1B4E7ED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_1_OFFSET UNITYSDK_OFFSET(0x1B4E9BE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1B4E9AF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1B4E8700)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DISCONNECTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1B4E87A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ISPROCESSINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1B4EAB30)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_METRICS_OFFSET UNITYSDK_OFFSET(0x1B4EC970)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONANYBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x1B4EABD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1B4EABB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1B4E9200)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_REMOTING_OFFSET UNITYSDK_OFFSET(0x1B4EC860)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1B4EB790)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B4EC8C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_INITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x1B4ECA30)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ISFIRSTLAYOUTBASEDONSECOND_OFFSET UNITYSDK_OFFSET(0x1B4E8020)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_1_OFFSET UNITYSDK_OFFSET(0x1B4EC7F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4EC720)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4EC470)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTSBASEDON_OFFSET UNITYSDK_OFFSET(0x1B4E7CD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTS_OFFSET UNITYSDK_OFFSET(0x1B4E7C00)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTPROCESSORS_OFFSET UNITYSDK_OFFSET(0x1B4E8670)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LOADLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B4E7DF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B4E9F80)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PERFORMDEFAULTPLUGININITIALIZATION_OFFSET UNITYSDK_OFFSET(0x1B4ECE20)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUECONFIGCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1B4EAF10)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x1B4EADC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUETEXTEVENT_OFFSET UNITYSDK_OFFSET(0x1B4EB1E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERBINDINGCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x1B4EC500)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B4EC260)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTBUILDER_OFFSET UNITYSDK_OFFSET(0x1B4E78E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTMATCHER_OFFSET UNITYSDK_OFFSET(0x1B4E7850)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B4E77C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_1_OFFSET UNITYSDK_OFFSET(0x1B4E7650)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B4E7470)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1B4E81D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_1_OFFSET UNITYSDK_OFFSET(0x1B4EA8B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B4EA810)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9630)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVELAYOUT_OFFSET UNITYSDK_OFFSET(0x1B4E7AD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4EC1E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4EBC50)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4EB950)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1B4E89F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x1B4E8D50)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9080)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4E72F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4EC0B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B4EA350)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B4EA160)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x1B4ECD90)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4ECEA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_1_OFFSET UNITYSDK_OFFSET(0x1B4EA630)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B4EA540)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1B4EABC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1B4E9280)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1B4EBDD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYFINDMATCHINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B4E7B50)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETBINDINGCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x1B4EC650)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B4EC3B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1B4E85B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYRESETDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9EF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYSYNCDEVICE_OFFSET UNITYSDK_OFFSET(0x1B4E9D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1B4EB5D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B4EB4B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4ECA20)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSystem_TypeDefinitionIndex = 28941;

	class InputSystem : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputRemoting** StaticGet_s_Remote()
		{
			return (::UnityEngine::InputSystem::InputRemoting**)Il2CppClass::FromTypeDefinitionIndex(InputSystem_TypeDefinitionIndex)->GetStaticField(0x22690);
		}
		static ::UnityEngine::InputSystem::InputManager** StaticGet_s_Manager()
		{
			return (::UnityEngine::InputSystem::InputManager**)Il2CppClass::FromTypeDefinitionIndex(InputSystem_TypeDefinitionIndex)->GetStaticField(0x22698);
		}
		// static const ::System::String* kAssemblyVersion; // 0x0
		// static const ::System::String* kDocUrl; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void add_onLayoutChange(::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONLAYOUTCHANGE_OFFSET))(value);
		}

		static ::System::Void remove_onLayoutChange(::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONLAYOUTCHANGE_OFFSET))(value);
		}

		static ::System::Void RegisterLayout(::System::Type* type, ::System::String* name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET))(type, name, matches);
		}

		static ::System::Void RegisterLayout_1(::System::String* json, ::System::String* name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_1_OFFSET))(json, name, matches);
		}

		static ::System::Void RegisterLayoutOverride(::System::String* json, ::System::String* name)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTOVERRIDE_OFFSET))(json, name);
		}

		static ::System::Void RegisterLayoutMatcher(::System::String* layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTMATCHER_OFFSET))(layoutName, matcher);
		}

		static ::System::Void RegisterLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* buildMethod, ::System::String* name, ::System::String* baseLayout, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches)
		{
			return ((::System::Void(*)(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*, ::System::String*, ::System::String*, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTBUILDER_OFFSET))(buildMethod, name, baseLayout, matches);
		}

		static ::System::Void RemoveLayout(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVELAYOUT_OFFSET))(name);
		}

		static ::System::String* TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYFINDMATCHINGLAYOUT_OFFSET))(deviceDescription);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* ListLayouts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTS_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* ListLayoutsBasedOn(::System::String* baseLayout)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTSBASEDON_OFFSET))(baseLayout);
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout(::System::String* name)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LOADLAYOUT_OFFSET))(name);
		}

		static ::System::String* GetNameOfBaseLayout(::System::String* layoutName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETNAMEOFBASELAYOUT_OFFSET))(layoutName);
		}

		static ::System::Boolean IsFirstLayoutBasedOnSecond(::System::String* firstLayoutName, ::System::String* secondLayoutName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ISFIRSTLAYOUTBASEDONSECOND_OFFSET))(firstLayoutName, secondLayoutName);
		}

		static ::System::Void RegisterProcessor(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPROCESSOR_OFFSET))(type, name);
		}

		static ::System::Type* TryGetProcessor(::System::String* name)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETPROCESSOR_OFFSET))(name);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* ListProcessors()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTPROCESSORS_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DEVICES_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_disconnectedDevices()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DISCONNECTEDDEVICES_OFFSET))();
		}

		static ::System::Void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECHANGE_OFFSET))(value);
		}

		static ::System::Void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECHANGE_OFFSET))(value);
		}

		static ::System::Void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECOMMAND_OFFSET))(value);
		}

		static ::System::Void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECOMMAND_OFFSET))(value);
		}

		static ::System::Void add_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONFINDLAYOUTFORDEVICE_OFFSET))(value);
		}

		static ::System::Void remove_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONFINDLAYOUTFORDEVICE_OFFSET))(value);
		}

		static ::System::Single get_pollingFrequency()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_POLLINGFREQUENCY_OFFSET))();
		}

		static ::System::Void set_pollingFrequency(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_POLLINGFREQUENCY_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::InputDevice* AddDevice(::System::String* layout, ::System::String* name, ::System::String* variants)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET))(layout, name, variants);
		}

		static ::UnityEngine::InputSystem::InputDevice* AddDevice_1(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_1_OFFSET))(description);
		}

		static ::System::Void AddDevice_2(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_2_OFFSET))(device);
		}

		static ::System::Void RemoveDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICE_OFFSET))(device);
		}

		static ::System::Void FlushDisconnectedDevices()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FLUSHDISCONNECTEDDEVICES_OFFSET))();
		}

		static ::UnityEngine::InputSystem::InputDevice* GetDevice(::System::String* nameOrLayout)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET))(nameOrLayout);
		}

		static ::UnityEngine::InputSystem::InputDevice* GetDevice_1(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_1_OFFSET))(type);
		}

		static ::UnityEngine::InputSystem::InputDevice* GetDeviceById(::System::Int32 deviceId)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICEBYID_OFFSET))(deviceId);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* GetUnsupportedDevices()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_OFFSET))();
		}

		static ::System::Int32 GetUnsupportedDevices_1(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_1_OFFSET))(descriptions);
		}

		static ::System::Void EnableDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ENABLEDEVICE_OFFSET))(device);
		}

		static ::System::Void DisableDevice(::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean keepSendingEvents)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEDEVICE_OFFSET))(device, keepSendingEvents);
		}

		static ::System::Boolean TrySyncDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYSYNCDEVICE_OFFSET))(device);
		}

		static ::System::Void ResetDevice(::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean alsoResetDontResetControls)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETDEVICE_OFFSET))(device, alsoResetDontResetControls);
		}

		static ::System::Boolean TryResetDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYRESETDEVICE_OFFSET))(device);
		}

		static ::System::Void PauseHaptics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PAUSEHAPTICS_OFFSET))();
		}

		static ::System::Void ResumeHaptics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESUMEHAPTICS_OFFSET))();
		}

		static ::System::Void ResetHaptics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETHAPTICS_OFFSET))();
		}

		static ::System::Void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::System::String* usage)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_OFFSET))(device, usage);
		}

		static ::System::Void SetDeviceUsage_1(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_1_OFFSET))(device, usage);
		}

		static ::System::Void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::System::String* usage)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_OFFSET))(device, usage);
		}

		static ::System::Void AddDeviceUsage_1(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_1_OFFSET))(device, usage);
		}

		static ::System::Void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::System::String* usage)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_OFFSET))(device, usage);
		}

		static ::System::Void RemoveDeviceUsage_1(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_1_OFFSET))(device, usage);
		}

		static ::UnityEngine::InputSystem::InputControl* FindControl(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROL_OFFSET))(path);
		}

		static ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> FindControls(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET))(path);
		}

		static ::System::Boolean get_isProcessingEvents()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ISPROCESSINGEVENTS_OFFSET))();
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEventListener get_onEvent()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventListener(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONEVENT_OFFSET))();
		}

		static ::System::Void set_onEvent(::UnityEngine::InputSystem::LowLevel::InputEventListener value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventListener))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_ONEVENT_OFFSET))(value);
		}

		static ::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* get_onAnyButtonPress()
		{
			return ((::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONANYBUTTONPRESS_OFFSET))();
		}

		static ::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEEVENT_OFFSET))(eventPtr);
		}

		static ::System::Void QueueConfigChangeEvent(::UnityEngine::InputSystem::InputDevice* device, ::System::Double time)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUECONFIGCHANGEEVENT_OFFSET))(device, time);
		}

		static ::System::Void QueueTextEvent(::UnityEngine::InputSystem::InputDevice* device, ::System::Char character, ::System::Double time)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Char, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUETEXTEVENT_OFFSET))(device, character, time);
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_OFFSET))();
		}

		static ::System::Void Update_1(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_1_OFFSET))(updateType);
		}

		static ::System::Void add_onBeforeUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONBEFOREUPDATE_OFFSET))(value);
		}

		static ::System::Void remove_onBeforeUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONBEFOREUPDATE_OFFSET))(value);
		}

		static ::System::Void add_onAfterUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONAFTERUPDATE_OFFSET))(value);
		}

		static ::System::Void remove_onAfterUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONAFTERUPDATE_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::InputSettings* get_settings()
		{
			return ((::UnityEngine::InputSystem::InputSettings*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_SETTINGS_OFFSET))();
		}

		static ::System::Void set_settings(::UnityEngine::InputSystem::InputSettings* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_SETTINGS_OFFSET))(value);
		}

		static ::System::Void add_onSettingsChange(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONSETTINGSCHANGE_OFFSET))(value);
		}

		static ::System::Void remove_onSettingsChange(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONSETTINGSCHANGE_OFFSET))(value);
		}

		static ::System::Void add_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONACTIONCHANGE_OFFSET))(value);
		}

		static ::System::Void remove_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONACTIONCHANGE_OFFSET))(value);
		}

		static ::System::Void RegisterInteraction(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERINTERACTION_OFFSET))(type, name);
		}

		static ::System::Type* TryGetInteraction(::System::String* name)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETINTERACTION_OFFSET))(name);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* ListInteractions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTINTERACTIONS_OFFSET))();
		}

		static ::System::Void RegisterBindingComposite(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERBINDINGCOMPOSITE_OFFSET))(type, name);
		}

		static ::System::Type* TryGetBindingComposite(::System::String* name)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETBINDINGCOMPOSITE_OFFSET))(name);
		}

		static ::System::Void DisableAllEnabledActions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEALLENABLEDACTIONS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* ListEnabledActions()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_OFFSET))();
		}

		static ::System::Int32 ListEnabledActions_1(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* actions)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_1_OFFSET))(actions);
		}

		static ::UnityEngine::InputSystem::InputRemoting* get_remoting()
		{
			return ((::UnityEngine::InputSystem::InputRemoting*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_REMOTING_OFFSET))();
		}

		static ::System::Version* get_version()
		{
			return ((::System::Version*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_VERSION_OFFSET))();
		}

		static ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputMetrics(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_METRICS_OFFSET))();
		}

		static ::System::Void RunInitializeInPlayer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALIZEINPLAYER_OFFSET))();
		}

		static ::System::Void InitializeInPlayer(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_INITIALIZEINPLAYER_OFFSET))(runtime, settings);
		}

		static ::System::Void RunInitialUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALUPDATE_OFFSET))();
		}

		static ::System::Void PerformDefaultPluginInitialization()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PERFORMDEFAULTPLUGININITIALIZATION_OFFSET))();
		}
	};
}
