#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::NAPRenderPipeline0 { class VisiblePixelCounter_RequestTask; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_CLEARALLGROUPS_OFFSET UNITYSDK_OFFSET(0x1AD01D70)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_GET_TOTALPIXELS_OFFSET UNITYSDK_OFFSET(0x1AD019A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AD019B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_ISGROUPINVALID_OFFSET UNITYSDK_OFFSET(0x1AD01DD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_READASYNCREADBACKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AD02C90)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_SETRENDERERGROUP_OFFSET UNITYSDK_OFFSET(0x1AD01E20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_SETUPSHADERRESOURCES_OFFSET UNITYSDK_OFFSET(0x1AD01D10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_TESTGPUVALIDATIONERROR_OFFSET UNITYSDK_OFFSET(0x1AD01B70)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD02110)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD01A30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VisiblePixelCounter_TypeDefinitionIndex = 29774;

	class VisiblePixelCounter : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter** StaticGet_Instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter**)Il2CppClass::FromTypeDefinitionIndex(VisiblePixelCounter_TypeDefinitionIndex)->GetStaticField(0x24040);
		}
		// static const ::System::Int32 kReadbackSlotCount = 0x10; // 0x0
		// static const ::System::Int32 kMaxRendererGroupCount = 0xF; // 0x0
		::UnityEngine::ComputeShader* m_CountCS; // 0x10
		::System::Collections::Generic::Stack_1<::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter_RequestTask*>* m_FreeReadbackBuffers; // 0x18
		::Il2CppArray<::System::Int32>* VisiblePixelCounts; // 0x20
		::UnityEngine::Camera* TargetCamera; // 0x28
		::Il2CppArray<::System::Int32>* m_RenderGroupAges; // 0x30
		::Il2CppArray<::Il2CppArray<::UnityEngine::Renderer*>*>* m_RendererGroups; // 0x38
		::UnityEngine::Material* m_Material; // 0x40
		::System::String* kProfilerTagName; // 0x48
		::System::Int32 kNameTestID; // 0x50
		::System::Int32 kNameOutPixelCounts; // 0x54
		::System::Int32 UnmarkedPixelCount; // 0x58
		::System::Int32 m_TotalPixels; // 0x5C
		::System::Int32 kNameInputValidRange; // 0x60
		::UnityEngine::Vector2 SideIgnoreRatio; // 0x64
		::System::Int32 kVisiblePixelCounterRT; // 0x6C
		::System::Boolean ResultIsValid; // 0x70
		::System::Int32 kNameRepeatCountStepXY; // 0x74
		::System::Int32 kNameTestBindBuffer; // 0x78
		::System::Int32 m_ValidRenderGroupCount; // 0x7C
		::System::Int32 kNameInputRT; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_TotalPixels()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_GET_TOTALPIXELS_OFFSET))(this);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_INITIALIZE_OFFSET))();
		}

		::System::Void TestGPUValidationError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_TESTGPUVALIDATIONERROR_OFFSET))(this);
		}

		::System::Void SetupShaderResources(::UnityEngine::Material* drawMaterial, ::UnityEngine::ComputeShader* countCS)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_SETUPSHADERRESOURCES_OFFSET))(this, drawMaterial, countCS);
		}

		::System::Void ClearAllGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_CLEARALLGROUPS_OFFSET))(this);
		}

		static ::System::Boolean IsGroupInValid(::Il2CppArray<::UnityEngine::Renderer*>* group)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_ISGROUPINVALID_OFFSET))(group);
		}

		::System::Void SetRendererGroup(::System::Int32 index, ::Il2CppArray<::UnityEngine::Renderer*>* renderers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_SETRENDERERGROUP_OFFSET))(this, index, renderers);
		}

		::System::Void Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_UPDATE_OFFSET))(this, cmd, context, renderingData);
		}

		::System::Void ReadAsyncReadbackCallback(::UnityEngine::Rendering::AsyncGPUReadbackRequest request, ::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter_RequestTask* task)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter_RequestTask*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_READASYNCREADBACKCALLBACK_OFFSET))(this, request, task);
		}
	};
}
