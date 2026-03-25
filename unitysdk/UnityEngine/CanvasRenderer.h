#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_1_OFFSET UNITYSDK_OFFSET(0x18AE94D0)
#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_2_OFFSET UNITYSDK_OFFSET(0x18AE94E0)
#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_3_OFFSET UNITYSDK_OFFSET(0x18AE9580)
#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x18AE93C0)
#define UNITYENGINE_CANVASRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18AE6F30)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x18AE8900)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x18AE93B0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_1_OFFSET UNITYSDK_OFFSET(0x18AE88F0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_2_OFFSET UNITYSDK_OFFSET(0x18AE8910)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_3_OFFSET UNITYSDK_OFFSET(0x18AE89C0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x18AE87C0)
#define UNITYENGINE_CANVASRENDERER_DISABLERECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x18AE6E80)
#define UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6D90)
#define UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x18AE6D80)
#define UNITYENGINE_CANVASRENDERER_GETALPHA_OFFSET UNITYSDK_OFFSET(0x18AE6F40)
#define UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6D50)
#define UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_OFFSET UNITYSDK_OFFSET(0x18AE6D10)
#define UNITYENGINE_CANVASRENDERER_GETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6CE0)
#define UNITYENGINE_CANVASRENDERER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x18AE6CA0)
#define UNITYENGINE_CANVASRENDERER_GETCUSTOMDEPTH_OFFSET UNITYSDK_OFFSET(0x18AE6D70)
#define UNITYENGINE_CANVASRENDERER_GETINHERITEDALPHA_OFFSET UNITYSDK_OFFSET(0x18AE6FD0)
#define UNITYENGINE_CANVASRENDERER_GETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x18AE7040)
#define UNITYENGINE_CANVASRENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6EA0)
#define UNITYENGINE_CANVASRENDERER_GETPOPMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6EC0)
#define UNITYENGINE_CANVASRENDERER_GET_ABSOLUTEDEPTH_OFFSET UNITYSDK_OFFSET(0x18AE6BE0)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6DE0)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_OFFSET UNITYSDK_OFFSET(0x18AE6DA0)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6E50)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_OFFSET UNITYSDK_OFFSET(0x18AE6E10)
#define UNITYENGINE_CANVASRENDERER_GET_CULLTRANSPARENTMESH_OFFSET UNITYSDK_OFFSET(0x18AE6C00)
#define UNITYENGINE_CANVASRENDERER_GET_CULL_OFFSET UNITYSDK_OFFSET(0x18AE6C40)
#define UNITYENGINE_CANVASRENDERER_GET_HASMOVED_OFFSET UNITYSDK_OFFSET(0x18AE6BF0)
#define UNITYENGINE_CANVASRENDERER_GET_HASPOPINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18AE6B80)
#define UNITYENGINE_CANVASRENDERER_GET_HASRECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x18AE6C20)
#define UNITYENGINE_CANVASRENDERER_GET_ISMASK_OFFSET UNITYSDK_OFFSET(0x18AE6C60)
#define UNITYENGINE_CANVASRENDERER_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x18AE6BA0)
#define UNITYENGINE_CANVASRENDERER_GET_POPMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x18AE6BC0)
#define UNITYENGINE_CANVASRENDERER_GET_RELATIVEDEPTH_OFFSET UNITYSDK_OFFSET(0x18AE6C30)
#define UNITYENGINE_CANVASRENDERER_SETALPHATEXTURE_OFFSET UNITYSDK_OFFSET(0x18AE6EF0)
#define UNITYENGINE_CANVASRENDERER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x18AE6F70)
#define UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6D00)
#define UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_OFFSET UNITYSDK_OFFSET(0x18AE6CF0)
#define UNITYENGINE_CANVASRENDERER_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6C90)
#define UNITYENGINE_CANVASRENDERER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x18AE6C80)
#define UNITYENGINE_CANVASRENDERER_SETCUSTOMDEPTH_OFFSET UNITYSDK_OFFSET(0x18AE6D60)
#define UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6F20)
#define UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18AE6F10)
#define UNITYENGINE_CANVASRENDERER_SETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x18AE6FE0)
#define UNITYENGINE_CANVASRENDERER_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6E90)
#define UNITYENGINE_CANVASRENDERER_SETMESH_OFFSET UNITYSDK_OFFSET(0x18AE6F00)
#define UNITYENGINE_CANVASRENDERER_SETPOPMATERIAL_OFFSET UNITYSDK_OFFSET(0x18AE6EB0)
#define UNITYENGINE_CANVASRENDERER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18AE6EE0)
#define UNITYENGINE_CANVASRENDERER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x18AE6ED0)
#define UNITYENGINE_CANVASRENDERER_SETVERTICES_1_OFFSET UNITYSDK_OFFSET(0x18AEA7A0)
#define UNITYENGINE_CANVASRENDERER_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x18AEA740)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6E00)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_OFFSET UNITYSDK_OFFSET(0x18AE6DF0)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AE6E70)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_OFFSET UNITYSDK_OFFSET(0x18AE6E60)
#define UNITYENGINE_CANVASRENDERER_SET_CULLTRANSPARENTMESH_OFFSET UNITYSDK_OFFSET(0x18AE6C10)
#define UNITYENGINE_CANVASRENDERER_SET_CULL_OFFSET UNITYSDK_OFFSET(0x18AE6C50)
#define UNITYENGINE_CANVASRENDERER_SET_HASPOPINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18AE6B90)
#define UNITYENGINE_CANVASRENDERER_SET_ISMASK_OFFSET UNITYSDK_OFFSET(0x18AE6C70)
#define UNITYENGINE_CANVASRENDERER_SET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x18AE6BB0)
#define UNITYENGINE_CANVASRENDERER_SET_POPMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x18AE6BD0)
#define UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSINTERNAL_OFFSET UNITYSDK_OFFSET(0x18AE7200)
#define UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x18AE87B0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSINTERNAL_OFFSET UNITYSDK_OFFSET(0x18AE71F0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x18AE87A0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_1_OFFSET UNITYSDK_OFFSET(0x18AE7190)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_2_OFFSET UNITYSDK_OFFSET(0x18AE7210)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_3_OFFSET UNITYSDK_OFFSET(0x18AE72C0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18AE7050)
#define UNITYENGINE_CANVASRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEB5D0)

