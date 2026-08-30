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

#define UNITYENGINE_UI_VERTEXHELPER_ADDSIMPLEVERT_OFFSET UNITYSDK_OFFSET(0x1ECFCCE0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1ECFCE60)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET UNITYSDK_OFFSET(0x1ECF72A0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1ECFCED0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET UNITYSDK_OFFSET(0x1ECFCF50)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_1_OFFSET UNITYSDK_OFFSET(0x1ECFCB80)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_2_OFFSET UNITYSDK_OFFSET(0x1ECFCC10)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_3_OFFSET UNITYSDK_OFFSET(0x1ECFCD60)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0x1ECFCA30)
#define UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ECF66F0)
#define UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECFBB90)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESHWITHCHANNEL_OFFSET UNITYSDK_OFFSET(0x1ECFC650)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET UNITYSDK_OFFSET(0x1ECFC2A0)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAMNOTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x1ECFD150)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1ECFCFA0)
#define UNITYENGINE_UI_VERTEXHELPER_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1ECFB210)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1ECFBF70)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ECFBF50)
#define UNITYENGINE_UI_VERTEXHELPER_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1ECFB230)
#define UNITYENGINE_UI_VERTEXHELPER_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1ECFB200)
#define UNITYENGINE_UI_VERTEXHELPER_GET_UV0S_OFFSET UNITYSDK_OFFSET(0x1ECFB220)
#define UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET UNITYSDK_OFFSET(0x1ECFB800)
#define UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET UNITYSDK_OFFSET(0x1ECFBF90)
#define UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET UNITYSDK_OFFSET(0x1ECFC0D0)
#define UNITYENGINE_UI_VERTEXHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECFD440)
#define UNITYENGINE_UI_VERTEXHELPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECFB250)
#define UNITYENGINE_UI_VERTEXHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFB240)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int VertexHelper_TypeDefinitionIndex = 6877;

	class VertexHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(VertexHelper_TypeDefinitionIndex)->GetStaticField(0xC930);
		}
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(VertexHelper_TypeDefinitionIndex)->GetStaticField(0xC93C);
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

		::System::Void _ctor_1(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER__CTOR_1_OFFSET))(this, a1);
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

		::System::Void PopulateUIVertex(::UnityEngine::UIVertex& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET))(this, a1, a2);
		}

		::System::Void SetUIVertex(::UnityEngine::UIVertex a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET))(this, a1, a2);
		}

		::System::Void FillMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET))(this, a1);
		}

		::System::Void FillMeshWithChannel(::UnityEngine::Mesh* a1, ::UnityEngine::AdditionalCanvasShaderChannels a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_FILLMESHWITHCHANNEL_OFFSET))(this, a1, a2);
		}

		::System::Void AddVert(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector4 a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AddVert_1(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector4 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AddVert_2(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddSimpleVert(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDSIMPLEVERT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddVert_3(::UnityEngine::UIVertex a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_3_OFFSET))(this, a1);
		}

		::System::Void AddTriangle(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddUIVertexQuad(::Il2CppArray<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET))(this, a1);
		}

		::System::Void AddUIVertexStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET))(this, a1, a2);
		}

		::System::Void AddUIVertexTriangleStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET))(this, a1);
		}

		::System::Void GetUIVertexStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET))(this, a1);
		}

		::System::Void GetUIVertexStreamNoTopology(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAMNOTOPOLOGY_OFFSET))(this, a1);
		}
	};
}
