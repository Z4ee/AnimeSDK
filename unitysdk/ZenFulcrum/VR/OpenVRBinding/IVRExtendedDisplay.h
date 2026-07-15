#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRExtendedDisplay__GetDXGIOutputInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRExtendedDisplay__GetEyeOutputViewport; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRExtendedDisplay__GetWindowBounds; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRExtendedDisplay_TypeDefinitionIndex = 36779;

	struct alignas(8) IVRExtendedDisplay
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetWindowBounds* GetWindowBounds; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetEyeOutputViewport* GetEyeOutputViewport; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetDXGIOutputInfo* GetDXGIOutputInfo; // 0x20
	};
}
