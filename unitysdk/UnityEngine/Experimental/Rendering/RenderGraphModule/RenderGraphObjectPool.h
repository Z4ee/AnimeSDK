#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_GETTEMPMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x191DB7E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_RELEASEALLTEMPALLOC_OFFSET UNITYSDK_OFFSET(0x191D96E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x191D4AD0)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphObjectPool_TypeDefinitionIndex = 9515;

	class RenderGraphObjectPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, ::System::Int32>>>* m_AllocatedArrays; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* m_AllocatedMaterialPropertyBlocks; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::System::Int32>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* m_ArrayPool; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL__CTOR_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* GetTempMaterialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_GETTEMPMATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void ReleaseAllTempAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_RELEASEALLTEMPALLOC_OFFSET))(this);
		}
	};
}
