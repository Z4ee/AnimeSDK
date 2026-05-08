#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngineInternal::Input { class NativeUpdateCallback; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_ALLOCATEDEVICEID_OFFSET UNITYSDK_OFFSET(0x1C552430)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIMEOFFSETTOREALTIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x1C552420)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1C552410)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_ONDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1C551D80)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_IOCTL_OFFSET UNITYSDK_OFFSET(0x1C552450)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1C551E70)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1C5522F0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYUPDATE_OFFSET UNITYSDK_OFFSET(0x1C551F00)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_QUEUEINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1C552440)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SETPOLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1C552460)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_HASDEVICEDISCOVEREDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C551E50)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_ONDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1C551DE0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0x1C552380)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C552470)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C551E60)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C552480)

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputSystem_TypeDefinitionIndex = 24834;

	class NativeInputSystem : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet_s_OnDeviceDiscoveredCallback()
		{
			return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x1E870);
		}
		static ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean>** StaticGet_onShouldRunUpdate()
		{
			return (::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x1E878);
		}
		static ::UnityEngineInternal::Input::NativeUpdateCallback** StaticGet_onUpdate()
		{
			return (::UnityEngineInternal::Input::NativeUpdateCallback**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x1E880);
		}
		static ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>** StaticGet_onBeforeUpdate()
		{
			return (::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x1E888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Action_2<::System::Int32, ::System::String*>* get_onDeviceDiscovered()
		{
			return ((::System::Action_2<::System::Int32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_ONDEVICEDISCOVERED_OFFSET))();
		}

		static ::System::Void set_onDeviceDiscovered(::System::Action_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_ONDEVICEDISCOVERED_OFFSET))(value);
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

		static ::System::Double get_currentTime()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIME_OFFSET))();
		}

		static ::System::Double get_currentTimeOffsetToRealtimeSinceStartup()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_GET_CURRENTTIMEOFFSETTOREALTIMESINCESTARTUP_OFFSET))();
		}

		static ::System::Int32 AllocateDeviceId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_ALLOCATEDEVICEID_OFFSET))();
		}

		static ::System::Void QueueInputEvent(::System::IntPtr inputEvent)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_QUEUEINPUTEVENT_OFFSET))(inputEvent);
		}

		static ::System::Int64 IOCTL(::System::Int32 deviceId, ::System::Int32 code, ::System::IntPtr data, ::System::Int32 sizeInBytes)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_IOCTL_OFFSET))(deviceId, code, data, sizeInBytes);
		}

		static ::System::Void SetPollingFrequency(::System::Single hertz)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SETPOLLINGFREQUENCY_OFFSET))(hertz);
		}

		static ::System::Void Update(::UnityEngineInternal::Input::NativeInputUpdateType updateType)
		{
			return ((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_UPDATE_OFFSET))(updateType);
		}
	};
}
