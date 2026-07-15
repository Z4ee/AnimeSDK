#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { template <typename T1, typename T2> class DictionaryPool_2___c; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DictionaryPool_2___c_TypeDefinitionIndex = 34062;

	template <typename TKey, typename TValue>
	class DictionaryPool_2___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>** StaticGet___9()
		{
			return (::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryPool_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
