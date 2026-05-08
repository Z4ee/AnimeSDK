#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace UnityEngine { class LODGroup; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER_LODSETOVER_OFFSET UNITYSDK_OFFSET(0x19F342D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER_REBINDLODLIGHTMAPINFO_OFFSET UNITYSDK_OFFSET(0x19F34390)
#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER_SETCURRENTSCENEMESHLODSETOVER_OFFSET UNITYSDK_OFFSET(0x19F34350)
#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F34920)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MeshLodManager_TypeDefinitionIndex = 29864;

	class MeshLodManager : public ::System::Object
	{
	public:
		static ::UnityEngine::SceneManagement::Scene* StaticGet_preActiveScene()
		{
			return (::UnityEngine::SceneManagement::Scene*)Il2CppClass::FromTypeDefinitionIndex(MeshLodManager_TypeDefinitionIndex)->GetStaticField(0x76E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean lodSetOver()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER_LODSETOVER_OFFSET))();
		}

		static ::System::Void SetCurrentSceneMeshLodSetOver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER_SETCURRENTSCENEMESHLODSETOVER_OFFSET))();
		}

		static ::System::Void RebindLodLightMapInfo(::UnityEngine::LODGroup* _LodGroup)
		{
			return ((::System::Void(*)(::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MESHLODMANAGER_REBINDLODLIGHTMAPINFO_OFFSET))(_LodGroup);
		}
	};
}
