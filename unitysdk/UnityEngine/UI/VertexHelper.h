#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_UI_VERTEXHELPER_ADDSIMPLEVERT_OFFSET UNITYSDK_OFFSET(0x1A5B6620)
#define UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1A5B6980)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET UNITYSDK_OFFSET(0x1A5B0570)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1A5B6BC0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET UNITYSDK_OFFSET(0x1A5B6CD0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_1_OFFSET UNITYSDK_OFFSET(0x1A5B64C0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_2_OFFSET UNITYSDK_OFFSET(0x1A5B6550)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_3_OFFSET UNITYSDK_OFFSET(0x1A5B6880)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0x1A5B5E80)
#define UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5AED40)
#define UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B48A0)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESHWITHCHANNEL_OFFSET UNITYSDK_OFFSET(0x1A5B5C70)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET UNITYSDK_OFFSET(0x1A5B5AA0)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAMNOTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x1A5B7610)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1A5B6D20)
#define UNITYENGINE_UI_VERTEXHELPER_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1A5B3A90)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5B4D00)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5B4C40)
#define UNITYENGINE_UI_VERTEXHELPER_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1A5B3AB0)
#define UNITYENGINE_UI_VERTEXHELPER_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1A5B3A80)
#define UNITYENGINE_UI_VERTEXHELPER_GET_UV0S_OFFSET UNITYSDK_OFFSET(0x1A5B3AA0)
#define UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET UNITYSDK_OFFSET(0x1A5B4530)
#define UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET UNITYSDK_OFFSET(0x1A5B4DC0)
#define UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET UNITYSDK_OFFSET(0x1A5B53E0)
#define UNITYENGINE_UI_VERTEXHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5B8240)
#define UNITYENGINE_UI_VERTEXHELPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5B3AD0)
#define UNITYENGINE_UI_VERTEXHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B3AC0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int VertexHelper_TypeDefinitionIndex = 5765;

	class VertexHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(VertexHelper_TypeDefinitionIndex)->GetStaticField(0x74E0);
		}
		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(VertexHelper_TypeDefinitionIndex)->GetStaticField(0x74F0);
		}
		::System::Boolean poppingMesh; // 0x10
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* m_Positions; // 0x18
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* m_Colors; // 0x20
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv0S; // 0x28
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv1S; // 0x30
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv2S; // 0x38
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv3S; // 0x40
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* m_Normals; // 0x48
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* m_Tangents; // 0x50
		::UnityEngine::Pooled::PooledList_1<::System::Int32>* m_Indices; // 0x58
		::System::Boolean m_ListsInitalized; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER__CTOR_1_OFFSET))(this, m);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER__CCTOR_OFFSET))();
		}

		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* get_positions()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_POSITIONS_OFFSET))(this);
		}

		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* get_colors()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_COLORS_OFFSET))(this);
		}

		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* get_uv0s()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_UV0S_OFFSET))(this);
		}

		::UnityEngine::Pooled::PooledList_1<::System::Int32>* get_indices()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_INDICES_OFFSET))(this);
		}

		::System::Void InitializeListIfRequired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_currentVertCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_currentIndexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET))(this);
		}

		::System::Void PopulateUIVertex(::UnityEngine::UIVertex& vertex, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET))(this, vertex, i);
		}

		::System::Void SetUIVertex(::UnityEngine::UIVertex vertex, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET))(this, vertex, i);
		}

		::System::Void FillMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET))(this, mesh);
		}

		::System::Void FillMeshWithChannel(::UnityEngine::Mesh* mesh, ::UnityEngine::AdditionalCanvasShaderChannels channels)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_FILLMESHWITHCHANNEL_OFFSET))(this, mesh, channels);
		}

		::System::Void AddVert(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0, ::UnityEngine::Vector2 uv1, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv3, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector4 tangent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET))(this, position, color, uv0, uv1, uv2, uv3, normal, tangent);
		}

		::System::Void AddVert_1(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0, ::UnityEngine::Vector2 uv1, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector4 tangent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_1_OFFSET))(this, position, color, uv0, uv1, normal, tangent);
		}

		::System::Void AddVert_2(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_2_OFFSET))(this, position, color, uv0);
		}

		::System::Void AddSimpleVert(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDSIMPLEVERT_OFFSET))(this, position, color, uv0);
		}

		::System::Void AddVert_3(::UnityEngine::UIVertex v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_3_OFFSET))(this, v);
		}

		::System::Void AddTriangle(::System::Int32 idx0, ::System::Int32 idx1, ::System::Int32 idx2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET))(this, idx0, idx1, idx2);
		}

		::System::Void AddUIVertexQuad(::Il2CppArray<::UnityEngine::UIVertex>* verts)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET))(this, verts);
		}

		::System::Void AddUIVertexStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET))(this, verts, indices);
		}

		::System::Void AddUIVertexTriangleStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* verts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET))(this, verts);
		}

		::System::Void GetUIVertexStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET))(this, stream);
		}

		::System::Void GetUIVertexStreamNoTopology(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAMNOTOPOLOGY_OFFSET))(this, stream);
		}
	};
}
