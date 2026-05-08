#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PerObjectShadowConfig.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShaderFeatureMapping.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2DBE70)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2DC010)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETINSTANCEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B2DC0B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2DBE00)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2DBE10)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B2DBE20)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B2DBE30)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSHADERFEATUREMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1B2DBE60)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1B2DBE50)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x1B2DBE40)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_SETSHADERFEATUREMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1B2DC600)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1B2DC300)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATESETTINGS_OFFSET UNITYSDK_OFFSET(0x1B2DC480)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x1B2DC170)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2DC880)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowBindings_TypeDefinitionIndex = 6116;

	class PerObjectShadowBindings : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_s_Instance()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowBindings_TypeDefinitionIndex)->GetStaticField(0x2E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS__CCTOR_OFFSET))();
		}

		static ::System::IntPtr Internal_CreateNativeObject(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig& settings)
		{
			return ((::System::IntPtr(*)(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET))(settings);
		}

		static ::System::Void Internal_DestroyNativeObject(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET))(nativeHandle);
		}

		static ::System::IntPtr Internal_GetInstance()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETINSTANCE_OFFSET))();
		}

		static ::System::Void Internal_SetSettings(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig& settings)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSETTINGS_OFFSET))(nativeHandle, settings);
		}

		static ::System::Void Internal_UpdateTargets(::System::IntPtr nativeHandle, ::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATETARGETS_OFFSET))(nativeHandle, camera, renderingData, postCullRenderingData);
		}

		static ::System::Void Internal_UpdatePerObjectShadow(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATEPEROBJECTSHADOW_OFFSET))(nativeHandle, postCullRenderingData);
		}

		static ::System::Void Internal_SetShaderFeatureMappings(::System::IntPtr nativeHandle, ::Il2CppArray<::System::String*>* shaderNames, ::Il2CppArray<::System::UInt32>* features, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSHADERFEATUREMAPPINGS_OFFSET))(nativeHandle, shaderNames, features, count);
		}

		static ::System::Void Create(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig settings)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_CREATE_OFFSET))(settings);
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_DESTROY_OFFSET))();
		}

		static ::System::IntPtr GetInstanceHandle()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETINSTANCEHANDLE_OFFSET))();
		}

		static ::System::Void UpdateTargets(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATETARGETS_OFFSET))(camera, renderingData, postCullRenderingData);
		}

		static ::System::Void UpdatePerObjectShadow(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATEPEROBJECTSHADOW_OFFSET))(postCullRenderingData);
		}

		static ::System::Void UpdateSettings(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig settings)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATESETTINGS_OFFSET))(settings);
		}

		static ::System::Void SetShaderFeatureMappings(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ShaderFeatureMapping>* mappings)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ShaderFeatureMapping>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_SETSHADERFEATUREMAPPINGS_OFFSET))(mappings);
		}
	};
}
