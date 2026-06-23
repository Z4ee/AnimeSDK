#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RectInt.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E6D8010)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6D80C0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6D7710)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7FF0)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainCallbacks_TextureChangedCallback_TypeDefinitionIndex = 32481;

	class TerrainCallbacks_TextureChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Terrain* terrain, ::System::String* textureName, ::UnityEngine::RectInt texelRegion, ::System::Boolean synched)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::System::String*, ::UnityEngine::RectInt, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK_INVOKE_OFFSET))(this, terrain, textureName, texelRegion, synched);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Terrain* terrain, ::System::String* textureName, ::UnityEngine::RectInt texelRegion, ::System::Boolean synched, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Terrain*, ::System::String*, ::UnityEngine::RectInt, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, terrain, textureName, texelRegion, synched, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_TEXTURECHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
