#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngineInternal::Input { class NativeUpdateCallback; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4C6840)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1A4C6C60)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4C68A0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_HASDEVICEDISCOVEREDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4C6830)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4C6CC0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C6820)

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputSystem_TypeDefinitionIndex = 5430;

	class NativeInputSystem : public ::System::Object
	{
	public:
		static ::UnityEngineInternal::Input::NativeUpdateCallback** StaticGet_onUpdate()
		{
			return (::UnityEngineInternal::Input::NativeUpdateCallback**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x3F0);
		}
		static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet_s_OnDeviceDiscoveredCallback()
		{
			return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x3F8);
		}
		static ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>** StaticGet_onBeforeUpdate()
		{
			return (::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x400);
		}
		static ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean>** StaticGet_onShouldRunUpdate()
		{
			return (::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x408);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType)
		{
			return ((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYBEFOREUPDATE_OFFSET))(updateType);
		}

		static ::System::Void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::System::IntPtr eventBuffer)
		{
			return ((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYUPDATE_OFFSET))(updateType, eventBuffer);
		}

		static ::System::Void NotifyDeviceDiscovered(::System::Int32 deviceId, ::System::String* deviceDescriptor)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYDEVICEDISCOVERED_OFFSET))(deviceId, deviceDescriptor);
		}

		static ::System::Void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::System::Boolean& retval)
		{
			return ((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SHOULDRUNUPDATE_OFFSET))(updateType, retval);
		}

		static ::System::Void set_hasDeviceDiscoveredCallback(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_HASDEVICEDISCOVEREDCALLBACK_OFFSET))(value);
		}
	};
}
