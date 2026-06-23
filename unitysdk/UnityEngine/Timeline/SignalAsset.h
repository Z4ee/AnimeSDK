#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E5659A0)
#define UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E565B00)
#define UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E565A50)
#define UNITYENGINE_TIMELINE_SIGNALASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E565B70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalAsset_TypeDefinitionIndex = 32377;

	class SignalAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Action_1<::UnityEngine::Timeline::SignalAsset*>** StaticGet_OnEnableCallback()
		{
			return (::System::Action_1<::UnityEngine::Timeline::SignalAsset*>**)Il2CppClass::FromTypeDefinitionIndex(SignalAsset_TypeDefinitionIndex)->GetStaticField(0x26C60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET))(value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET))(this);
		}
	};
}
