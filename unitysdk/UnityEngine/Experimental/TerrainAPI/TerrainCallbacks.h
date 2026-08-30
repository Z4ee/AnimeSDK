#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"

namespace System { class String; }
namespace UnityEngine { class TerrainData; }
namespace UnityEngine::Experimental::TerrainAPI { class TerrainCallbacks_HeightmapChangedCallback; }
namespace UnityEngine::Experimental::TerrainAPI { class TerrainCallbacks_TextureChangedCallback; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKEHEIGHTMAPCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EDD5730)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKETEXTURECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EDD5850)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainCallbacks_TypeDefinitionIndex = 5330;

	class TerrainCallbacks : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_TextureChangedCallback** StaticGet_textureChanged()
		{
			return (::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_TextureChangedCallback**)Il2CppClass::FromTypeDefinitionIndex(TerrainCallbacks_TypeDefinitionIndex)->GetStaticField(0x250);
		}
		static ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback** StaticGet_heightmapChanged()
		{
			return (::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback**)Il2CppClass::FromTypeDefinitionIndex(TerrainCallbacks_TypeDefinitionIndex)->GetStaticField(0x258);
		}

		static ::System::Void InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* a1, ::UnityEngine::RectInt a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::UnityEngine::RectInt, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKEHEIGHTMAPCHANGEDCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void InvokeTextureChangedCallback(::UnityEngine::TerrainData* a1, ::System::String* a2, ::UnityEngine::RectInt a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*, ::System::String*, ::UnityEngine::RectInt, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_INVOKETEXTURECHANGEDCALLBACK_OFFSET))(a1, a2, a3, a4);
		}
	};
}
