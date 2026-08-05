#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ClearFlag.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MSAASamples.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine::NAPRenderPipeline0 { class NativeAdditionalLightData_NativeSRP; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CALCULATEOBLIQUEMATRIX_OFFSET UNITYSDK_OFFSET(0x1F346C10)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CALCULATEREFLECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1F347090)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CAMERASPACEPLANE_OFFSET UNITYSDK_OFFSET(0x1F346930)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CLEAREXTRALIGHTDATACACHE_OFFSET UNITYSDK_OFFSET(0x1F347E60)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1F3486F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1F347490)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_FIXUPDEPTHSLICE_OFFSET UNITYSDK_OFFSET(0x1F348590)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_FREEZETHISCAMERA_OFFSET UNITYSDK_OFFSET(0x1F348B50)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETEXTRALIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1F347F60)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETFROZENRTID_OFFSET UNITYSDK_OFFSET(0x1F348A50)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETRENDERTARGETAUTONAME_1_OFFSET UNITYSDK_OFFSET(0x1F347750)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETRENDERTARGETAUTONAME_OFFSET UNITYSDK_OFFSET(0x1F347650)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_ISCAMERAPROJECTIONMATRIXFLIPPED_OFFSET UNITYSDK_OFFSET(0x1F3471F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_LUMINANCE_OFFSET UNITYSDK_OFFSET(0x1F347B60)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_PREPARELIFTGAMMAGAIN_OFFSET UNITYSDK_OFFSET(0x1F347B90)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET UNITYSDK_OFFSET(0x1F347990)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SAFERELEASE_OFFSET UNITYSDK_OFFSET(0x1F347640)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1F347450)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F347410)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1F348760)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1F348880)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1F3485A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SGN_OFFSET UNITYSDK_OFFSET(0x1F346900)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_TOCOLOR_OFFSET UNITYSDK_OFFSET(0x1F3468F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F348DF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NAPRenderingUtils_TypeDefinitionIndex = 5995;

	class NAPRenderingUtils : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_NativeAdditionalLightDataType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(NAPRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5420);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP*>** StaticGet_s_CachedLightExtraDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP*>**)Il2CppClass::FromTypeDefinitionIndex(NAPRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x5428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Color ToColor(::UnityEngine::Vector4 v4)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_TOCOLOR_OFFSET))(v4);
		}

		static ::System::Single sgn(::System::Single a)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SGN_OFFSET))(a);
		}

		static ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Matrix4x4& worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal, ::System::Single sideSign, ::System::Single clipPlaneOffset)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CAMERASPACEPLANE_OFFSET))(worldToCameraMatrix, pos, normal, sideSign, clipPlaneOffset);
		}

		static ::System::Void CalculateObliqueMatrix(::UnityEngine::Matrix4x4& projection, ::UnityEngine::Vector4 clipPlane)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CALCULATEOBLIQUEMATRIX_OFFSET))(projection, clipPlane);
		}

		static ::System::Void CalculateReflectionMatrix(::UnityEngine::Matrix4x4& reflectionMat, ::UnityEngine::Vector4 plane)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CALCULATEREFLECTIONMATRIX_OFFSET))(reflectionMat, plane);
		}

		static ::System::Boolean IsCameraProjectionMatrixFlipped(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_ISCAMERAPROJECTIONMATRIXFLIPPED_OFFSET))(cameraData);
		}

		static ::System::Void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 keyword, ::System::Boolean state)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETKEYWORD_OFFSET))(cmd, keyword, state);
		}

		static ::System::Void SetKeyword_1(::UnityEngine::Material* material, ::System::String* keyword, ::System::Boolean state)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETKEYWORD_1_OFFSET))(material, keyword, state);
		}

		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_DESTROY_OFFSET))(obj);
		}

		static ::System::Void SafeRelease(::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SAFERELEASE_OFFSET))(buffer);
		}

		static ::System::String* GetRenderTargetAutoName(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format, ::System::String* name, ::System::Boolean mips, ::System::Boolean enableMSAA, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETRENDERTARGETAUTONAME_OFFSET))(width, height, depth, format, name, mips, enableMSAA, msaaSamples);
		}

		static ::System::String* GetRenderTargetAutoName_1(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::System::String* format, ::System::String* name, ::System::Boolean mips, ::System::Boolean enableMSAA, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETRENDERTARGETAUTONAME_1_OFFSET))(width, height, depth, format, name, mips, enableMSAA, msaaSamples);
		}

		static ::System::Void PrepareShadowsMidtonesHighlights(::UnityEngine::Vector4 inShadows, ::UnityEngine::Vector4 inMidtones, ::UnityEngine::Vector4 inHighlights, ::UnityEngine::Vector4& shadows, ::UnityEngine::Vector4& midtones, ::UnityEngine::Vector4& highlights)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET))(inShadows, inMidtones, inHighlights, shadows, midtones, highlights);
		}

		static ::System::Single Luminance(::UnityEngine::Color color)
		{
			return ((::System::Single(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_LUMINANCE_OFFSET))(color);
		}

		static ::System::Void PrepareLiftGammaGain(::UnityEngine::Vector4 inLift, ::UnityEngine::Vector4 inGamma, ::UnityEngine::Vector4 inGain, ::UnityEngine::Vector4& lift, ::UnityEngine::Vector4& gamma, ::UnityEngine::Vector4& gain)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_PREPARELIFTGAMMAGAIN_OFFSET))(inLift, inGamma, inGain, lift, gamma, gain);
		}

		static ::System::Void ClearExtraLightDataCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CLEAREXTRALIGHTDATACACHE_OFFSET))();
		}

		static ::System::Boolean GetExtraLightData(::UnityEngine::Light* light, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP*& extraLightData)
		{
			return ((::System::Boolean(*)(::UnityEngine::Light*, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP*&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETEXTRALIGHTDATA_OFFSET))(light, extraLightData);
		}

		static ::System::Int32 FixupDepthSlice(::System::Int32 depthSlice, ::UnityEngine::CubemapFace cubemapFace)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::CubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_FIXUPDEPTHSLICE_OFFSET))(depthSlice, cubemapFace);
		}

		static ::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETRENDERTARGET_OFFSET))(cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_CLEARRENDERTARGET_OFFSET))(cmd, clearFlag, clearColor);
		}

		static ::System::Void SetRenderTarget_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::System::Int32 miplevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETRENDERTARGET_1_OFFSET))(cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
		}

		static ::System::Void SetRenderTarget_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag clearFlag, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::NAPRenderPipeline0::ClearFlag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_SETRENDERTARGET_2_OFFSET))(cmd, buffer, loadAction, storeAction, clearFlag, clearColor);
		}

		static ::System::Boolean GetFrozenRTID(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier& rtid)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_GETFROZENRTID_OFFSET))(cameraData, rtid);
		}

		static ::System::Void FreezeThisCamera(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& frozenRTID)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERINGUTILS_FREEZETHISCAMERA_OFFSET))(renderingData, cmdWrapper, frozenRTID);
		}
	};
}
