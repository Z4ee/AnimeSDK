#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/IntegratedSubsystem_1.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::XR { class XRDisplaySubsystemDescriptor; }

#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INVOKEDISPLAYFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C446120)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C446180)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystem_TypeDefinitionIndex = 25163;

	class XRDisplaySubsystem : public ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet_displayFocusChanged()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(XRDisplaySubsystem_TypeDefinitionIndex)->GetStaticField(0x1EAF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void InvokeDisplayFocusChanged(::System::Boolean focus)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INVOKEDISPLAYFOCUSCHANGED_OFFSET))(focus);
		}
	};
}
