#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_RuntimeAtlas_Status.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_BLOCK_FREE_OFFSET UNITYSDK_OFFSET(0x2129DF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_Block_TypeDefinitionIndex = 5682;

	struct alignas(8) RuntimeAtlasManager_RuntimeAtlas_Block
	{
		::System::Int32 size; // 0x10
		::UnityEngine::Vector2Int offset; // 0x14
		::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_Status status; // 0x1C
		::System::Int32 instanceID; // 0x20
		::System::Int32 refCount; // 0x24
		::System::ValueTuple_2<::System::Int32, ::System::Int32> secondLeaf; // 0x28
		::System::WeakReference_1<::UnityEngine::Texture*>* textureRef; // 0x30
		::System::Int32 insertedFrame; // 0x38

		/*
		::System::Void Free(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_ClearCmd>* clearCmds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_ClearCmd>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_BLOCK_FREE_OFFSET))(this, clearCmds);
		}
		*/
	};
}
