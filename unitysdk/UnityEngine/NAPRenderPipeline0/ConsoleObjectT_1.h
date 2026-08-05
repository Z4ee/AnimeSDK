#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ConsoleVariable.h"
#include "unitysdk/UnityEngine/ConsoleVariableFlag.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleObjectT_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleObjectT_1_TypeDefinitionIndex = 5691;

	template <typename T>
	class ConsoleObjectT_1 : public ::UnityEngine::ConsoleVariable
	{
	public:
		::System::String* _name_k__BackingField; // 0x0
		::System::Int32 _id_k__BackingField; // 0x0
		T cacheObject; // 0x0
		::System::Int32 cacheID; // 0x0
	};
}
