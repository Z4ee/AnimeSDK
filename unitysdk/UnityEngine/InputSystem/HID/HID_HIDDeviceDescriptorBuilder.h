#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_GenericDesktop.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDCollectionDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDElementDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDReportType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_UsagePage.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_1_OFFSET UNITYSDK_OFFSET(0xA65C70)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0xA65C40)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0xA65D10)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_STARTREPORT_OFFSET UNITYSDK_OFFSET(0xA65BF0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_WITHLOGICALMINMAX_OFFSET UNITYSDK_OFFSET(0xA65CF0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_WITHPHYSICALMINMAX_OFFSET UNITYSDK_OFFSET(0xA65CD0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA65BD0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA65BB0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDDeviceDescriptorBuilder_TypeDefinitionIndex = 32415;

	struct alignas(8) HID_HIDDeviceDescriptorBuilder
	{
		::UnityEngine::InputSystem::HID::HID_UsagePage usagePage; // 0x10
		::System::Int32 usage; // 0x14
		::System::Int32 m_CurrentReportId; // 0x18
		::UnityEngine::InputSystem::HID::HID_HIDReportType m_CurrentReportType; // 0x1C
		::System::Int32 m_CurrentReportOffsetInBits; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* m_Elements; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>* m_Collections; // 0x30
		::System::Int32 m_InputReportSize; // 0x38
		::System::Int32 m_OutputReportSize; // 0x3C
		::System::Int32 m_FeatureReportSize; // 0x40

		::System::Void _ctor(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, ::System::Int32 usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_UsagePage, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER__CTOR_OFFSET))(this, usagePage, usage);
		}

		::System::Void _ctor_1(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_GenericDesktop))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER__CTOR_1_OFFSET))(this, usage);
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder StartReport(::UnityEngine::InputSystem::HID::HID_HIDReportType reportType, ::System::Int32 reportId)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_HIDReportType, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_STARTREPORT_OFFSET))(this, reportType, reportId);
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder AddElement(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, ::System::Int32 usage, ::System::Int32 sizeInBits)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_UsagePage, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_OFFSET))(this, usagePage, usage, sizeInBits);
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder AddElement_1(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage, ::System::Int32 sizeInBits)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_GenericDesktop, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_ADDELEMENT_1_OFFSET))(this, usage, sizeInBits);
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder WithPhysicalMinMax(::System::Int32 min, ::System::Int32 max)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_WITHPHYSICALMINMAX_OFFSET))(this, min, max);
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder WithLogicalMinMax(::System::Int32 min, ::System::Int32 max)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_WITHLOGICALMINMAX_OFFSET))(this, min, max);
		}

		/*
		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor Finish()
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTORBUILDER_FINISH_OFFSET))(this);
		}
		*/
	};
}
