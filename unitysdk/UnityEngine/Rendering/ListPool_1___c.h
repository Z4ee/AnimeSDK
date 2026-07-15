#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { template <typename T> class ListPool_1___c; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ListPool_1___c_TypeDefinitionIndex = 34058;

	template <typename T>
	class ListPool_1___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ListPool_1___c<T>** StaticGet___9()
		{
			return (::UnityEngine::Rendering::ListPool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(ListPool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
