#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_ADDTOMANAGER_OFFSET UNITYSDK_OFFSET(0x1EE25880)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1EE25840)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYHANDLES_OFFSET UNITYSDK_OFFSET(0x1EE25850)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE25870)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_OFFSET UNITYSDK_OFFSET(0x1EE25860)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREVISIBLEAFTERBONESYNC_OFFSET UNITYSDK_OFFSET(0x1EE25830)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_REMOVEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0x1EE25890)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_SETCOMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x1EE258A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEPERFRAME_OFFSET UNITYSDK_OFFSET(0x1EE25810)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEVISIBILITYAFTERCULLING_OFFSET UNITYSDK_OFFSET(0x1EE25820)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderEntityManagerBindings_TypeDefinitionIndex = 6126;

	class NapRenderEntityManagerBindings : public ::System::Object
	{
	public:
		static ::System::Void Internal_UpdatePerFrame(::UnityEngine::Rendering::ScriptableRenderContext& context, ::Il2CppArray<::UnityEngine::Camera*>* cameras, ::System::Int32 cameraCount)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::Il2CppArray<::UnityEngine::Camera*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEPERFRAME_OFFSET))(context, cameras, cameraCount);
		}

		static ::System::Void Internal_UpdateVisibilityAfterCulling(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEVISIBILITYAFTERCULLING_OFFSET))(postCullRenderingData, renderingData, isPlanarReflectionCamera);
		}

		static ::System::Void Internal_PrepareVisibleAfterBoneSync(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREVISIBLEAFTERBONESYNC_OFFSET))(postCullRenderingData, renderingData, isPlanarReflectionCamera);
		}

		static ::System::Int32 Internal_GetVisibleEntityCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetVisibleEntityHandles(::Il2CppArray<::System::IntPtr>* handles, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::IntPtr>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYHANDLES_OFFSET))(handles, maxCount);
		}

		static ::System::Void Internal_PrepareAfterLightLoop(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Vector4 avatarMainLightPosition)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_OFFSET))(context, renderingData, postCullRenderingData, avatarMainLightPosition);
		}

		static ::System::Void Internal_AddToManager(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_ADDTOMANAGER_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_RemoveFromManager(::System::IntPtr nativeHandle, ::System::Boolean releaseResources)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_REMOVEFROMMANAGER_OFFSET))(nativeHandle, releaseResources);
		}

		static ::System::Void Internal_SetComputeShader(::UnityEngine::ComputeShader* computeShader)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_SETCOMPUTESHADER_OFFSET))(computeShader);
		}

		static ::System::Void Internal_PrepareAfterLightLoop_Injected(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Vector4& avatarMainLightPosition)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_INJECTED_OFFSET))(context, renderingData, postCullRenderingData, avatarMainLightPosition);
		}
	};
}
