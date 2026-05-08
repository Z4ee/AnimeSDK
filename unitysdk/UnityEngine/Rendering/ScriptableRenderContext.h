#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ComputeQueueType.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsFenceType.h"
#include "unitysdk/UnityEngine/Rendering/SynchronisationStage.h"
#include "unitysdk/UnityEngine/Rendering/SynchronisationStageFlags.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Experimental::Rendering { class RayTracingAccelerationStructure; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class SRPCmdBuffer; }

#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E870)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952E00)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_OFFSET UNITYSDK_OFFSET(0x952E00)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B18E570)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_OFFSET UNITYSDK_OFFSET(0x952E10)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E750)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_OFFSET UNITYSDK_OFFSET(0x952D50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_1_OFFSET UNITYSDK_OFFSET(0x952E90)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B18E580)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET UNITYSDK_OFFSET(0x952E50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_1_OFFSET UNITYSDK_OFFSET(0x952DA0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E7F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952DA0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x953160)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATEGPUFENCE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E830)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATEGPUFENCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952DE0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATEGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0x953190)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CULL_OFFSET UNITYSDK_OFFSET(0x953120)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWHIZDEBUGRENDERERS_OFFSET UNITYSDK_OFFSET(0x952F60)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_1_OFFSET UNITYSDK_OFFSET(0x952F20)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E670)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952CE0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0x952EF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E690)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952CF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_OFFSET UNITYSDK_OFFSET(0x952CF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B18E5A0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_OFFSET UNITYSDK_OFFSET(0x952EE0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E770)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D60)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_OFFSET UNITYSDK_OFFSET(0x952D60)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B18E590)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_OFFSET UNITYSDK_OFFSET(0x952ED0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x953360)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x953310)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTEANDCLEARCOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x953020)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E6B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D00)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x952FA0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E6D0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D10)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_OFFSET UNITYSDK_OFFSET(0x9530A0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E650)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952CD0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x952CD0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E630)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952CC0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET UNITYSDK_OFFSET(0x952CC0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E730)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_OFFSET UNITYSDK_OFFSET(0x952D40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B18E5F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E5D0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_OFFSET UNITYSDK_OFFSET(0x1B18E5B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E710)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D30)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x952D30)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPAREFORBUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E7D0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPAREFORBUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D90)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPAREFORBUILDRAYTRACINGACCELERATIONSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x952D90)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_RAYTRACINGACCELERATIONSTRUCTURECULLINSTANCES_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E7B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_RAYTRACINGACCELERATIONSTRUCTURECULLINSTANCES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D80)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_RAYTRACINGACCELERATIONSTRUCTURECULLINSTANCES_OFFSET UNITYSDK_OFFSET(0x952D80)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETTARGETQUEUETYPE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E810)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETTARGETQUEUETYPE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952DD0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETTARGETQUEUETYPE_OFFSET UNITYSDK_OFFSET(0x952DD0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E6F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D20)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET UNITYSDK_OFFSET(0x952D20)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPSUNSHADOWCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B18E5E0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E610)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952CB0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_OFFSET UNITYSDK_OFFSET(0x952CB0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E790)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952D70)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_OFFSET UNITYSDK_OFFSET(0x952D70)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONASYNCGRAPHICSFENCE_1_OFFSET UNITYSDK_OFFSET(0x9532C0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONASYNCGRAPHICSFENCE_2_OFFSET UNITYSDK_OFFSET(0x9532F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONASYNCGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0x953290)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONGPUFENCE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B18E850)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONGPUFENCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x952DF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableRenderContext_TypeDefinitionIndex = 6230;

	struct alignas(8) ScriptableRenderContext
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET))(this, ptr);
		}

		static ::System::Void BeginRenderPass_Internal(::System::IntPtr self, ::System::Int32 width, ::System::Int32 height, ::System::Int32 samples, ::System::IntPtr colors, ::System::Int32 colorCount, ::System::Int32 depthAttachmentIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_INTERNAL_OFFSET))(self, width, height, samples, colors, colorCount, depthAttachmentIndex);
		}

		static ::System::Void BeginSubPass_Internal(::System::IntPtr self, ::System::IntPtr colors, ::System::Int32 colorCount, ::System::IntPtr inputs, ::System::Int32 inputCount, ::System::Boolean isDepthReadOnly)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_INTERNAL_OFFSET))(self, colors, colorCount, inputs, inputCount, isDepthReadOnly);
		}

		static ::System::Void EndSubPass_Internal(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_INTERNAL_OFFSET))(self);
		}

		static ::System::Void EndRenderPass_Internal(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_INTERNAL_OFFSET))(self);
		}

		/*
		static ::System::Void Internal_Cull(::UnityEngine::Rendering::ScriptableCullingParameters& parameters, ::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr results)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::Rendering::ScriptableRenderContext, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_OFFSET))(parameters, renderLoop, results);
		}
		*/

		/*
		static ::System::Void SetupSunShadowCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters& parameters, ::Il2CppArray<::System::Byte>* pvsBits, ::System::UInt32 byteOffset, ::System::UInt32 rangeCount)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPSUNSHADOWCULLINGPARAMETERS_OFFSET))(parameters, pvsBits, byteOffset, rangeCount);
		}
		*/

		/*
		static ::System::Void InitializeSortSettings(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::SortingSettings& sortingSettings)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::SortingSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET))(camera, sortingSettings);
		}
		*/

		::System::Void Submit_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_OFFSET))(this);
		}

		::System::Int32 GetNumberOfCameras_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera_Internal(::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET))(this, index);
		}

		/*
		::System::Void DrawRenderers_Internal(::System::IntPtr cullResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::System::IntPtr renderTypes, ::System::IntPtr stateBlocks, ::System::Int32 stateCount, ::System::Boolean hizDebug)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_OFFSET))(this, cullResults, drawingSettings, filteringSettings, renderTypes, stateBlocks, stateCount, hizDebug);
		}
		*/

		::System::Void DrawShadows_Internal(::System::IntPtr shadowDrawingSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_OFFSET))(this, shadowDrawingSettings);
		}

		::System::Void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::System::Boolean clearMove)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET))(this, commandBuffer, clearMove);
		}

		::System::Void ExecuteSRPCmdBuffer_Internal(::UnityEngine::Rendering::SRPCmdBuffer* srpCmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::SRPCmdBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_OFFSET))(this, srpCmdBuffer);
		}

		::System::Void SetupCameraProperties_Internal(::UnityEngine::Camera* camera, ::System::Boolean stereoSetup, ::System::Int32 eye)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_OFFSET))(this, camera, stereoSetup, eye);
		}

		::System::Void InvokeOnRenderObjectCallback_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_OFFSET))(this);
		}

		::System::Void HZBCullingReadback_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_OFFSET))(this);
		}

		::System::Void BeginRenderQuery_Internal(::UnityEngine::Camera* camera, ::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_OFFSET))(this, camera, nameID);
		}

		::System::Void EndRenderQuery_Internal(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_OFFSET))(this, camera);
		}

		::System::Void UpdateKodamaLighting_BakedOnly_Internal(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_OFFSET))(this, camera);
		}

		/*
		::System::Void RayTracingAccelerationStructureCullInstances_Internal(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct, ::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingConfig& cullingConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_RAYTRACINGACCELERATIONSTRUCTURECULLINSTANCES_INTERNAL_OFFSET))(this, accelStruct, cullingConfig);
		}
		*/

		::System::Void PrepareForBuildRayTracingAccelerationStructure_Internal(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPAREFORBUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_OFFSET))(this, accelStruct);
		}

		/*
		::System::Void BuildRayTracingAccelerationStructure_Internal(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct, ::UnityEngine::Vector3 relativeOrigin)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_OFFSET))(this, accelStruct, relativeOrigin);
		}
		*/

		::System::Void SetTargetQueueType_Internal(::UnityEngine::Rendering::ComputeQueueType queueType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETTARGETQUEUETYPE_INTERNAL_OFFSET))(this, queueType);
		}

		::System::IntPtr CreateGPUFence_Internal(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage)
		{
			return ((::System::IntPtr(*)(::PVOID, ::UnityEngine::Rendering::GraphicsFenceType, ::UnityEngine::Rendering::SynchronisationStageFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATEGPUFENCE_INTERNAL_OFFSET))(this, fenceType, stage);
		}

		::System::Void WaitOnGPUFence_Internal(::System::IntPtr fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::Rendering::SynchronisationStageFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONGPUFENCE_INTERNAL_OFFSET))(this, fencePtr, stage);
		}

		::System::Void AutoProfileCamera_Internal(::System::String* camName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_OFFSET))(this, camName);
		}

		/*
		::System::Void BeginRenderPass(::System::Int32 width, ::System::Int32 height, ::System::Int32 samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments, ::System::Int32 depthAttachmentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_OFFSET))(this, width, height, samples, attachments, depthAttachmentIndex);
		}
		*/

		/*
		::System::Void BeginSubPass(::Unity::Collections::NativeArray_1<::System::Int32> colors, ::Unity::Collections::NativeArray_1<::System::Int32> inputs, ::System::Boolean isDepthReadOnly)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Int32>, ::Unity::Collections::NativeArray_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET))(this, colors, inputs, isDepthReadOnly);
		}
		*/

		/*
		::System::Void BeginSubPass_1(::Unity::Collections::NativeArray_1<::System::Int32> colors, ::System::Boolean isDepthReadOnly)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_1_OFFSET))(this, colors, isDepthReadOnly);
		}
		*/

		::System::Void EndSubPass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_OFFSET))(this);
		}

		::System::Void EndRenderPass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_OFFSET))(this);
		}

		::System::Int32 GetNumberOfCameras()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera(::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET))(this, index);
		}

		/*
		::System::Void DrawRenderers(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET))(this, cullingResults, drawingSettings, filteringSettings);
		}
		*/

		/*
		::System::Void DrawRenderers_1(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::UnityEngine::Rendering::RenderStateBlock& stateBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_1_OFFSET))(this, cullingResults, drawingSettings, filteringSettings, stateBlock);
		}
		*/

		/*
		::System::Void DrawHizDebugRenderers(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::UnityEngine::Rendering::RenderStateBlock& stateBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWHIZDEBUGRENDERERS_OFFSET))(this, cullingResults, drawingSettings, filteringSettings, stateBlock);
		}
		*/

		/*
		::System::Void DrawShadows(::UnityEngine::Rendering::ShadowDrawingSettings& settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowDrawingSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_OFFSET))(this, settings);
		}
		*/

		::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET))(this, commandBuffer);
		}

		::System::Void ExecuteAndClearCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTEANDCLEARCOMMANDBUFFER_OFFSET))(this, commandBuffer);
		}

		::System::Void ExecuteSRPCmdBuffer(::UnityEngine::Rendering::SRPCmdBuffer* srpCmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::SRPCmdBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_OFFSET))(this, srpCmdBuffer);
		}

		::System::Void SetupCameraProperties(::UnityEngine::Camera* camera, ::System::Boolean stereoSetup, ::System::Int32 eye)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET))(this, camera, stereoSetup, eye);
		}

		::System::Void InvokeOnRenderObjectCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_OFFSET))(this);
		}

		/*
		::UnityEngine::Rendering::CullingResults Cull(::UnityEngine::Rendering::ScriptableCullingParameters& parameters)
		{
			return ((::UnityEngine::Rendering::CullingResults(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CULL_OFFSET))(this, parameters);
		}
		*/

		::System::Void HZBCullingReadback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_OFFSET))(this);
		}

		::System::Void BeginRenderQuery(::UnityEngine::Camera* camera, ::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_OFFSET))(this, camera, nameID);
		}

		::System::Void EndRenderQuery(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_OFFSET))(this, camera);
		}

		/*
		::System::Void RayTracingAccelerationStructureCullInstances(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct, ::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingConfig& cullingConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_RAYTRACINGACCELERATIONSTRUCTURECULLINSTANCES_OFFSET))(this, accelStruct, cullingConfig);
		}
		*/

		::System::Void PrepareForBuildRayTracingAccelerationStructure(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPAREFORBUILDRAYTRACINGACCELERATIONSTRUCTURE_OFFSET))(this, accelStruct);
		}

		::System::Void BuildRayTracingAccelerationStructure(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_OFFSET))(this, accelStruct);
		}

		/*
		::System::Void BuildRayTracingAccelerationStructure_1(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct, ::UnityEngine::Vector3 relativeOrigin)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_1_OFFSET))(this, accelStruct, relativeOrigin);
		}
		*/

		::System::Void SetTargetQueueType(::UnityEngine::Rendering::ComputeQueueType queueType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETTARGETQUEUETYPE_OFFSET))(this, queueType);
		}

		/*
		::UnityEngine::Rendering::GraphicsFence CreateGraphicsFence(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage)
		{
			return ((::UnityEngine::Rendering::GraphicsFence(*)(::PVOID, ::UnityEngine::Rendering::GraphicsFenceType, ::UnityEngine::Rendering::SynchronisationStageFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATEGRAPHICSFENCE_OFFSET))(this, fenceType, stage);
		}
		*/

		/*
		::System::Void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GraphicsFence))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONASYNCGRAPHICSFENCE_OFFSET))(this, fence);
		}
		*/

		/*
		::System::Void WaitOnAsyncGraphicsFence_1(::UnityEngine::Rendering::GraphicsFence fence, ::UnityEngine::Rendering::SynchronisationStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GraphicsFence, ::UnityEngine::Rendering::SynchronisationStage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONASYNCGRAPHICSFENCE_1_OFFSET))(this, fence, stage);
		}
		*/

		/*
		::System::Void WaitOnAsyncGraphicsFence_2(::UnityEngine::Rendering::GraphicsFence fence, ::UnityEngine::Rendering::SynchronisationStageFlags stage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GraphicsFence, ::UnityEngine::Rendering::SynchronisationStageFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONASYNCGRAPHICSFENCE_2_OFFSET))(this, fence, stage);
		}
		*/

		::System::Void UpdateKodamaLighting_BakedOnly(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_OFFSET))(this, camera);
		}

		::System::Void AutoProfileCamera(::System::String* camName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_OFFSET))(this, camName);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableRenderContext other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Void Internal_Cull_Injected(::UnityEngine::Rendering::ScriptableCullingParameters& parameters, ::UnityEngine::Rendering::ScriptableRenderContext& renderLoop, ::System::IntPtr results)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_INJECTED_OFFSET))(parameters, renderLoop, results);
		}
		*/

		static ::System::Void Submit_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 GetNumberOfCameras_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::Camera* GetCamera_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET))(_unity_self, index);
		}

		/*
		static ::System::Void DrawRenderers_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::IntPtr cullResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::System::IntPtr renderTypes, ::System::IntPtr stateBlocks, ::System::Int32 stateCount, ::System::Boolean hizDebug)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IntPtr, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_INJECTED_OFFSET))(_unity_self, cullResults, drawingSettings, filteringSettings, renderTypes, stateBlocks, stateCount, hizDebug);
		}
		*/

		static ::System::Void DrawShadows_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::IntPtr shadowDrawingSettings)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_INJECTED_OFFSET))(_unity_self, shadowDrawingSettings);
		}

		static ::System::Void ExecuteCommandBuffer_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::System::Boolean clearMove)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET))(_unity_self, commandBuffer, clearMove);
		}

		static ::System::Void ExecuteSRPCmdBuffer_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Rendering::SRPCmdBuffer* srpCmdBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::SRPCmdBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_INJECTED_OFFSET))(_unity_self, srpCmdBuffer);
		}

		static ::System::Void SetupCameraProperties_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera, ::System::Boolean stereoSetup, ::System::Int32 eye)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_INJECTED_OFFSET))(_unity_self, camera, stereoSetup, eye);
		}

		static ::System::Void InvokeOnRenderObjectCallback_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void HZBCullingReadback_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void BeginRenderQuery_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera, ::System::Int32 nameID)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_INJECTED_OFFSET))(_unity_self, camera, nameID);
		}

		static ::System::Void EndRenderQuery_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_INJECTED_OFFSET))(_unity_self, camera);
		}

		static ::System::Void UpdateKodamaLighting_BakedOnly_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_INJECTED_OFFSET))(_unity_self, camera);
		}

		/*
		static ::System::Void RayTracingAccelerationStructureCullInstances_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct, ::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingConfig& cullingConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_RAYTRACINGACCELERATIONSTRUCTURECULLINSTANCES_INTERNAL_INJECTED_OFFSET))(_unity_self, accelStruct, cullingConfig);
		}
		*/

		static ::System::Void PrepareForBuildRayTracingAccelerationStructure_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPAREFORBUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_INJECTED_OFFSET))(_unity_self, accelStruct);
		}

		/*
		static ::System::Void BuildRayTracingAccelerationStructure_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct, ::UnityEngine::Vector3& relativeOrigin)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BUILDRAYTRACINGACCELERATIONSTRUCTURE_INTERNAL_INJECTED_OFFSET))(_unity_self, accelStruct, relativeOrigin);
		}
		*/

		static ::System::Void SetTargetQueueType_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Rendering::ComputeQueueType queueType)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETTARGETQUEUETYPE_INTERNAL_INJECTED_OFFSET))(_unity_self, queueType);
		}

		static ::System::IntPtr CreateGPUFence_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::GraphicsFenceType, ::UnityEngine::Rendering::SynchronisationStageFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATEGPUFENCE_INTERNAL_INJECTED_OFFSET))(_unity_self, fenceType, stage);
		}

		static ::System::Void WaitOnGPUFence_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::IntPtr fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags stage)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IntPtr, ::UnityEngine::Rendering::SynchronisationStageFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_WAITONGPUFENCE_INTERNAL_INJECTED_OFFSET))(_unity_self, fencePtr, stage);
		}

		static ::System::Void AutoProfileCamera_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::String* camName)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_INJECTED_OFFSET))(_unity_self, camName);
		}
	};
}
