#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectInt.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/CommandBufferExecutionFlags.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1BFA4BC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_1_OFFSET UNITYSDK_OFFSET(0x1BFA6E90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_2_OFFSET UNITYSDK_OFFSET(0x1BFA6F20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_3_OFFSET UNITYSDK_OFFSET(0x1BFA6FB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4770)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1BFA4720)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0x1BFA6E10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4710)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1BFA46C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRANDOMWRITETARGETS_OFFSET UNITYSDK_OFFSET(0x1BFA4680)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1BFA4A10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1BFA4A20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1BFA4A80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4A00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1BFA49F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BFA45C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1BFA6D00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1BFA6D70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFA46B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BFA6C90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1BFA4B60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1BFA6160)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BFA5F80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFA5FA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1BFA6A80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_1_OFFSET UNITYSDK_OFFSET(0x1BFA63B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_2_OFFSET UNITYSDK_OFFSET(0x1BFA6420)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1BFA6170)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x1BFA6C30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1BFA69A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_2_OFFSET UNITYSDK_OFFSET(0x1BFA6A10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_OFFSET UNITYSDK_OFFSET(0x1BFA6850)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1BFA6730)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_1_OFFSET UNITYSDK_OFFSET(0x1BFA6670)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_2_OFFSET UNITYSDK_OFFSET(0x1BFA66B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_3_OFFSET UNITYSDK_OFFSET(0x1BFA66F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0x1BFA6490)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1BFA4B50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1BFA4BD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BFA5F10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4950)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BFA4940)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_1_OFFSET UNITYSDK_OFFSET(0x1BFA4790)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_2_OFFSET UNITYSDK_OFFSET(0x1BFA4800)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_3_OFFSET UNITYSDK_OFFSET(0x1BFA4860)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_4_OFFSET UNITYSDK_OFFSET(0x1BFA48B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_5_OFFSET UNITYSDK_OFFSET(0x1BFA4960)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_6_OFFSET UNITYSDK_OFFSET(0x1BFA49A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1BFA4780)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1BFA45B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFA44D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1BFA4590)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1BFA4640)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA45E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1BFA45D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4660)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x1BFA4650)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4630)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_OFFSET UNITYSDK_OFFSET(0x1BFA4620)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4610)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1BFA4600)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0x1BFA45F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA4570)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFA4BF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEV2_OFFSET UNITYSDK_OFFSET(0x1BFA7160)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFA4BE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATA_OFFSET UNITYSDK_OFFSET(0x1BFA70C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFA44E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1BFA49E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BFA6040)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCAMERARLM_OFFSET UNITYSDK_OFFSET(0x1BFA71F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEBUFFERPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA4580)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA44F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEINTPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA4500)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXARRAYPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA4560)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4550)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA4540)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_1_OFFSET UNITYSDK_OFFSET(0x1BFA6130)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA60C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORARRAYPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA4530)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4520)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET UNITYSDK_OFFSET(0x1BFA4510)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFA4BB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4B20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1BFA4B10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1BFA7040)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1BFA4AD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x1BFA4AE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4B40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1BFA4B30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTUREEXT_OFFSET UNITYSDK_OFFSET(0x1BFA71B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1BFA70A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET UNITYSDK_OFFSET(0x1BFA4BA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BFA7080)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1BFA4B90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4B00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFA4AF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_OFFSET UNITYSDK_OFFSET(0x1BFA6C50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1BFA4670)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA5EE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFA5650)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_1_OFFSET UNITYSDK_OFFSET(0x1BFA71D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA71E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_OFFSET UNITYSDK_OFFSET(0x1BFA71C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA5F00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_OFFSET UNITYSDK_OFFSET(0x1BFA5A00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA5EF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFA5840)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA5ED0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BFA4F20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_10_OFFSET UNITYSDK_OFFSET(0x1BFA56A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_11_OFFSET UNITYSDK_OFFSET(0x1BFA5850)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_12_OFFSET UNITYSDK_OFFSET(0x1BFA5A10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1BFA4D80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1BFA4CA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1BFA4E50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x1BFA4F30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_5_OFFSET UNITYSDK_OFFSET(0x1BFA50F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_6_OFFSET UNITYSDK_OFFSET(0x1BFA5340)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_7_OFFSET UNITYSDK_OFFSET(0x1BFA51F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_8_OFFSET UNITYSDK_OFFSET(0x1BFA5540)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_9_OFFSET UNITYSDK_OFFSET(0x1BFA5660)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1BFA4C00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA46A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1BFA4690)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFA4B80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0x1BFA4B70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BFA45A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_VALIDATEAGAINSTEXECUTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1BFA4A70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFA6020)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBuffer_TypeDefinitionIndex = 4718;

	class CommandBuffer : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr InitBuffer()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INITBUFFER_OFFSET))();
		}

		::System::Void ReleaseBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASEBUFFER_OFFSET))(this);
		}

		::System::Void SetComputeFloatParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEFLOATPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComputeIntParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEINTPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComputeVectorParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORARRAYPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComputeMatrixParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Matrix4x4>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXARRAYPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Internal_SetComputeTextureParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::RenderTargetIdentifier& a4, ::System::Int32 a5, ::UnityEngine::Rendering::RenderTextureSubElement a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetComputeBufferParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::ComputeBuffer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEBUFFERPARAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_DispatchCompute(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void set_name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_sizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEAR_OFFSET))(this);
		}

		::System::Void Internal_DrawMesh(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Internal_DrawRenderer(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5, ::System::Boolean a6, ::System::UInt32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Internal_DrawProcedural(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::System::Int32 a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Internal_DrawProceduralIndirect(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Internal_DrawOcclusionMesh(::UnityEngine::RectInt a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_OFFSET))(this, a1);
		}

		::System::Void SetRandomWriteTarget_Texture(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_TEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearRandomWriteTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRANDOMWRITETARGETS_OFFSET))(this);
		}

		::System::Void SetViewport(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_OFFSET))(this, a1);
		}

		::System::Void CopyTexture_Internal(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::Rendering::RenderTargetIdentifier& a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_INTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void Blit_Texture(::UnityEngine::Texture* a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Blit_Identifier(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GetTemporaryRT(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::FilterMode a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6, ::System::Int32 a7, ::System::Boolean a8, ::UnityEngine::RenderTextureMemoryless a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void GetTemporaryRT_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::FilterMode a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6, ::System::Int32 a7, ::System::Boolean a8, ::UnityEngine::RenderTextureMemoryless a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void GetTemporaryRT_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::FilterMode a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GetTemporaryRT_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::FilterMode a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetTemporaryRT_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::FilterMode a5, ::UnityEngine::RenderTextureFormat a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetTemporaryRTWithDescriptor(::System::Int32 a1, ::UnityEngine::RenderTextureDescriptor a2, ::UnityEngine::FilterMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetTemporaryRT_5(::System::Int32 a1, ::UnityEngine::RenderTextureDescriptor a2, ::UnityEngine::FilterMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetTemporaryRT_6(::System::Int32 a1, ::UnityEngine::RenderTextureDescriptor a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_6_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseTemporaryRT(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASETEMPORARYRT_OFFSET))(this, a1);
		}

		::System::Void ClearRenderTarget(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearRenderTarget_1(::System::Boolean a1, ::System::Boolean a2, ::Il2CppArray<::UnityEngine::Color>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::UnityEngine::Color>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearRenderTarget_2(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearRenderTarget_3(::System::Boolean a1, ::System::Boolean a2, ::Il2CppArray<::UnityEngine::Color>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetGlobalFloat(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalVector(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalColor(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalMatrix(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void EnableShaderKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESHADERKEYWORD_OFFSET))(this, a1);
		}

		::System::Void DisableShaderKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESHADERKEYWORD_OFFSET))(this, a1);
		}

		::System::Void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET))(this, a1, a2);
		}

		::System::Boolean ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags a1, ::UnityEngine::Rendering::CommandBufferExecutionFlags a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBufferExecutionFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_VALIDATEAGAINSTEXECUTIONFLAGS_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTORARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalTexture_Impl(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Rendering::RenderTextureSubElement a3, ::System::Int16 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTextureSubElement, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetGlobalBuffer(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void BeginSample(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET))(this, a1);
		}

		::System::Void EndSample(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET))(this, a1);
		}

		::System::Void IssuePluginEventAndDataInternal(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IssuePluginCustomTextureUpdateInternal(::System::IntPtr a1, ::UnityEngine::Texture* a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::Texture*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(this, a1);
		}

		::System::Void SetRenderTarget_1(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetRenderTarget_2(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetRenderTarget_3(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5, ::UnityEngine::Rendering::RenderBufferLoadAction a6, ::UnityEngine::Rendering::RenderBufferStoreAction a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetRenderTarget_4(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::System::Int32 a2, ::UnityEngine::CubemapFace a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetRenderTarget_5(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_5_OFFSET))(this, a1, a2);
		}

		::System::Void SetRenderTarget_6(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::System::Int32 a3, ::UnityEngine::CubemapFace a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetRenderTarget_7(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetRenderTarget_8(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6, ::UnityEngine::Rendering::RenderBufferLoadAction a7, ::UnityEngine::Rendering::RenderBufferStoreAction a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SetRenderTarget_9(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_9_OFFSET))(this, a1, a2);
		}

		::System::Void SetRenderTarget_10(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_10_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetRenderTarget_11(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::System::Int32 a3, ::UnityEngine::CubemapFace a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_11_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetRenderTarget_12(::UnityEngine::Rendering::RenderTargetBinding a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_12_OFFSET))(this, a1);
		}

		::System::Void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5, ::UnityEngine::Rendering::RenderBufferLoadAction a6, ::UnityEngine::Rendering::RenderBufferStoreAction a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6, ::UnityEngine::Rendering::RenderBufferLoadAction a7, ::UnityEngine::Rendering::RenderBufferStoreAction a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SetRenderTargetMulti_Internal(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* a3, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6, ::UnityEngine::Rendering::RenderBufferLoadAction a7, ::UnityEngine::Rendering::RenderBufferStoreAction a8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SetRenderTargetMultiSubtarget(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* a3, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6, ::System::Int32 a7, ::UnityEngine::CubemapFace a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void SetComputeTextureParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::String* a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetComputeTextureParam_1(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DispatchCompute(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DrawMesh_1(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DrawMesh_2(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Material* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DrawRenderer(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5, ::System::Boolean a6, ::System::UInt32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DrawRenderer_1(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DrawRenderer_2(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DrawRenderer_3(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_3_OFFSET))(this, a1, a2);
		}

		::System::Void DrawProcedural(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::System::Int32 a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DrawProceduralIndirect(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DrawProceduralIndirect_1(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DrawProceduralIndirect_2(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::UnityEngine::ComputeBuffer* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DrawMeshInstancedIndirect(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESHINSTANCEDINDIRECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DrawOcclusionMesh(::UnityEngine::RectInt a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWOCCLUSIONMESH_OFFSET))(this, a1);
		}

		::System::Void SetRandomWriteTarget(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTexture_1(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CopyTexture_2(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::Rendering::RenderTargetIdentifier a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void Blit(::UnityEngine::Texture* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET))(this, a1, a2);
		}

		::System::Void Blit_1(::UnityEngine::Texture* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Blit_2(::UnityEngine::Texture* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Material* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Blit_3(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::UnityEngine::Material* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetGlobalFloat_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalTexture(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalTexture_1(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IssuePluginEventAndData(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IssuePluginCustomTextureUpdateV2(::System::IntPtr a1, ::UnityEngine::Texture* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::Texture*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEV2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetGlobalTextureExt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTUREEXT_OFFSET))(this, a1, a2);
		}

		::System::Void SetRenderTargetExt(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetRenderTargetExt_1(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::System::Int32 a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetCameraRLM(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCAMERARLM_OFFSET))(this, a1, a2);
		}

		::System::Void SetComputeVectorParam_Injected(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComputeMatrixParam_Injected(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Internal_DrawMesh_Injected(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::MaterialPropertyBlock* a6, ::Il2CppArray<::System::String*>* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Internal_DrawProcedural_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::System::Int32 a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Internal_DrawProceduralIndirect_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::UnityEngine::ComputeBuffer* a5, ::System::Int32 a6, ::UnityEngine::MaterialPropertyBlock* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Internal_DrawOcclusionMesh_Injected(::UnityEngine::RectInt& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetViewport_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Blit_Texture_Injected(::UnityEngine::Texture* a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::Vector2& a5, ::UnityEngine::Vector2& a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Blit_Identifier_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::UnityEngine::Vector2& a5, ::UnityEngine::Vector2& a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GetTemporaryRTWithDescriptor_Injected(::System::Int32 a1, ::UnityEngine::RenderTextureDescriptor& a2, ::UnityEngine::FilterMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearRenderTarget_Injected(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Color& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetGlobalVector_Injected(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalColor_Injected(::System::Int32 a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalMatrix_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetViewProjectionMatrices_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetRenderTargetSingle_Internal_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2, ::UnityEngine::Rendering::RenderBufferStoreAction a3, ::UnityEngine::Rendering::RenderBufferLoadAction a4, ::UnityEngine::Rendering::RenderBufferStoreAction a5, ::UnityEngine::Rendering::RenderBufferLoadAction a6, ::UnityEngine::Rendering::RenderBufferStoreAction a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetRenderTargetColorDepth_Internal_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6, ::UnityEngine::Rendering::RenderBufferLoadAction a7, ::UnityEngine::Rendering::RenderBufferStoreAction a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SetRenderTargetMulti_Internal_Injected(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* a3, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6, ::UnityEngine::Rendering::RenderBufferLoadAction a7, ::UnityEngine::Rendering::RenderBufferStoreAction a8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SetRenderTargetMultiSubtarget_Injected(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* a3, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6, ::System::Int32 a7, ::UnityEngine::CubemapFace a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void SetRenderTargetExt_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& a1, ::System::Int32 a2, ::UnityEngine::Rendering::RenderBufferLoadAction a3, ::UnityEngine::Rendering::RenderBufferStoreAction a4, ::UnityEngine::Rendering::RenderBufferLoadAction a5, ::UnityEngine::Rendering::RenderBufferStoreAction a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
