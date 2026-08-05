#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ListPool_1___c; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ListPool_1___c_TypeDefinitionIndex = 5974;

	template <typename T>
	class ListPool_1___c : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ListPool_1___c<T>** StaticGet___9()
		{
			return (::UnityEngine::NAPRenderPipeline0::ListPool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(ListPool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
