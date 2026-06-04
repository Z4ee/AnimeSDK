#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SCENESELECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B11E820)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B11E8C0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B11F1B0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B11F070)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B11F260)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x1B11DFD0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GET_FACES_OFFSET UNITYSDK_OFFSET(0x1B11DFF0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GET_VERTEXES_OFFSET UNITYSDK_OFFSET(0x1B11DFB0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B11F310)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B11F350)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEEDGE_OFFSET UNITYSDK_OFFSET(0x1B11E7D0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEFACE_OFFSET UNITYSDK_OFFSET(0x1B11E6A0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEVERTEX_OFFSET UNITYSDK_OFFSET(0x1B11E780)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SET_EDGES_OFFSET UNITYSDK_OFFSET(0x1B11DFE0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SET_FACES_OFFSET UNITYSDK_OFFSET(0x1B11E000)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SET_VERTEXES_OFFSET UNITYSDK_OFFSET(0x1B11DFC0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B11ECA0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B11E140)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B11E2E0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B11E4B0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B11E1E0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B11E3D0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B11E580)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11E010)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SceneSelection_TypeDefinitionIndex = 40808;

	class SceneSelection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* m_Edges; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* m_Vertices; // 0x18
		::UnityEngine::GameObject* gameObject; // 0x20
		::UnityEngine::ProBuilder::Face* face; // 0x28
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* m_Faces; // 0x38
		::System::Int32 vertex; // 0x40
		::UnityEngine::ProBuilder::Edge edge; // 0x44

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_6(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_6_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_vertexes()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GET_VERTEXES_OFFSET))(this);
		}

		::System::Void set_vertexes(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SET_VERTEXES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* get_edges()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GET_EDGES_OFFSET))(this);
		}

		::System::Void set_edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SET_EDGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* get_faces()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GET_FACES_OFFSET))(this);
		}

		::System::Void set_faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SET_FACES_OFFSET))(this, a1);
		}

		::System::Void SetSingleFace(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEFACE_OFFSET))(this, a1);
		}

		::System::Void SetSingleVertex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEVERTEX_OFFSET))(this, a1);
		}

		::System::Void SetSingleEdge(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEEDGE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_CLEAR_OFFSET))(this);
		}

		::System::Void CopyTo(::UnityEngine::ProBuilder::SceneSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_COPYTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::SceneSelection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::SceneSelection* a1, ::UnityEngine::ProBuilder::SceneSelection* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SceneSelection*, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::SceneSelection* a1, ::UnityEngine::ProBuilder::SceneSelection* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SceneSelection*, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
