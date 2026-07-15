#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ObjectPool_1_PooledObject.h"

namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int UnsafeGenericPool_1_TypeDefinitionIndex = 34056;

	template <typename T>
	class UnsafeGenericPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectPool_1<T>** StaticGet_s_Pool()
		{
			return (::UnityEngine::Rendering::ObjectPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(UnsafeGenericPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
