#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DictionaryPool_2_TypeDefinitionIndex = 5973;

	template <typename TKey, typename TValue>
	class DictionaryPool_2 : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>** StaticGet_s_Pool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryPool_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
