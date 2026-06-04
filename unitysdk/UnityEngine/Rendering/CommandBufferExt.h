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

#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1B167B40)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B1676D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B165770)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B167740)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DISABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B167B20)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B165380)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1B167820)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0x1B167A90)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B167B00)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1B167B60)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B165800)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B165360)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETRAWBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1658B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_1_OFFSET UNITYSDK_OFFSET(0x1B166820)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1B166420)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_CMDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B167B90)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_ISSYSTEMCMDVALID_OFFSET UNITYSDK_OFFSET(0x1B1657D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1B167BA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_USECUSTOMCMD_OFFSET UNITYSDK_OFFSET(0x1B167BE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_PREPAREDRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0x1B167910)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B165760)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1B165B60)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1B1658D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1B165CC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1B166270)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B166180)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1B166120)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1B165A00)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1B166CA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1B166CC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1B166CD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x1B167210)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B1669A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_CMDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B167B80)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_USECUSTOMCMD_OFFSET UNITYSDK_OFFSET(0x1B167C00)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__ADDSETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B167470)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B165110)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__DEPTHBUFFERFORMATFROMBITS_OFFSET UNITYSDK_OFFSET(0x1B1666E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1B166720)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEXTYPE_OFFSET UNITYSDK_OFFSET(0x1B167C60)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_1_OFFSET UNITYSDK_OFFSET(0x1B167C10)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_OFFSET UNITYSDK_OFFSET(0x1B1663D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETORCLEARFLAGS_OFFSET UNITYSDK_OFFSET(0x1B166700)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B1669D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExt_TypeDefinitionIndex = 33752;

	class CommandBufferExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::CommandBufferExt_RenderCommandSetRTBuffers* StaticGet__RTBuffersCmd()
		{
			return (::UnityEngine::Rendering::CommandBufferExt_RenderCommandSetRTBuffers*)Il2CppClass::FromTypeDefinitionIndex(CommandBufferExt_TypeDefinitionIndex)->GetStaticField(0x49630);
		}
		static ::UnityEngine::Rendering::CommandBufferExt_RenderTextureDesc* StaticGet__TmpRTDesc()
		{
			return (::UnityEngine::Rendering::CommandBufferExt_RenderTextureDesc*)Il2CppClass::FromTypeDefinitionIndex(CommandBufferExt_TypeDefinitionIndex)->GetStaticField(0xDB20);
		}
		// static const ::System::Int32 kMaxSupportedRenderTargets = 0x8; // 0x0
		::UnityEngine::Rendering::GrowableBuffer* _Buffer; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _RTIndex; // 0x18
		::UnityEngine::Rendering::CommandBuffer* _CmdInternal_k__BackingField; // 0x20
		::System::Boolean _UseCustomCmd; // 0x28
		::UnityEngine::Rendering::DisposeUtility _Dispose; // 0x29

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

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void* GetRawBuffer()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETRAWBUFFER_OFFSET))(this);
		}

		::System::Void SetGlobalFloat(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalVector(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalColor(::System::Int32 a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalMatrix(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALVECTORARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalTexture(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetGlobalTexture_1(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETGLOBALTEXTURE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetTemporaryRT(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::FilterMode a5, ::UnityEngine::RenderTextureFormat a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetTemporaryRT_1(::System::Int32 a1, ::UnityEngine::RenderTextureDescriptor& a2, ::UnityEngine::FilterMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GETTEMPORARYRT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_OFFSET))(this, a1);
		}

		::System::Void SetRenderTarget_1(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetRenderTarget_2(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetRenderTarget_3(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderTargetIdentifier& a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetRenderTarget_4(::UnityEngine::Rendering::RenderTargetBinding& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBinding&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SETRENDERTARGET_4_OFFSET))(this, a1);
		}

		::System::Void ClearRenderTarget(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Color& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_CLEARRENDERTARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_COPYTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWMESH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void PrepareDrawRenderers(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::SortingCriteria a3, ::UnityEngine::Rendering::FilteringSettings& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::SortingCriteria, ::UnityEngine::Rendering::FilteringSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_PREPAREDRAWRENDERERS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DrawRenderers(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DRAWRENDERERS_OFFSET))(this, a1);
		}

		::System::Void EnableShaderKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENABLESHADERKEYWORD_OFFSET))(this, a1);
		}

		::System::Void DisableShaderKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_DISABLESHADERKEYWORD_OFFSET))(this, a1);
		}

		::System::Void BeginSample(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_BEGINSAMPLE_OFFSET))(this, a1);
		}

		::System::Void EndSample(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_ENDSAMPLE_OFFSET))(this, a1);
		}

		::System::Void set_CmdInternal(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_CMDINTERNAL_OFFSET))(this, a1);
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

		::System::Void set_UseCustomCmd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_SET_USECUSTOMCMD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSystemCmdValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_GET_ISSYSTEMCMDVALID_OFFSET))(this);
		}

		::UnityEngine::Rendering::DepthBufferFormat _DepthBufferFormatFromBits(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::DepthBufferFormat(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__DEPTHBUFFERFORMATFROMBITS_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTextureFlags _SetOrClearFlags(::UnityEngine::Rendering::RenderTextureFlags a1, ::UnityEngine::Rendering::RenderTextureFlags a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Rendering::RenderTextureFlags(*)(::PVOID, ::UnityEngine::Rendering::RenderTextureFlags, ::UnityEngine::Rendering::RenderTextureFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETORCLEARFLAGS_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _PutRT(::UnityEngine::Rendering::RenderTargetIdentifier& a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_OFFSET))(this, a1);
		}

		::System::UInt32 _PutRT_1(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__PUTRT_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BuiltinRenderTextureType _GetTexType(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Rendering::BuiltinRenderTextureType(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEXTYPE_OFFSET))(this, a1);
		}

		::System::Void _GetTemporaryRT(::System::Int32 a1, ::UnityEngine::FilterMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__GETTEMPORARYRT_OFFSET))(this, a1, a2);
		}

		::System::Void _SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__SETRENDERTARGET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _AddSetRenderTarget(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::System::Int32 a5, ::UnityEngine::CubemapFace a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT__ADDSETRENDERTARGET_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
