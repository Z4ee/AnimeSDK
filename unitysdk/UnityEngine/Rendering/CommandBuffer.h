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

#define UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1ED57930)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_1_OFFSET UNITYSDK_OFFSET(0x1ED59CF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_2_OFFSET UNITYSDK_OFFSET(0x1ED59D80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_3_OFFSET UNITYSDK_OFFSET(0x1ED59E10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED574E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1ED57490)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0x1ED59C70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57480)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED57430)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRANDOMWRITETARGETS_OFFSET UNITYSDK_OFFSET(0x1ED573F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1ED57780)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1ED57790)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1ED577F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57770)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1ED57760)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ED57330)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1ED59B60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1ED59BD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED57420)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED59AF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ED578D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_1_OFFSET UNITYSDK_OFFSET(0x1ED58F80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1ED58F70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1ED58D10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED58D30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1ED598E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_1_OFFSET UNITYSDK_OFFSET(0x1ED591F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_2_OFFSET UNITYSDK_OFFSET(0x1ED59260)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1ED58F90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x1ED59A90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1ED59800)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_2_OFFSET UNITYSDK_OFFSET(0x1ED59870)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_OFFSET UNITYSDK_OFFSET(0x1ED596B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1ED59590)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_1_OFFSET UNITYSDK_OFFSET(0x1ED594D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_2_OFFSET UNITYSDK_OFFSET(0x1ED59510)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_3_OFFSET UNITYSDK_OFFSET(0x1ED59550)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0x1ED592D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x1ED578C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1ED57940)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ED58CA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED576C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED576B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_1_OFFSET UNITYSDK_OFFSET(0x1ED57500)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_2_OFFSET UNITYSDK_OFFSET(0x1ED57570)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_3_OFFSET UNITYSDK_OFFSET(0x1ED575D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_4_OFFSET UNITYSDK_OFFSET(0x1ED57620)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_5_OFFSET UNITYSDK_OFFSET(0x1ED576D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_6_OFFSET UNITYSDK_OFFSET(0x1ED57710)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1ED574F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1ED57320)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x1ED57230)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTEINDIRECT_OFFSET UNITYSDK_OFFSET(0x1ED57300)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1ED572F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1ED573B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57350)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1ED57340)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED573D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x1ED573C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED573A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_OFFSET UNITYSDK_OFFSET(0x1ED57390)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57380)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1ED57370)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0x1ED57360)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1ED572D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED57960)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEV2_OFFSET UNITYSDK_OFFSET(0x1ED59FC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED57950)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATA_OFFSET UNITYSDK_OFFSET(0x1ED59F20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1ED57240)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x1ED57750)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1ED58DD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCAMERARLM_OFFSET UNITYSDK_OFFSET(0x1ED5A060)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEBUFFERPARAM_1_OFFSET UNITYSDK_OFFSET(0x1ED58F30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEBUFFERPARAM_OFFSET UNITYSDK_OFFSET(0x1ED572E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x1ED57250)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEINTPARAM_OFFSET UNITYSDK_OFFSET(0x1ED57260)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXARRAYPARAM_OFFSET UNITYSDK_OFFSET(0x1ED572C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED572B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_OFFSET UNITYSDK_OFFSET(0x1ED572A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_1_OFFSET UNITYSDK_OFFSET(0x1ED58F00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1ED58EA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORARRAYPARAM_OFFSET UNITYSDK_OFFSET(0x1ED57290)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_1_OFFSET UNITYSDK_OFFSET(0x1ED58E50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57280)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET UNITYSDK_OFFSET(0x1ED57270)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCSRT_OFFSET UNITYSDK_OFFSET(0x1ED5A050)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x1ED57920)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57890)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED57880)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1ED59EA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1ED57840)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x1ED57850)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED578B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1ED578A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTUREEXT_OFFSET UNITYSDK_OFFSET(0x1ED5A010)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1ED59F00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET UNITYSDK_OFFSET(0x1ED57910)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED59EE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1ED57900)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57870)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1ED57860)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_OFFSET UNITYSDK_OFFSET(0x1ED59AB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED573E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED58C70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED583C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_1_OFFSET UNITYSDK_OFFSET(0x1ED5A030)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED5A040)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_OFFSET UNITYSDK_OFFSET(0x1ED5A020)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED58C90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_OFFSET UNITYSDK_OFFSET(0x1ED58770)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED58C80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED585B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED58C60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED57C90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_10_OFFSET UNITYSDK_OFFSET(0x1ED58410)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_11_OFFSET UNITYSDK_OFFSET(0x1ED585C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_12_OFFSET UNITYSDK_OFFSET(0x1ED58780)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1ED57AF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1ED57A10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x1ED57BC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x1ED57CA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_5_OFFSET UNITYSDK_OFFSET(0x1ED57E60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_6_OFFSET UNITYSDK_OFFSET(0x1ED580B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_7_OFFSET UNITYSDK_OFFSET(0x1ED57F60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_8_OFFSET UNITYSDK_OFFSET(0x1ED582B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_9_OFFSET UNITYSDK_OFFSET(0x1ED583D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1ED57970)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED57410)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1ED57400)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED578F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0x1ED578E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1ED57310)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_VALIDATEAGAINSTEXECUTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1ED577E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED58DB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBuffer_TypeDefinitionIndex = 4728;

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

		::System::Void Internal_DispatchComputeIndirect(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::UnityEngine::ComputeBuffer* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTEINDIRECT_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void SetComputeVectorParam_1(::UnityEngine::ComputeShader* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComputeTextureParam(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::String* a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetComputeTextureParam_1(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::RenderTargetIdentifier a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetComputeBufferParam_1(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::String* a3, ::UnityEngine::ComputeBuffer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEBUFFERPARAM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DispatchCompute(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DispatchCompute_1(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::UnityEngine::ComputeBuffer* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_1_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void SetCSRT(::UnityEngine::ComputeShader* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCSRT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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
