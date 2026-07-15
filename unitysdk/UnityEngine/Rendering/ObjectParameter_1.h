#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine::Rendering { class VolumeParameter; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ObjectParameter_1_TypeDefinitionIndex = 34221;

	template <typename T>
	class ObjectParameter_1 : public ::UnityEngine::Rendering::VolumeParameter_1<T>
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* _parameters_k__BackingField; // 0x0
	};
}
