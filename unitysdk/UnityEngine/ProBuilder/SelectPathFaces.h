#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_DIJKSTRA_OFFSET UNITYSDK_OFFSET(0x18882F60)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETMINIMALPATH_OFFSET UNITYSDK_OFFSET(0x18882E70)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETPATH_OFFSET UNITYSDK_OFFSET(0x18882BD0)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x18883980)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18883ED0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectPathFaces_TypeDefinitionIndex = 34152;

	class SelectPathFaces : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_cachedPredecessors()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x2A1F0);
		}
		static ::UnityEngine::ProBuilder::ProBuilderMesh** StaticGet_s_cachedMesh()
		{
			return (::UnityEngine::ProBuilder::ProBuilderMesh**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x2A1F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet_s_cachedFacesIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x2A200);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>** StaticGet_s_cachedWings()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x2A208);
		}
		static ::System::Int32* StaticGet_s_cachedFacesCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0xDE20);
		}
		static ::System::Int32* StaticGet_s_cachedStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0xDE24);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetPath(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETPATH_OFFSET))(mesh, start, end);
		}

		static ::Il2CppArray<::System::Int32>* Dijkstra(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 start)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_DIJKSTRA_OFFSET))(mesh, start);
		}

		static ::System::Single GetWeight(::System::Int32 face1, ::System::Int32 face2, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETWEIGHT_OFFSET))(face1, face2, mesh);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetMinimalPath(::Il2CppArray<::System::Int32>* predecessors, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETMINIMALPATH_OFFSET))(predecessors, start, end);
		}
	};
}
