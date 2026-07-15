#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Rendering { template <typename T> class HashSetPool_1___c; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HashSetPool_1___c_TypeDefinitionIndex = 34060;

	template <typename T>
	class HashSetPool_1___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::HashSetPool_1___c<T>** StaticGet___9()
		{
			return (::UnityEngine::Rendering::HashSetPool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(HashSetPool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
