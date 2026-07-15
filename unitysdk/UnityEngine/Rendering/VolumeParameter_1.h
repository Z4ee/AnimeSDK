#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering { template <typename T> class VolumeParameter_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeParameter_1_TypeDefinitionIndex = 34186;

	template <typename T>
	class VolumeParameter_1 : public ::UnityEngine::Rendering::VolumeParameter
	{
	public:
		T m_Value; // 0x0
	};
}
