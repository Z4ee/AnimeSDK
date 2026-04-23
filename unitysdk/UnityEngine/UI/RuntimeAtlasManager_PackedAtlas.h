#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/SpriteElement.h"

namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A593940)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_ERASE_OFFSET UNITYSDK_OFFSET(0x1A593C20)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_TRYGET_OFFSET UNITYSDK_OFFSET(0x1A593BF0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_UPDATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A593820)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5918C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_PackedAtlas_TypeDefinitionIndex = 5702;

	class RuntimeAtlasManager_PackedAtlas : public ::System::Object
	{
	public:
		::System::WeakReference_1<::UnityEngine::Texture*>* textureRef; // 0x10
		::System::Int32 instanceID; // 0x18
		::System::Int32 refCount; // 0x1C

		::System::Void _ctor(::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS__CTOR_OFFSET))(this, texture);
		}

		::System::Boolean Contains(::UnityEngine::Texture* texture)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_CONTAINS_OFFSET))(this, texture);
		}

		::System::Boolean TryGet(::UnityEngine::UI::SpriteElement& element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_TRYGET_OFFSET))(this, element);
		}

		::System::Boolean Erase(::UnityEngine::UI::SpriteElement& element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_ERASE_OFFSET))(this, element);
		}

		::System::Void UpdateAvailable(::System::Boolean unloadUnUsed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_UPDATEAVAILABLE_OFFSET))(this, unloadUnUsed);
		}
	};
}
