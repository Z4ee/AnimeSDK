#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3448E0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B344910)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3439D0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B344870)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainMap_TerrainFilter_TypeDefinitionIndex = 5330;

	class TerrainUtility_TerrainMap_TerrainFilter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::Terrain* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Terrain* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Terrain*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TERRAINFILTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
