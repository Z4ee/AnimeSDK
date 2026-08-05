#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATELOCAL_GETUSAGE_OFFSET UNITYSDK_OFFSET(0xA37B60)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATELOCAL_RESET_OFFSET UNITYSDK_OFFSET(0x1E7744E0)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATELOCAL_SETUSAGE_OFFSET UNITYSDK_OFFSET(0xA37B50)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDParser_HIDItemStateLocal_TypeDefinitionIndex = 32424;

	struct alignas(8) HIDParser_HIDItemStateLocal
	{
		::System::Nullable_1<::System::Int32> usage; // 0x10
		::System::Nullable_1<::System::Int32> usageMinimum; // 0x18
		::System::Nullable_1<::System::Int32> usageMaximum; // 0x20
		::System::Nullable_1<::System::Int32> designatorIndex; // 0x28
		::System::Nullable_1<::System::Int32> designatorMinimum; // 0x30
		::System::Nullable_1<::System::Int32> designatorMaximum; // 0x38
		::System::Nullable_1<::System::Int32> stringIndex; // 0x40
		::System::Nullable_1<::System::Int32> stringMinimum; // 0x48
		::System::Nullable_1<::System::Int32> stringMaximum; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* usageList; // 0x58

		static ::System::Void Reset(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal& state)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATELOCAL_RESET_OFFSET))(state);
		}

		::System::Void SetUsage(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATELOCAL_SETUSAGE_OFFSET))(this, value);
		}

		::System::Int32 GetUsage(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATELOCAL_GETUSAGE_OFFSET))(this, index);
		}
	};
}
