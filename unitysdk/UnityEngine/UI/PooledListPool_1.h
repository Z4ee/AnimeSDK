#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int PooledListPool_1_TypeDefinitionIndex = 6038;

	template <typename T>
	class PooledListPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::Pooled::PooledList_1<T>*>** StaticGet_s_ListPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::Pooled::PooledList_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(PooledListPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
