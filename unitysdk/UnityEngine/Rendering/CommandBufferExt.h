#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinRenderTextureType.h"
#include "unitysdk/UnityEngine/Rendering/CommandBufferExt_RenderCommandSetRTBuffers.h"
#include "unitysdk/UnityEngine/Rendering/CommandBufferExt_RenderTextureDesc.h"
#include "unitysdk/UnityEngine/Rendering/DepthBufferFormat.h"
#include "unitysdk/UnityEngine/Rendering/DisposeUtility.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureFlags.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class GrowableBuffer; }

#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1A30B180)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1A30A1C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A3055D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A30A230)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DISABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A30B160)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3052A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1A30A310)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0x1A30AEC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A30B140)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1A30B1A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A305670)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A305280)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETRAWBUFFER_OFFSET UNITYSDK_OFFSET(0x1A305720)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_1_OFFSET UNITYSDK_OFFSET(0x1A307FB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1A307790)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_CMDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A30B1D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_ISSYSTEMCMDVALID_OFFSET UNITYSDK_OFFSET(0x1A305640)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1A30B1E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_USECUSTOMCMD_OFFSET UNITYSDK_OFFSET(0x1A30B220)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_PREPAREDRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0x1A30A510)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A3055C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1A3062E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1A305740)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1A306850)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A306FD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A306EE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1A306D80)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A305D70)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1A308C50)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1A308C70)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1A308C80)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x1A309240)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1A308140)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_CMDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A30B1C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_USECUSTOMCMD_OFFSET UNITYSDK_OFFSET(0x1A30B240)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__ADDSETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1A3094F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A305030)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__DEPTHBUFFERFORMATFROMBITS_OFFSET UNITYSDK_OFFSET(0x1A307A50)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1A307A90)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEXTYPE_OFFSET UNITYSDK_OFFSET(0x1A30B280)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_1_OFFSET UNITYSDK_OFFSET(0x1A30B250)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_OFFSET UNITYSDK_OFFSET(0x1A307650)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETORCLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1A307A70)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1A308170)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExt_TypeDefinitionIndex = 33470;

	class CommandBufferExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::CommandBufferExt_RenderCommandSetRTBuffers* StaticGet__RTBuffersCmd()
		{
			return (::UnityEngine::Rendering::CommandBufferExt_RenderCommandSetRTBuffers*)Il2CppClass::FromTypeDefinitionIndex(CommandBufferExt_TypeDefinitionIndex)->GetStaticField(0x67290);
		}
		static ::UnityEngine::Rendering::CommandBufferExt_RenderTextureDesc* StaticGet__TmpRTDesc()
		{
			return (::UnityEngine::Rendering::CommandBufferExt_RenderTextureDesc*)Il2CppClass::FromTypeDefinitionIndex(CommandBufferExt_TypeDefinitionIndex)->GetStaticField(0x112E0);
		}
		// static const ::System::Int32 kMaxSupportedRenderTargets = 0x8; // 0x0
		::UnityEngine::Rendering::GrowableBuffer* _Buffer; // 0x10
		::UnityEngine::Rendering::CommandBuffer* _CmdInternal_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _RTIndex; // 0x20
		::UnityEngine::Rendering::DisposeUtility _Dispose; // 0x28
		::System::Boolean _UseCustomCmd; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DISPOSE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RELEASE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_CLEAR_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_EXECUTE_OFFSET))(this, context);
		}

		::System::Void* GetRawBuffer()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETRAWBUFFER_OFFSET))(this);
		}

		::System::Void SetGlobalFloat(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALFLOAT_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalVector(::System::Int32 nameID, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTOR_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalColor(::System::Int32 nameID, ::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALCOLOR_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalMatrix(::System::Int32 nameID, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALMATRIX_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTORARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetGlobalTexture(::System::Int32 nameID, ::UnityEngine::Texture* value, ::System::Int16 mipSlice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_OFFSET))(this, nameID, value, mipSlice);
		}

		::System::Void SetGlobalTexture_1(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rtID, ::System::Int16 mipSlice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_1_OFFSET))(this, nameID, rtID, mipSlice);
		}

		::System::Void GetTemporaryRT(::System::Int32 nameID, ::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_OFFSET))(this, nameID, width, height, depthBuffer, filter, format);
		}

		::System::Void GetTemporaryRT_1(::System::Int32 nameID, ::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::FilterMode filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_1_OFFSET))(this, nameID, desc, filter);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier& rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_OFFSET))(this, rt);
		}

		::System::Void SetRenderTarget_1(::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_1_OFFSET))(this, rt, loadAction, storeAction);
		}

		::System::Void SetRenderTarget_2(::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_2_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction);
		}

		::System::Void SetRenderTarget_3(::UnityEngine::Rendering::RenderTargetIdentifier& color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_3_OFFSET))(this, color, colorLoadAction, colorStoreAction, depth, depthLoadAction, depthStoreAction);
		}

		::System::Void SetRenderTarget_4(::UnityEngine::Rendering::RenderTargetBinding& binding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBinding&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_4_OFFSET))(this, binding);
		}

		::System::Void ClearRenderTarget(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color& backgroundColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_CLEARRENDERTARGET_OFFSET))(this, clearDepth, clearColor, backgroundColor);
		}

		::System::Void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier& src, ::UnityEngine::Rendering::RenderTargetIdentifier& dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_COPYTEXTURE_OFFSET))(this, src, dst);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::System::String*>* keywords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWMESH_OFFSET))(this, mesh, matrix, material, submeshIndex, shaderPass, properties, keywords);
		}

		::System::Void PrepareDrawRenderers(::System::Int32 cameraIndex, ::System::Int32 drawSettingIndex, ::UnityEngine::Rendering::SortingCriteria criteria, ::UnityEngine::Rendering::FilteringSettings& filterSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::SortingCriteria, ::UnityEngine::Rendering::FilteringSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_PREPAREDRAWRENDERERS_OFFSET))(this, cameraIndex, drawSettingIndex, criteria, filterSettings);
		}

		::System::Void DrawRenderers(::System::Int32 drawSettingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWRENDERERS_OFFSET))(this, drawSettingIndex);
		}

		::System::Void EnableShaderKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENABLESHADERKEYWORD_OFFSET))(this, keyword);
		}

		::System::Void DisableShaderKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DISABLESHADERKEYWORD_OFFSET))(this, keyword);
		}

		::System::Void BeginSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_BEGINSAMPLE_OFFSET))(this, name);
		}

		::System::Void EndSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENDSAMPLE_OFFSET))(this, name);
		}

		::System::Void set_CmdInternal(::UnityEngine::Rendering::CommandBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_CMDINTERNAL_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::CommandBuffer* get_CmdInternal()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_CMDINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_sizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Boolean get_UseCustomCmd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_USECUSTOMCMD_OFFSET))(this);
		}

		::System::Void set_UseCustomCmd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_USECUSTOMCMD_OFFSET))(this, value);
		}

		::System::Boolean get_IsSystemCmdValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_ISSYSTEMCMDVALID_OFFSET))(this);
		}

		::UnityEngine::Rendering::DepthBufferFormat _DepthBufferFormatFromBits(::System::Int32 bits)
		{
			return ((::UnityEngine::Rendering::DepthBufferFormat(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__DEPTHBUFFERFORMATFROMBITS_OFFSET))(this, bits);
		}

		::UnityEngine::Rendering::RenderTextureFlags _SetOrClearFlags(::UnityEngine::Rendering::RenderTextureFlags flags, ::UnityEngine::Rendering::RenderTextureFlags flagsToSetOrClear, ::System::Boolean value)
		{
			return ((::UnityEngine::Rendering::RenderTextureFlags(*)(::PVOID, ::UnityEngine::Rendering::RenderTextureFlags, ::UnityEngine::Rendering::RenderTextureFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETORCLEARFLAGS_OFFSET))(this, flags, flagsToSetOrClear, value);
		}

		::System::UInt32 _PutRT(::UnityEngine::Rendering::RenderTargetIdentifier& rt)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_OFFSET))(this, rt);
		}

		::System::UInt32 _PutRT_1(::System::Int32 instanceID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_1_OFFSET))(this, instanceID);
		}

		::UnityEngine::Rendering::BuiltinRenderTextureType _GetTexType(::UnityEngine::Texture* tex)
		{
			return ((::UnityEngine::Rendering::BuiltinRenderTextureType(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEXTYPE_OFFSET))(this, tex);
		}

		::System::Void _GetTemporaryRT(::System::Int32 nameID, ::UnityEngine::FilterMode filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEMPORARYRT_OFFSET))(this, nameID, filter);
		}

		::System::Void _SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETRENDERTARGET_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction);
		}

		::System::Void _AddSetRenderTarget(::System::Int32 count, ::UnityEngine::Rendering::RenderTargetIdentifier& rtDepth, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__ADDSETRENDERTARGET_OFFSET))(this, count, rtDepth, depthLoadAction, depthStoreAction, mipLevel, cubemapFace, depthSlice);
		}
	};
}
