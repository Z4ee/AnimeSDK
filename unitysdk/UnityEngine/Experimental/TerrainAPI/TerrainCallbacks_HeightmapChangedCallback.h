#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RectInt.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18ABA5C0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18ABA660)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18AB9510)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABA5A0)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainCallbacks_HeightmapChangedCallback_TypeDefinitionIndex = 5239;

	class TerrainCallbacks_HeightmapChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, ::System::Boolean synched)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::RectInt, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_INVOKE_OFFSET))(this, terrain, heightRegion, synched);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, ::System::Boolean synched, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::RectInt, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, terrain, heightRegion, synched, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
