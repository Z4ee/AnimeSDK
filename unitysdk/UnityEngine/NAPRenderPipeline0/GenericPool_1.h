#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GenericPool_1_TypeDefinitionIndex = 5972;

	template <typename T>
	class GenericPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<T>** StaticGet_s_Pool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GenericPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
