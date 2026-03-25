#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class PerformDynamicRes; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResolutionHandler___O_TypeDefinitionIndex = 27771;

	class DynamicResolutionHandler___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::PerformDynamicRes** StaticGet__0___DefaultDynamicResMethod()
		{
			return (::UnityEngine::Rendering::PerformDynamicRes**)Il2CppClass::FromTypeDefinitionIndex(DynamicResolutionHandler___O_TypeDefinitionIndex)->GetStaticField(0x1F930);
		}
	};
}
