#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class VolumeParameter_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeParameter_1_TypeDefinitionIndex = 6048;

	template <typename T>
	class VolumeParameter_1 : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter
	{
	public:
		T m_Value; // 0x0
	};
}
