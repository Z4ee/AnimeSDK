#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDElementFlags.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDReportType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_UsagePage.h"

namespace System { class String; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout_Builder; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_ADDCHILDCONTROLS_OFFSET UNITYSDK_OFFSET(0x880920)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEAXISNORMALIZATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8807F0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x880860)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x880690)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEFORMAT_OFFSET UNITYSDK_OFFSET(0x8806E0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINELAYOUT_OFFSET UNITYSDK_OFFSET(0x8806D0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINENAME_OFFSET UNITYSDK_OFFSET(0x880680)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8807E0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x880800)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEUSAGES_OFFSET UNITYSDK_OFFSET(0x8807D0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_HASNULLSTATE_OFFSET UNITYSDK_OFFSET(0x8804C0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_HASPREFERREDSTATE_OFFSET UNITYSDK_OFFSET(0x8804D0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8804E0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x880510)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISNONLINEAR_OFFSET UNITYSDK_OFFSET(0x8804F0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISRELATIVE_OFFSET UNITYSDK_OFFSET(0x880500)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x880530)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISWRAPPING_OFFSET UNITYSDK_OFFSET(0x880520)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_MAXFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x8805D0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_MINFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x880540)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_ISUSABLEELEMENT_OFFSET UNITYSDK_OFFSET(0x8806A0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_IS_OFFSET UNITYSDK_OFFSET(0x880670)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDElementDescriptor_TypeDefinitionIndex = 29136;

	struct alignas(4) HID_HIDElementDescriptor
	{
		::System::Int32 usage; // 0x10
		::UnityEngine::InputSystem::HID::HID_UsagePage usagePage; // 0x14
		::System::Int32 unit; // 0x18
		::System::Int32 unitExponent; // 0x1C
		::System::Int32 logicalMin; // 0x20
		::System::Int32 logicalMax; // 0x24
		::System::Int32 physicalMin; // 0x28
		::System::Int32 physicalMax; // 0x2C
		::UnityEngine::InputSystem::HID::HID_HIDReportType reportType; // 0x30
		::System::Int32 collectionIndex; // 0x34
		::System::Int32 reportId; // 0x38
		::System::Int32 reportSizeInBits; // 0x3C
		::System::Int32 reportOffsetInBits; // 0x40
		::UnityEngine::InputSystem::HID::HID_HIDElementFlags flags; // 0x44
		::System::Nullable_1<::System::Int32> usageMin; // 0x48
		::System::Nullable_1<::System::Int32> usageMax; // 0x50

		::System::Boolean get_hasNullState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_HASNULLSTATE_OFFSET))(this);
		}

		::System::Boolean get_hasPreferredState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_HASPREFERREDSTATE_OFFSET))(this);
		}

		::System::Boolean get_isArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_isNonLinear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISNONLINEAR_OFFSET))(this);
		}

		::System::Boolean get_isRelative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISRELATIVE_OFFSET))(this);
		}

		::System::Boolean get_isConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean get_isWrapping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISWRAPPING_OFFSET))(this);
		}

		::System::Boolean get_isSigned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_ISSIGNED_OFFSET))(this);
		}

		::System::Single get_minFloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_MINFLOATVALUE_OFFSET))(this);
		}

		::System::Single get_maxFloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_GET_MAXFLOATVALUE_OFFSET))(this);
		}

		::System::Boolean Is(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, ::System::Int32 usage)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_UsagePage, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_IS_OFFSET))(this, usagePage, usage);
		}

		::System::String* DetermineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINENAME_OFFSET))(this);
		}

		::System::String* DetermineDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEDISPLAYNAME_OFFSET))(this);
		}

		::System::Boolean IsUsableElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_ISUSABLEELEMENT_OFFSET))(this);
		}

		::System::String* DetermineLayout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINELAYOUT_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC DetermineFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEFORMAT_OFFSET))(this);
		}
		*/

		/*
		::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>* DetermineUsages()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEUSAGES_OFFSET))(this);
		}
		*/

		::System::String* DetermineParameters()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEPARAMETERS_OFFSET))(this);
		}

		::System::String* DetermineAxisNormalizationParameters()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEAXISNORMALIZATIONPARAMETERS_OFFSET))(this);
		}

		::System::String* DetermineProcessors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEPROCESSORS_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::PrimitiveValue DetermineDefaultState()
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_DETERMINEDEFAULTSTATE_OFFSET))(this);
		}
		*/

		::System::Void AddChildControls(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor& element, ::System::String* controlName, ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*& builder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor&, ::System::String*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDELEMENTDESCRIPTOR_ADDCHILDCONTROLS_OFFSET))(this, element, controlName, builder);
		}
	};
}
