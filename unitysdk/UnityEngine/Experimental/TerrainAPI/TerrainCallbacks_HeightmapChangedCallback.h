#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RectInt.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2920)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC29C0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2750)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC28A0)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainCallbacks_HeightmapChangedCallback_TypeDefinitionIndex = 5331;

	class TerrainCallbacks_HeightmapChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Terrain* a1, ::UnityEngine::RectInt a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::RectInt, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Terrain* a1, ::UnityEngine::RectInt a2, ::System::Boolean a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::RectInt, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINCALLBACKS_HEIGHTMAPCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
