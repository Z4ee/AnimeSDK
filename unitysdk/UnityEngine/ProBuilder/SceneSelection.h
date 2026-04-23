#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SCENESELECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A2BC1B0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A2BC250)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2BCB30)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2BC9F0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2BCBE0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x1A2BBA10)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GET_FACES_OFFSET UNITYSDK_OFFSET(0x1A2BBA30)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_GET_VERTEXES_OFFSET UNITYSDK_OFFSET(0x1A2BB9F0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A2BCC90)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A2BCCD0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEEDGE_OFFSET UNITYSDK_OFFSET(0x1A2BC140)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEFACE_OFFSET UNITYSDK_OFFSET(0x1A2BC040)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEVERTEX_OFFSET UNITYSDK_OFFSET(0x1A2BC0D0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SET_EDGES_OFFSET UNITYSDK_OFFSET(0x1A2BBA20)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SET_FACES_OFFSET UNITYSDK_OFFSET(0x1A2BBA40)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_SET_VERTEXES_OFFSET UNITYSDK_OFFSET(0x1A2BBA00)
#define UNITYENGINE_PROBUILDER_SCENESELECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2BC620)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2BBB80)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A2BBD00)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A2BBEA0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A2BBC00)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A2BBDC0)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1A2BBF20)
#define UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2BBA50)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SceneSelection_TypeDefinitionIndex = 39981;

	class SceneSelection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* m_Edges; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* m_Vertices; // 0x18
		::UnityEngine::ProBuilder::Face* face; // 0x20
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x28
		::UnityEngine::GameObject* gameObject; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* m_Faces; // 0x38
		::UnityEngine::ProBuilder::Edge edge; // 0x40
		::System::Int32 vertex; // 0x48

		::System::Void _ctor(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_OFFSET))(this, gameObject);
		}

		::System::Void _ctor_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 vertex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_1_OFFSET))(this, mesh, vertex);
		}

		::System::Void _ctor_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_2_OFFSET))(this, mesh, edge);
		}

		::System::Void _ctor_3(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_3_OFFSET))(this, mesh, face);
		}

		::System::Void _ctor_4(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::System::Int32>* vertexes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_4_OFFSET))(this, mesh, vertexes);
		}

		::System::Void _ctor_5(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_5_OFFSET))(this, mesh, edges);
		}

		::System::Void _ctor_6(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION__CTOR_6_OFFSET))(this, mesh, faces);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_vertexes()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GET_VERTEXES_OFFSET))(this);
		}

		::System::Void set_vertexes(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SET_VERTEXES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* get_edges()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GET_EDGES_OFFSET))(this);
		}

		::System::Void set_edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SET_EDGES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* get_faces()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GET_FACES_OFFSET))(this);
		}

		::System::Void set_faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SET_FACES_OFFSET))(this, value);
		}

		::System::Void SetSingleFace(::UnityEngine::ProBuilder::Face* face)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEFACE_OFFSET))(this, face);
		}

		::System::Void SetSingleVertex(::System::Int32 vertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEVERTEX_OFFSET))(this, vertex);
		}

		::System::Void SetSingleEdge(::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_SETSINGLEEDGE_OFFSET))(this, edge);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_CLEAR_OFFSET))(this);
		}

		::System::Void CopyTo(::UnityEngine::ProBuilder::SceneSelection* dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_COPYTO_OFFSET))(this, dst);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::SceneSelection* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SceneSelection*, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::SceneSelection* left, ::UnityEngine::ProBuilder::SceneSelection* right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::SceneSelection*, ::UnityEngine::ProBuilder::SceneSelection*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SCENESELECTION_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
