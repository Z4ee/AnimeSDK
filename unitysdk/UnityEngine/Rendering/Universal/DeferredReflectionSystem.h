#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class PlanarReflectionProxy_NativeSRP; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_ADDMIRROR_OFFSET UNITYSDK_OFFSET(0x1BC1BA80)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_ADDPROBE_OFFSET UNITYSDK_OFFSET(0x1BC1F620)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETMIRRORLISTFORLAYER_OFFSET UNITYSDK_OFFSET(0x1BC1C390)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETREFLECTIONCUBEARRAY_OFFSET UNITYSDK_OFFSET(0x1BC1EE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETREFLECTIONLIST_OFFSET UNITYSDK_OFFSET(0x1BC1F5A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETSUPPORTCUBEMAPARRAY_OFFSET UNITYSDK_OFFSET(0x1BC1ED70)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BC1EC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_REFRESHTEXTURECACHEARRAY_OFFSET UNITYSDK_OFFSET(0x1BC1F540)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_RELEASEPLANERREFLECTION_OFFSET UNITYSDK_OFFSET(0x1BC1BE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_REMOVEMIRROR_OFFSET UNITYSDK_OFFSET(0x1BC1BCD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_REMOVEPROBE_OFFSET UNITYSDK_OFFSET(0x1BC1F840)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_RENDERPLANERREFLECTION_OFFSET UNITYSDK_OFFSET(0x1BC1C4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_SETREFRESHFLAG_OFFSET UNITYSDK_OFFSET(0x1BC1F500)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC1FAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1EA50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DeferredReflectionSystem_TypeDefinitionIndex = 26803;

	class DeferredReflectionSystem : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplerRenderPlanerReflection()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(DeferredReflectionSystem_TypeDefinitionIndex)->GetStaticField(0x21A00);
		}
		static ::UnityEngine::Rendering::Universal::DeferredReflectionSystem** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::DeferredReflectionSystem**)Il2CppClass::FromTypeDefinitionIndex(DeferredReflectionSystem_TypeDefinitionIndex)->GetStaticField(0x21A08);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP*>*>* m_PlannerReflectionProxies; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Camera*>* m_PlannerReflectionOwner; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>*>* mReflectionProbeList; // 0x20
		::System::Boolean m_SupportCubeMapArray; // 0x28
		::System::Boolean needRefresh; // 0x29
		::System::Single prePlanerYSyncTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void AddMirror(::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_ADDMIRROR_OFFSET))(this, camera);
		}

		::System::Void RemoveMirror(::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_REMOVEMIRROR_OFFSET))(this, camera);
		}

		::System::Void ReleasePlanerReflection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_RELEASEPLANERREFLECTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP*>* GetMirrorListForLayer(::System::Int32 layerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP*>*(*)(::PVOID, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETMIRRORLISTFORLAYER_OFFSET))(this, layerMask, camera);
		}

		::System::Void RenderPlanerReflection(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* baseCamera, ::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality mirrorReflectionQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_RENDERPLANERREFLECTION_OFFSET))(this, context, baseCamera, mirrorReflectionQuality);
		}

		static ::UnityEngine::Rendering::Universal::DeferredReflectionSystem* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::DeferredReflectionSystem*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean GetSupportCubeMapArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETSUPPORTCUBEMAPARRAY_OFFSET))(this);
		}

		::UnityEngine::CubemapArray* GetReflectionCubeArray(::System::Int32& fallbackEnvIndex)
		{
			return ((::UnityEngine::CubemapArray*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETREFLECTIONCUBEARRAY_OFFSET))(this, fallbackEnvIndex);
		}

		::System::Void SetRefreshFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_SETREFRESHFLAG_OFFSET))(this);
		}

		::System::Void RefreshTextureCacheArray(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* blitCubeFaceMat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_REFRESHTEXTURECACHEARRAY_OFFSET))(this, cmd, blitCubeFaceMat);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>* GetReflectionList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_GETREFLECTIONLIST_OFFSET))(this);
		}

		::System::Void AddProbe(::UnityEngine::Rendering::Universal::DeferredReflectionProbe* probe)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_ADDPROBE_OFFSET))(this, probe);
		}

		::System::Void RemoveProbe(::UnityEngine::Rendering::Universal::DeferredReflectionProbe* probe)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM_REMOVEPROBE_OFFSET))(this, probe);
		}
	};
}
