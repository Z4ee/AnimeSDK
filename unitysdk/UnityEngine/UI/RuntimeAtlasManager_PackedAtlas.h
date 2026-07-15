#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/SpriteElement.h"

namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x15DCC3C0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_ERASE_OFFSET UNITYSDK_OFFSET(0x15DCC660)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_TRYGET_OFFSET UNITYSDK_OFFSET(0x15DCC630)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_UPDATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x15DCC250)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCA1B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_PackedAtlas_TypeDefinitionIndex = 5984;

	class RuntimeAtlasManager_PackedAtlas : public ::System::Object
	{
	public:
		::System::WeakReference_1<::UnityEngine::Texture*>* textureRef; // 0x10
		::System::Int32 instanceID; // 0x18
		::System::Int32 refCount; // 0x1C

		::System::Void _ctor(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::UnityEngine::Texture* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::UnityEngine::UI::SpriteElement& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_TRYGET_OFFSET))(this, a1);
		}

		::System::Boolean Erase(::UnityEngine::UI::SpriteElement& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_ERASE_OFFSET))(this, a1);
		}

		::System::Void UpdateAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_PACKEDATLAS_UPDATEAVAILABLE_OFFSET))(this, a1);
		}
	};
}
