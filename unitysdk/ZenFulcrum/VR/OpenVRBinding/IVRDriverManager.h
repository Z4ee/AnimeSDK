#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRDriverManager__GetDriverCount; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRDriverManager__GetDriverName; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRDriverManager_TypeDefinitionIndex = 37030;

	struct alignas(8) IVRDriverManager
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager__GetDriverCount* GetDriverCount; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager__GetDriverName* GetDriverName; // 0x18
	};
}
