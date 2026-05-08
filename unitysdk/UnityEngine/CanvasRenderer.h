#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1C3D89A0)
#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1C3D88B0)
#define UNITYENGINE_CANVASRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3D84F0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C3D88A0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1C3D8890)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1C3D8790)
#define UNITYENGINE_CANVASRENDERER_DISABLERECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x1C3D8440)
#define UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C3D83C0)
#define UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x1C3D83B0)
#define UNITYENGINE_CANVASRENDERER_GETALPHA_OFFSET UNITYSDK_OFFSET(0x1C3D8500)
#define UNITYENGINE_CANVASRENDERER_GETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C3D83A0)
#define UNITYENGINE_CANVASRENDERER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C3D8360)
#define UNITYENGINE_CANVASRENDERER_GETINHERITEDALPHA_OFFSET UNITYSDK_OFFSET(0x1C3D8590)
#define UNITYENGINE_CANVASRENDERER_GETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1C3D85F0)
#define UNITYENGINE_CANVASRENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C3D8460)
#define UNITYENGINE_CANVASRENDERER_GETPOPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C3D8480)
#define UNITYENGINE_CANVASRENDERER_GET_ABSOLUTEDEPTH_OFFSET UNITYSDK_OFFSET(0x1C3D82A0)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C3D8400)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1C3D83D0)
#define UNITYENGINE_CANVASRENDERER_GET_CULLTRANSPARENTMESH_OFFSET UNITYSDK_OFFSET(0x1C3D82C0)
#define UNITYENGINE_CANVASRENDERER_GET_CULL_OFFSET UNITYSDK_OFFSET(0x1C3D8300)
#define UNITYENGINE_CANVASRENDERER_GET_HASMOVED_OFFSET UNITYSDK_OFFSET(0x1C3D82B0)
#define UNITYENGINE_CANVASRENDERER_GET_HASPOPINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1C3D8240)
#define UNITYENGINE_CANVASRENDERER_GET_HASRECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x1C3D82E0)
#define UNITYENGINE_CANVASRENDERER_GET_ISMASK_OFFSET UNITYSDK_OFFSET(0x1C3D8320)
#define UNITYENGINE_CANVASRENDERER_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3D8260)
#define UNITYENGINE_CANVASRENDERER_GET_POPMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3D8280)
#define UNITYENGINE_CANVASRENDERER_GET_RELATIVEDEPTH_OFFSET UNITYSDK_OFFSET(0x1C3D82F0)
#define UNITYENGINE_CANVASRENDERER_SETALPHATEXTURE_OFFSET UNITYSDK_OFFSET(0x1C3D84A0)
#define UNITYENGINE_CANVASRENDERER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x1C3D8530)
#define UNITYENGINE_CANVASRENDERER_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C3D8350)
#define UNITYENGINE_CANVASRENDERER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C3D8340)
#define UNITYENGINE_CANVASRENDERER_SETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1C3D85A0)
#define UNITYENGINE_CANVASRENDERER_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C3D8450)
#define UNITYENGINE_CANVASRENDERER_SETMESHBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C3D84E0)
#define UNITYENGINE_CANVASRENDERER_SETMESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C3D84D0)
#define UNITYENGINE_CANVASRENDERER_SETMESH_OFFSET UNITYSDK_OFFSET(0x1C3D84B0)
#define UNITYENGINE_CANVASRENDERER_SETPOPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C3D8470)
#define UNITYENGINE_CANVASRENDERER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C3D8490)
#define UNITYENGINE_CANVASRENDERER_SETUIPARTICLERENDERER_OFFSET UNITYSDK_OFFSET(0x1C3D84C0)
#define UNITYENGINE_CANVASRENDERER_SETVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1C3D8A30)
#define UNITYENGINE_CANVASRENDERER_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x1C3D89B0)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C3D8430)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1C3D8410)
#define UNITYENGINE_CANVASRENDERER_SET_CULLTRANSPARENTMESH_OFFSET UNITYSDK_OFFSET(0x1C3D82D0)
#define UNITYENGINE_CANVASRENDERER_SET_CULL_OFFSET UNITYSDK_OFFSET(0x1C3D8310)
#define UNITYENGINE_CANVASRENDERER_SET_HASPOPINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1C3D8250)
#define UNITYENGINE_CANVASRENDERER_SET_ISMASK_OFFSET UNITYSDK_OFFSET(0x1C3D8330)
#define UNITYENGINE_CANVASRENDERER_SET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3D8270)
#define UNITYENGINE_CANVASRENDERER_SET_POPMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3D8290)
#define UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C3D8780)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C3D8770)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_1_OFFSET UNITYSDK_OFFSET(0x1C3D8710)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1C3D8600)
#define UNITYENGINE_CANVASRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D99A0)

namespace UnityEngine
{
	inline static constexpr unsigned int CanvasRenderer_TypeDefinitionIndex = 7680;

