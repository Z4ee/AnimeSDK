#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1B851FE0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET UNITYSDK_OFFSET(0x1B852090)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET UNITYSDK_OFFSET(0x1B84DDF0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_1_OFFSET UNITYSDK_OFFSET(0x1B851B00)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_2_OFFSET UNITYSDK_OFFSET(0x1B851C40)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_3_OFFSET UNITYSDK_OFFSET(0x1B851E60)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0x1B8518E0)
#define UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B848490)
#define UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B850A90)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET UNITYSDK_OFFSET(0x1B851350)
#define UNITYENGINE_UI_VERTEXHELPER_GETQUADSIZE_OFFSET UNITYSDK_OFFSET(0x1B852370)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1B84DD60)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B851110)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8510C0)
#define UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B850490)
#define UNITYENGINE_UI_VERTEXHELPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B848690)
#define UNITYENGINE_UI_VERTEXHELPER_ISQUADVERTICES_OFFSET UNITYSDK_OFFSET(0x1B851160)
#define UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET UNITYSDK_OFFSET(0x1B8488E0)
#define UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET UNITYSDK_OFFSET(0x1B848A90)
#define UNITYENGINE_UI_VERTEXHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B852440)
#define UNITYENGINE_UI_VERTEXHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B850480)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int VertexHelper_TypeDefinitionIndex = 8480;

	class VertexHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(VertexHelper_TypeDefinitionIndex)->GetStaticField(0x3B70);
		}
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(VertexHelper_TypeDefinitionIndex)->GetStaticField(0x3B7C);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Positions; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Color32>* m_Colors; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* m_Uv0S; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* m_Uv1S; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* m_Uv2S; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* m_Uv3S; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Normals; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Tangents; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* m_Indices; // 0x50
		::System::Boolean m_ListsInitalized; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER__CCTOR_OFFSET))();
		}

		::UnityEngine::UI::VertexHelper* Initialize(::UnityEngine::Mesh* m)
		{
			return ((::UnityEngine::UI::VertexHelper*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_INITIALIZE_OFFSET))(this, m);
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

		::System::Boolean IsQuadVertices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ISQUADVERTICES_OFFSET))(this);
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

		::System::Void AddUIVertexTriangleStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET))(this, verts);
		}

		::System::Void GetUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET))(this, stream);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetQuadSize(::System::Int32 vertexStartIndex)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETQUADSIZE_OFFSET))(this, vertexStartIndex);
		}
	};
}
