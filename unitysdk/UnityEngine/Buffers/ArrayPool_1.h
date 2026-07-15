#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }

namespace UnityEngine::Buffers
{
	inline static constexpr unsigned int ArrayPool_1_TypeDefinitionIndex = 4931;

	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::Buffers::ArrayPool_1<T>** StaticGet_s_sharedInstance()
		{
			return (::UnityEngine::Buffers::ArrayPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
