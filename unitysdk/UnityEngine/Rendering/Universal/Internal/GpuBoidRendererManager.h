#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

class GpuBoidManager;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_DRAWBOIDMESH_OFFSET UNITYSDK_OFFSET(0x1AF548B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_PREPAREBOIDBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF54470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1AF54310)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1AF543C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF54B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF54B40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int GpuBoidRendererManager_TypeDefinitionIndex = 26490;

	class GpuBoidRendererManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::GpuBoidManager*>** StaticGet_activeBoidManager()
		{
			return (::System::Collections::Generic::List_1<::GpuBoidManager*>**)Il2CppClass::FromTypeDefinitionIndex(GpuBoidRendererManager_TypeDefinitionIndex)->GetStaticField(0x203A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::GpuBoidManager* proxy)
		{
			return ((::System::Void(*)(::GpuBoidManager*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_REGISTER_OFFSET))(proxy);
		}

		static ::System::Void UnRegister(::GpuBoidManager* proxy)
		{
			return ((::System::Void(*)(::GpuBoidManager*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_UNREGISTER_OFFSET))(proxy);
		}

		static ::System::Void PrepareBoidBuffer(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler, ::UnityEngine::ComputeShader* cs)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_PREPAREBOIDBUFFER_OFFSET))(context, m_ProfilingSampler, cs);
		}

		static ::System::Void DrawBoidMesh(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_DRAWBOIDMESH_OFFSET))(context, cmd);
		}
	};
}
