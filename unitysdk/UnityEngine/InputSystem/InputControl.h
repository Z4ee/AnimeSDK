#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_ControlFlags.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateBlock.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/StateEvent.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/PrimitiveValue.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ADDPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1DD7F020)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_BAKEOFFSETINTOSTATEBLOCKRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1DD7EF90)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALLFINISHSETUPRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1DD7EF00)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x1DD7E5A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x1DD7E890)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1DD7E7F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DD7EC20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x1DD7EA00)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETDEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x1DD7EC70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ALIASES_OFFSET UNITYSDK_OFFSET(0x1DD7E350)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1DD7E2D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CURRENTSTATEPTR_OFFSET UNITYSDK_OFFSET(0x1DD7E850)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEFAULTSTATEPTR_OFFSET UNITYSDK_OFFSET(0x1DD7EDE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1DD7E2B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1DD7E130)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x1DD7EE90)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_HASDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1DD7EEF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x1DD7EE60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISCONFIGUPTODATE_OFFSET UNITYSDK_OFFSET(0x1DD7EC30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISSETUPFINISHED_OFFSET UNITYSDK_OFFSET(0x1DD7EE30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DD7E460)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1DD7E270)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DD7D170)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISEMASKPTR_OFFSET UNITYSDK_OFFSET(0x1DD7EDF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISY_OFFSET UNITYSDK_OFFSET(0x1DD7E390)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1DD7E2C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1DD7E230)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PREVIOUSFRAMESTATEPTR_OFFSET UNITYSDK_OFFSET(0x1DD7ED90)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1DD7E1D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEBLOCK_OFFSET UNITYSDK_OFFSET(0x1DD7E380)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEOFFSETRELATIVETODEVICEROOT_OFFSET UNITYSDK_OFFSET(0x1DD7EE00)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SYNTHETIC_OFFSET UNITYSDK_OFFSET(0x1DD7E430)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USAGES_OFFSET UNITYSDK_OFFSET(0x1DD7E310)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USESSTATEFROMOTHERCONTROL_OFFSET UNITYSDK_OFFSET(0x1DD7EEC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x1DD7E290)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MAKECHILDPATH_OFFSET UNITYSDK_OFFSET(0x1DD7EB60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATIONIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1DD7E190)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x1DD7EC60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1DD7E1C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x1DD7EEA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISBUTTON_OFFSET UNITYSDK_OFFSET(0x1DD7EE70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISCONFIGUPTODATE_OFFSET UNITYSDK_OFFSET(0x1DD7EC40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISSETUPFINISHED_OFFSET UNITYSDK_OFFSET(0x1DD7EE40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_NOISY_OFFSET UNITYSDK_OFFSET(0x1DD7E3A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1DD7E220)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SYNTHETIC_OFFSET UNITYSDK_OFFSET(0x1DD7E440)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_USESSTATEFROMOTHERCONTROL_OFFSET UNITYSDK_OFFSET(0x1DD7EED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_STATEEVENT_FROMUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1DD7E120)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD7E510)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x1DD7E960)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1DD7E8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1DD7E900)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD7EC10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl_TypeDefinitionIndex = 31604;

	class InputControl : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::InternedString m_Variants; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString m_Layout; // 0x20
		::System::String* m_DisplayName; // 0x30
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x38
		::System::String* m_ShortDisplayName; // 0x40
		::UnityEngine::InputSystem::Utilities::InternedString m_Name; // 0x48
		::System::String* m_ShortDisplayNameFromLayout; // 0x58
		::UnityEngine::InputSystem::InputControl* m_Parent; // 0x60
		::System::String* m_DisplayNameFromLayout; // 0x68
		::System::String* m_Path; // 0x70
		::System::Int32 m_AliasStartIndex; // 0x78
		::System::Int32 m_AliasCount; // 0x7C
		::UnityEngine::InputSystem::Utilities::PrimitiveValue m_DefaultState; // 0x80
		::System::Int32 m_ChildStartIndex; // 0x90
		::System::Int32 m_UsageStartIndex; // 0x94
		::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MaxValue; // 0x98
		::System::Int32 m_ChildCount; // 0xA8
		::System::Int32 m_UsageCount; // 0xAC
		::UnityEngine::InputSystem::LowLevel::InputStateBlock m_StateBlock; // 0xB0
		::UnityEngine::InputSystem::InputControl_ControlFlags m_ControlFlags; // 0xC0
		::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MinValue; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::LowLevel::StateEvent* StateEvent_FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::StateEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_STATEEVENT_FROMUNCHECKED_OFFSET))(ptr);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_shortDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SHORTDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_shortDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SHORTDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PATH_OFFSET))(this);
		}

		::System::String* get_layout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_LAYOUT_OFFSET))(this);
		}

		::System::String* get_variants()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_VARIANTS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEVICE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* get_parent()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PARENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_children()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CHILDREN_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USAGES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ALIASES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateBlock get_stateBlock()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateBlock(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEBLOCK_OFFSET))(this);
		}

		::System::Boolean get_noisy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISY_OFFSET))(this);
		}

		::System::Void set_noisy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_NOISY_OFFSET))(this, value);
		}

		::System::Boolean get_synthetic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_SYNTHETIC_OFFSET))(this);
		}

		::System::Void set_synthetic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_SYNTHETIC_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControl* get_Item(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ITEM_OFFSET))(this, path);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TOSTRING_OFFSET))(this);
		}

		::System::String* DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_DEBUGGERDISPLAY_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude_1(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_EVALUATEMAGNITUDE_1_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueFromBufferIntoState(::System::Void* bufferPtr, ::System::Int32 bufferSize, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMBUFFERINTOSTATE_OFFSET))(this, bufferPtr, bufferSize, statePtr);
		}

		::System::Void WriteValueFromObjectIntoState(::System::Object* value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_WRITEVALUEFROMOBJECTINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::UnityEngine::InputSystem::InputControl* TryGetChildControl(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_TRYGETCHILDCONTROL_OFFSET))(this, path);
		}

		::UnityEngine::InputSystem::InputControl* GetChildControl(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETCHILDCONTROL_OFFSET))(this, path);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Void RefreshConfigurationIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATIONIFNEEDED_OFFSET))(this);
		}

		::System::Void RefreshConfiguration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_REFRESHCONFIGURATION_OFFSET))(this);
		}

		::System::Void* get_currentStatePtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_CURRENTSTATEPTR_OFFSET))(this);
		}

		::System::Void* get_previousFrameStatePtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_PREVIOUSFRAMESTATEPTR_OFFSET))(this);
		}

		::System::Void* get_defaultStatePtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DEFAULTSTATEPTR_OFFSET))(this);
		}

		::System::Void* get_noiseMaskPtr()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_NOISEMASKPTR_OFFSET))(this);
		}

		::System::UInt32 get_stateOffsetRelativeToDeviceRoot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_STATEOFFSETRELATIVETODEVICEROOT_OFFSET))(this);
		}

		::System::Boolean get_isSetupFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISSETUPFINISHED_OFFSET))(this);
		}

		::System::Void set_isSetupFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISSETUPFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_isButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISBUTTON_OFFSET))(this);
		}

		::System::Void set_isButton(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISBUTTON_OFFSET))(this, value);
		}

		::System::Boolean get_isConfigUpToDate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_ISCONFIGUPTODATE_OFFSET))(this);
		}

		::System::Void set_isConfigUpToDate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_ISCONFIGUPTODATE_OFFSET))(this, value);
		}

		::System::Boolean get_dontReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_DONTRESET_OFFSET))(this);
		}

		::System::Void set_dontReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_DONTRESET_OFFSET))(this, value);
		}

		::System::Boolean get_usesStateFromOtherControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_USESSTATEFROMOTHERCONTROL_OFFSET))(this);
		}

		::System::Void set_usesStateFromOtherControl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_SET_USESSTATEFROMOTHERCONTROL_OFFSET))(this, value);
		}

		::System::Boolean get_hasDefaultState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GET_HASDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void CallFinishSetupRecursive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_CALLFINISHSETUPRECURSIVE_OFFSET))(this);
		}

		::System::String* MakeChildPath(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_MAKECHILDPATH_OFFSET))(this, path);
		}

		::System::Void BakeOffsetIntoStateBlockRecursive(::System::UInt32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_BAKEOFFSETINTOSTATEBLOCKRECURSIVE_OFFSET))(this, offset);
		}

		::System::Int32 GetDeviceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_GETDEVICEINDEX_OFFSET))(this);
		}

		::System::Void AddProcessor(::System::Object* first)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROL_ADDPROCESSOR_OFFSET))(this, first);
		}
	};
}
