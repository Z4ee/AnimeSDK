#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ObjectPool_1_PooledObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ListPool_1_TypeDefinitionIndex = 5971;

	template <typename T>
	class ListPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::System::Collections::Generic::List_1<T>*>** StaticGet_s_Pool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::System::Collections::Generic::List_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(ListPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
