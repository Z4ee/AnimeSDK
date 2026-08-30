#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngineInternal::Input { class NativeUpdateCallback; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1F012860)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1F012950)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYUPDATE_OFFSET UNITYSDK_OFFSET(0x1F0128C0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_HASDEVICEDISCOVEREDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F012850)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0x1F0129C0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F012840)

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputSystem_TypeDefinitionIndex = 5787;

	class NativeInputSystem : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet_s_OnDeviceDiscoveredCallback()
		{
			return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x380);
		}
		static ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>** StaticGet_onBeforeUpdate()
		{
			return (::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x388);
		}
		static ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean>** StaticGet_onShouldRunUpdate()
		{
			return (::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x390);
		}
		static ::UnityEngineInternal::Input::NativeUpdateCallback** StaticGet_onUpdate()
		{
			return (::UnityEngineInternal::Input::NativeUpdateCallback**)Il2CppClass::FromTypeDefinitionIndex(NativeInputSystem_TypeDefinitionIndex)->GetStaticField(0x398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType a1)
		{
			return ((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYBEFOREUPDATE_OFFSET))(a1);
		}

		static ::System::Void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYUPDATE_OFFSET))(a1, a2);
		}

		static ::System::Void NotifyDeviceDiscovered(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_NOTIFYDEVICEDISCOVERED_OFFSET))(a1, a2);
		}

		static ::System::Void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SHOULDRUNUPDATE_OFFSET))(a1, a2);
		}

		static ::System::Void set_hasDeviceDiscoveredCallback(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEINPUTSYSTEM_SET_HASDEVICEDISCOVEREDCALLBACK_OFFSET))(a1);
		}
	};
}
