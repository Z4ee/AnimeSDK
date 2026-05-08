#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FurHelper_ObjectInfos.h"
#include "unitysdk/FurHelper_RenderMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_DRAWFURLAYERSGBUFFER_OFFSET UNITYSDK_OFFSET(0x1B07BC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_DRAWFURLAYERSTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1B07C730)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_DRAWFURLAYERS_OFFSET UNITYSDK_OFFSET(0x1B07BD50)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_GET_SFURLAYERCOUNTSCALE_OFFSET UNITYSDK_OFFSET(0x1B07BB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_GET_SFURMAXSTEPSNUMGLOBAL_OFFSET UNITYSDK_OFFSET(0x1B07BA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_REGISTERTRANSPARENTFUROBJ_OFFSET UNITYSDK_OFFSET(0x1B07B8C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_SET_SFURLAYERCOUNTSCALE_OFFSET UNITYSDK_OFFSET(0x1B07BBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_SET_SFURMAXSTEPSNUMGLOBAL_OFFSET UNITYSDK_OFFSET(0x1B07BAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B07C840)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07C830)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FurHelperManager_TypeDefinitionIndex = 30000;

	class FurHelperManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::FurHelper_ObjectInfos>** StaticGet_s_GBufferFurObjects()
		{
			return (::System::Collections::Generic::List_1<::FurHelper_ObjectInfos>**)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager_TypeDefinitionIndex)->GetStaticField(0x23A80);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_furObjectsMatrices()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager_TypeDefinitionIndex)->GetStaticField(0x23A88);
		}
		static ::System::Collections::Generic::List_1<::FurHelper_ObjectInfos>** StaticGet_s_TransparentFurObjects()
		{
			return (::System::Collections::Generic::List_1<::FurHelper_ObjectInfos>**)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager_TypeDefinitionIndex)->GetStaticField(0x23A90);
		}
		static ::System::Boolean* StaticGet_sGlobalToggle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager_TypeDefinitionIndex)->GetStaticField(0x61C0);
		}
		static ::System::Boolean* StaticGet_sFurAdditionalLightsOffGlobal()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager_TypeDefinitionIndex)->GetStaticField(0x61C1);
		}
		static ::System::Single* StaticGet_s_SFurLayerCountScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager_TypeDefinitionIndex)->GetStaticField(0x61C4);
		}
		static ::System::Int32* StaticGet__sFurMaxStepsNumGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager_TypeDefinitionIndex)->GetStaticField(0x61C8);
		}
		// static const ::System::Single sTickInterval; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterTransparentFurObj(::FurHelper_ObjectInfos obj, ::FurHelper_RenderMode renderMode)
		{
			return ((::System::Void(*)(::FurHelper_ObjectInfos, ::FurHelper_RenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_REGISTERTRANSPARENTFUROBJ_OFFSET))(obj, renderMode);
		}

		static ::System::Int32 get_sFurMaxStepsNumGlobal()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_GET_SFURMAXSTEPSNUMGLOBAL_OFFSET))();
		}

		static ::System::Void set_sFurMaxStepsNumGlobal(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_SET_SFURMAXSTEPSNUMGLOBAL_OFFSET))(value);
		}

		static ::System::Single get_sFurLayerCountScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_GET_SFURLAYERCOUNTSCALE_OFFSET))();
		}

		static ::System::Void set_sFurLayerCountScale(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_SET_SFURLAYERCOUNTSCALE_OFFSET))(value);
		}

		static ::System::Void DrawFurLayersGBuffer(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_DRAWFURLAYERSGBUFFER_OFFSET))(context, renderingData, postCullRenderingData, cmd);
		}

		static ::System::Void DrawFurLayersTransparent(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_DRAWFURLAYERSTRANSPARENT_OFFSET))(context, cmd);
		}

		static ::System::Void DrawFurLayers(::System::Collections::Generic::List_1<::FurHelper_ObjectInfos>* targetList, ::System::Int32 renderPass, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::FurHelper_ObjectInfos>*, ::System::Int32, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER_DRAWFURLAYERS_OFFSET))(targetList, renderPass, context, cmd);
		}
	};
}
