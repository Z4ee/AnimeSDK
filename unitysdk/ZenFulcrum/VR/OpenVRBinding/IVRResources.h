#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRResources__GetResourceFullPath; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRResources__LoadSharedResource; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRResources_TypeDefinitionIndex = 37027;

	struct alignas(8) IVRResources
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRResources__LoadSharedResource* LoadSharedResource; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRResources__GetResourceFullPath* GetResourceFullPath; // 0x18
	};
}