	class CanvasRenderer : public ::UnityEngine::Component
	{
	public:
		::System::Boolean _isMask_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_hasPopInstruction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_HASPOPINSTRUCTION_OFFSET))(this);
		}

		::System::Void set_hasPopInstruction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_HASPOPINSTRUCTION_OFFSET))(this, value);
		}

		::System::Int32 get_materialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_MATERIALCOUNT_OFFSET))(this);
		}

		::System::Void set_materialCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_MATERIALCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_popMaterialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_POPMATERIALCOUNT_OFFSET))(this);
		}

		::System::Void set_popMaterialCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_POPMATERIALCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_absoluteDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_ABSOLUTEDEPTH_OFFSET))(this);
		}

		::System::Boolean get_hasMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_HASMOVED_OFFSET))(this);
		}

		::System::Boolean get_cullTransparentMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CULLTRANSPARENTMESH_OFFSET))(this);
		}

		::System::Void set_cullTransparentMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CULLTRANSPARENTMESH_OFFSET))(this, value);
		}

		::System::Boolean get_hasRectClipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_HASRECTCLIPPING_OFFSET))(this);
		}

		::System::Int32 get_relativeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_RELATIVEDEPTH_OFFSET))(this);
		}

		::System::Boolean get_cull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CULL_OFFSET))(this);
		}

		::System::Void set_cull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CULL_OFFSET))(this, value);
		}

		::System::Boolean get_isMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_ISMASK_OFFSET))(this);
		}

		::System::Void set_isMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_ISMASK_OFFSET))(this, value);
		}

		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLOR_OFFSET))(this, color);
		}

		::UnityEngine::Color GetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLOR_OFFSET))(this);
		}

		::System::Void EnableRectClipping(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_OFFSET))(this, rect);
		}

		::UnityEngine::Vector2 get_clippingSoftness()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_OFFSET))(this);
		}

		::System::Void set_clippingSoftness(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_OFFSET))(this, value);
		}

		::System::Void DisableRectClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_DISABLERECTCLIPPING_OFFSET))(this);
		}

		::System::Void SetMaterial(::UnityEngine::Material* material, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMATERIAL_OFFSET))(this, material, index);
		}

		::UnityEngine::Material* GetMaterial(::System::Int32 index)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETMATERIAL_OFFSET))(this, index);
		}

		::System::Void SetPopMaterial(::UnityEngine::Material* material, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETPOPMATERIAL_OFFSET))(this, material, index);
		}

		::UnityEngine::Material* GetPopMaterial(::System::Int32 index)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETPOPMATERIAL_OFFSET))(this, index);
		}

		::System::Void SetTexture(::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETTEXTURE_OFFSET))(this, texture);
		}

		::System::Void SetAlphaTexture(::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETALPHATEXTURE_OFFSET))(this, texture);
		}

		::System::Void SetMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMESH_OFFSET))(this, mesh);
		}

		::System::Void SetUIParticleRenderer(::UnityEngine::Renderer* particleSystemRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETUIPARTICLERENDERER_OFFSET))(this, particleSystemRenderer);
		}

		::System::Void SetMeshBounds(::UnityEngine::Bounds meshBounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMESHBOUNDS_OFFSET))(this, meshBounds);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CLEAR_OFFSET))(this);
		}

		::System::Single GetAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETALPHA_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETALPHA_OFFSET))(this, alpha);
		}

		::System::Single GetInheritedAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETINHERITEDALPHA_OFFSET))(this);
		}

		::System::Void SetMaterial_1(::UnityEngine::Material* material, ::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMATERIAL_1_OFFSET))(this, material, texture);
		}

		::UnityEngine::Material* GetMaterial_1()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETMATERIAL_1_OFFSET))(this);
		}

		static ::System::Void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents, indices);
		}

		static ::System::Void SplitUIVertexStreams_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_1_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices);
		}

		static ::System::Void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents, indices);
		}

		static ::System::Void CreateUIVertexStream_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_1_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices);
		}

		static ::System::Void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents);
		}

		static ::System::Void AddUIVertexStream_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_1_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents);
		}

		::System::Void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETVERTICES_OFFSET))(this, vertices);
		}

		::System::Void SetVertices_1(::Il2CppArray<::UnityEngine::UIVertex>* vertices, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETVERTICES_1_OFFSET))(this, vertices, size);
		}

		static ::System::Void SplitIndicesStreamsInternal(::System::Object* verts, ::System::Object* indices)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSINTERNAL_OFFSET))(verts, indices);
		}

		static ::System::Void SplitUIVertexStreamsInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S, ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSINTERNAL_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents);
		}

		static ::System::Void CreateUIVertexStreamInternal(::System::Object* verts, ::System::Object* positions, ::System::Object* colors, ::System::Object* uv0S, ::System::Object* uv1S, ::System::Object* uv2S, ::System::Object* uv3S, ::System::Object* normals, ::System::Object* tangents, ::System::Object* indices)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMINTERNAL_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices);
		}

		::System::Void SetColor_Injected(::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLOR_INJECTED_OFFSET))(this, color);
		}

		::System::Void GetColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void EnableRectClipping_Injected(::UnityEngine::Rect& rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_INJECTED_OFFSET))(this, rect);
		}

		::System::Void get_clippingSoftness_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_clippingSoftness_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetMeshBounds_Injected(::UnityEngine::Bounds& meshBounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMESHBOUNDS_INJECTED_OFFSET))(this, meshBounds);
		}
	};
}
