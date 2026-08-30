#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AstraFXAsset; }
namespace UnityEngine { class AstraFXRenderer; }

#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x1E1E6ED0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1E1E6EF0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_ASTRAFXRENDERERDELEGATE_INIT_OFFSET UNITYSDK_OFFSET(0x1E1E6C20)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x1E1E6EE0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1E1E6EA0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1E1E6E80)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1E1E6EC0)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE_SET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1E1E6E90)
#define UNITYENGINE_ASTRAFXRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E6F00)

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXRendererDelegate_TypeDefinitionIndex = 4094;

	class AstraFXRendererDelegate : public ::System::Object
	{
	public:
		::UnityEngine::AstraFXRenderer* _renderer_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::AstraFXRenderer* get_renderer()
		{
			return ((::UnityEngine::AstraFXRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_RENDERER_OFFSET))(this);
		}

		::System::Void set_renderer(::UnityEngine::AstraFXRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AstraFXRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_SET_RENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::AstraFXAsset* get_asset()
		{
			return ((::UnityEngine::AstraFXAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_GET_ASSET_OFFSET))(this);
		}

		::System::Void AstraFXRendererDelegate_Init(::UnityEngine::AstraFXRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AstraFXRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_ASTRAFXRENDERERDELEGATE_INIT_OFFSET))(this, a1);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXRENDERERDELEGATE_AFTEREXECUTEPASSES_OFFSET))(this);
		}
	};
}
