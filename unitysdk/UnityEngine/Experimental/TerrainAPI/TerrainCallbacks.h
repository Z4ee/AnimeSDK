#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"

namespace System { class String; }
namespace UnityEngine { class TerrainData; }
namespace UnityEngine::Experimental::TerrainAPI { class TerrainCallbacks_HeightmapChangedCallback; }
namespace UnityEngine::Experimental::TerrainAPI { class TerrainCallbacks_TextureChangedCallback; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKEHEIGHTMAPCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E6D6E30)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKETEXTURECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E6D7630)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainCallbacks_TypeDefinitionIndex = 32479;

	class TerrainCallbacks : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback** StaticGet_heightmapChanged()
		{
			return (::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback**)Il2CppClass::FromTypeDefinitionIndex(TerrainCallbacks_TypeDefinitionIndex)->GetStaticField(0x26C90);
		}
		static ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_TextureChangedCallback** StaticGet_textureChanged()
		{
			return (::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_TextureChangedCallback**)Il2CppClass::FromTypeDefinitionIndex(TerrainCallbacks_TypeDefinitionIndex)->GetStaticField(0x26C98);
		}

		static ::System::Void InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, ::System::Boolean synched)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::UnityEngine::RectInt, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKEHEIGHTMAPCHANGEDCALLBACK_OFFSET))(terrainData, heightRegion, synched);
		}

		static ::System::Void InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::System::String* textureName, ::UnityEngine::RectInt texelRegion, ::System::Boolean synched)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::System::String*, ::UnityEngine::RectInt, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKETEXTURECHANGEDCALLBACK_OFFSET))(terrainData, textureName, texelRegion, synched);
		}
	};
}
