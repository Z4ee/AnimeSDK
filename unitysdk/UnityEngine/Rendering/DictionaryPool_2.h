#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ObjectPool_1_PooledObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DictionaryPool_2_TypeDefinitionIndex = 34061;

	template <typename TKey, typename TValue>
	class DictionaryPool_2 : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>** StaticGet_s_Pool()
		{
			return (::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryPool_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