namespace UnityEngine
{
	inline static constexpr unsigned int CanvasRenderer_TypeDefinitionIndex = 5253;

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

		::System::Void SetColorScale(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_OFFSET))(this, color);
		}

		::UnityEngine::Color GetColorScale()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_OFFSET))(this);
		}

		::System::Void SetCustomDepth(::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCUSTOMDEPTH_OFFSET))(this, depth);
		}

		::System::Int32 GetCustomDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCUSTOMDEPTH_OFFSET))(this);
		}

		::System::Void EnableRectClipping(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_OFFSET))(this, rect);
		}

		::UnityEngine::Vector4 get_clippingSoftness()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_OFFSET))(this);
		}

		::System::Void set_clippingSoftness(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_clippingTranslateRot()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_OFFSET))(this);
		}

		::System::Void set_clippingTranslateRot(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_OFFSET))(this, value);
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

		::System::Void SetTexture_1(::UnityEngine::Texture* texture, ::System::Int32 texIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETTEXTURE_1_OFFSET))(this, texture, texIndex);
		}

		::System::Void SetAlphaTexture(::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETALPHATEXTURE_OFFSET))(this, texture);
		}

		::System::Void SetMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMESH_OFFSET))(this, mesh);
		}

		::System::Void SetLocalTransform(::UnityEngine::Matrix4x4 m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_OFFSET))(this, m);
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

		static ::System::Void SplitUIVertexStreams_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* colors, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv0S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv1S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* normals, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* tangents, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_2_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents, indices);
		}

		static ::System::Void SplitUIVertexStreams_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* colors, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv0S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv1S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv2S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv3S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* normals, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* tangents, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_3_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices);
		}

		static ::System::Void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents, indices);
		}

		static ::System::Void CreateUIVertexStream_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_1_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices);
		}

		static ::System::Void CreateUIVertexStream_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* colors, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv0S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv1S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* normals, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* tangents, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_2_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents, indices);
		}

		static ::System::Void CreateUIVertexStream_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* colors, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv0S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv1S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv2S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv3S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* normals, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* tangents, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_3_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices);
		}

		static ::System::Void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents);
		}

		static ::System::Void AddUIVertexStream_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_1_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents);
		}

		static ::System::Void AddUIVertexStream_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* colors, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv0S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv1S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* normals, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_2_OFFSET))(verts, positions, colors, uv0S, uv1S, normals, tangents);
		}

		static ::System::Void AddUIVertexStream_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* colors, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv0S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv1S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv2S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uv3S, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* normals, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_3_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents);
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

		static ::System::Void SplitIndicesStreamsWithArrayInternal(::System::Array* verts, ::System::Array* indices, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSWITHARRAYINTERNAL_OFFSET))(verts, indices, length);
		}

		static ::System::Void SplitUIVertexStreamsWithArrayInternal(::System::Array* verts, ::System::Array* positions, ::System::Array* colors, ::System::Array* uv0S, ::System::Array* uv1S, ::System::Array* uv2S, ::System::Array* uv3S, ::System::Array* normals, ::System::Array* tangents, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSWITHARRAYINTERNAL_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, length);
		}

		static ::System::Void CreateUIVertexStreamWithArrayInternal(::System::Array* verts, ::System::Array* positions, ::System::Array* colors, ::System::Array* uv0S, ::System::Array* uv1S, ::System::Array* uv2S, ::System::Array* uv3S, ::System::Array* normals, ::System::Array* tangents, ::System::Array* indices, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMWITHARRAYINTERNAL_OFFSET))(verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices, length);
		}

		::System::Void SetColor_Injected(::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLOR_INJECTED_OFFSET))(this, color);
		}

		::System::Void GetColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetColorScale_Injected(::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_INJECTED_OFFSET))(this, color);
		}

		::System::Void GetColorScale_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void EnableRectClipping_Injected(::UnityEngine::Rect& rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_INJECTED_OFFSET))(this, rect);
		}

		::System::Void get_clippingSoftness_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_clippingSoftness_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_clippingTranslateRot_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_clippingTranslateRot_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetLocalTransform_Injected(::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_INJECTED_OFFSET))(this, m);
		}
	};
}
