#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__GetBool; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__GetFloat; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__GetInt32; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__GetSettingsErrorNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__GetString; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__RemoveKeyInSection; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__RemoveSection; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__SetBool; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__SetFloat; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__SetInt32; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__SetString; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSettings__Sync; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings_TypeDefinitionIndex = 37006;

	struct alignas(8) IVRSettings
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetSettingsErrorNameFromEnum* GetSettingsErrorNameFromEnum; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__Sync* Sync; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetBool* SetBool; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetInt32* SetInt32; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetFloat* SetFloat; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetString* SetString; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetBool* GetBool; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetInt32* GetInt32; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetFloat* GetFloat; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetString* GetString; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__RemoveSection* RemoveSection; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings__RemoveKeyInSection* RemoveKeyInSection; // 0x68
	};
}
