#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_AT_OFFSET UNITYSDK_OFFSET(0xA13A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_DONTRESET_OFFSET UNITYSDK_OFFSET(0xA13BF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0xA09ED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x246290)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_ISBUTTON_OFFSET UNITYSDK_OFFSET(0xA13C50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_ISNOISY_OFFSET UNITYSDK_OFFSET(0xA09DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_ISSYNTHETIC_OFFSET UNITYSDK_OFFSET(0xA13BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHALIASES_OFFSET UNITYSDK_OFFSET(0xA13AE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHCHILDREN_OFFSET UNITYSDK_OFFSET(0xA09D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0xA13B10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA09CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHLAYOUT_OFFSET UNITYSDK_OFFSET(0xA09D50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHMINANDMAX_OFFSET UNITYSDK_OFFSET(0xA13B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHNAME_OFFSET UNITYSDK_OFFSET(0xA09C70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHPARENT_OFFSET UNITYSDK_OFFSET(0xA13A90)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHSHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA09D00)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHSTATEBLOCK_OFFSET UNITYSDK_OFFSET(0xA09DB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHUSAGES_OFFSET UNITYSDK_OFFSET(0xA13AB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions_ControlBuilder_TypeDefinitionIndex = 31611;

	struct alignas(8) InputControlExtensions_ControlBuilder
	{
		::UnityEngine::InputSystem::InputControl* _control_k__BackingField; // 0x10

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_control(::UnityEngine::InputSystem::InputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_SET_CONTROL_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder At(::UnityEngine::InputSystem::InputDevice* device, ::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_AT_OFFSET))(this, device, index);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithParent(::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHPARENT_OFFSET))(this, parent);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithName(::System::String* name)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHNAME_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithDisplayName(::System::String* displayName)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHDISPLAYNAME_OFFSET))(this, displayName);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithShortDisplayName(::System::String* shortDisplayName)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHSHORTDISPLAYNAME_OFFSET))(this, shortDisplayName);
		}

		/*
		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithLayout(::UnityEngine::InputSystem::Utilities::InternedString layout)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHLAYOUT_OFFSET))(this, layout);
		}
		*/

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithUsages(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHUSAGES_OFFSET))(this, startIndex, count);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithAliases(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHALIASES_OFFSET))(this, startIndex, count);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithChildren(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHCHILDREN_OFFSET))(this, startIndex, count);
		}

		/*
		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputStateBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHSTATEBLOCK_OFFSET))(this, stateBlock);
		}
		*/

		/*
		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHDEFAULTSTATE_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder WithMinAndMax(::UnityEngine::InputSystem::Utilities::PrimitiveValue min, ::UnityEngine::InputSystem::Utilities::PrimitiveValue max)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_WITHMINANDMAX_OFFSET))(this, min, max);
		}
		*/

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder IsNoisy(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_ISNOISY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder IsSynthetic(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_ISSYNTHETIC_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder DontReset(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_DONTRESET_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder IsButton(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_ISBUTTON_OFFSET))(this, value);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_CONTROLBUILDER_FINISH_OFFSET))(this);
		}
	};
}
