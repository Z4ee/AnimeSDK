#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FAC3710)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FAC3740)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FAC1BC0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC0530)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainMap_TerrainFilter_TypeDefinitionIndex = 33119;

	class TerrainUtility_TerrainMap_TerrainFilter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::UnityEngine::Terrain* terrain)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_INVOKE_OFFSET))(this, terrain);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Terrain* terrain, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Terrain*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_BEGININVOKE_OFFSET))(this, terrain, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
