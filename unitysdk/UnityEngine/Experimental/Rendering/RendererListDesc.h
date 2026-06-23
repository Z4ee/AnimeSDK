#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/PerObjectData.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x90FC60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CULLINGRESULT_OFFSET UNITYSDK_OFFSET(0x90FC40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAMES_OFFSET UNITYSDK_OFFSET(0x90FCA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAME_OFFSET UNITYSDK_OFFSET(0x90FC80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_ISVALID_OFFSET UNITYSDK_OFFSET(0x90FE20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x90FC70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CULLINGRESULT_OFFSET UNITYSDK_OFFSET(0x90FC50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAMES_OFFSET UNITYSDK_OFFSET(0x90FCB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAME_OFFSET UNITYSDK_OFFSET(0x90FC90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x90FD40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x90FCC0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RendererListDesc_TypeDefinitionIndex = 18233;

	struct alignas(8) RendererListDesc
	{
		::UnityEngine::Rendering::SortingCriteria sortingCriteria; // 0x10
		::UnityEngine::Rendering::PerObjectData rendererConfiguration; // 0x14
		::UnityEngine::Rendering::RenderQueueRange renderQueueRange; // 0x18
		::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock; // 0x20
		::UnityEngine::Material* overrideMaterial; // 0x90
		::System::Boolean excludeObjectMotionVectors; // 0x98
		::System::Int32 layerMask; // 0x9C
		::System::Int32 overrideMaterialPassIndex; // 0xA0
		::UnityEngine::Rendering::CullingResults _cullingResult_k__BackingField; // 0xA8
		::UnityEngine::Camera* _camera_k__BackingField; // 0xB8
		::UnityEngine::Rendering::ShaderTagId _passName_k__BackingField; // 0xC0
		::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>* _passNames_k__BackingField; // 0xC8

		::System::Void _ctor(::UnityEngine::Rendering::ShaderTagId passName, ::UnityEngine::Rendering::CullingResults cullingResult, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC__CTOR_OFFSET))(this, passName, cullingResult, camera);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>* passNames, ::UnityEngine::Rendering::CullingResults cullingResult, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>*, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC__CTOR_1_OFFSET))(this, passNames, cullingResult, camera);
		}

		::UnityEngine::Rendering::CullingResults get_cullingResult()
		{
			return ((::UnityEngine::Rendering::CullingResults(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CULLINGRESULT_OFFSET))(this);
		}

		::System::Void set_cullingResult(::UnityEngine::Rendering::CullingResults value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CULLINGRESULT_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CAMERA_OFFSET))(this);
		}

		::System::Void set_camera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CAMERA_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ShaderTagId get_passName()
		{
			return ((::UnityEngine::Rendering::ShaderTagId(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAME_OFFSET))(this);
		}

		::System::Void set_passName(::UnityEngine::Rendering::ShaderTagId value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>* get_passNames()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAMES_OFFSET))(this);
		}

		::System::Void set_passNames(::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAMES_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_ISVALID_OFFSET))(this);
		}
	};
}
