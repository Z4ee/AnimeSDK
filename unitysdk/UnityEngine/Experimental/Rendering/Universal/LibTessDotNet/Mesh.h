#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/MeshUtils_Pooled_1.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Face; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Vertex; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_ADDEDGEVERTEX_OFFSET UNITYSDK_OFFSET(0x1CB0F8C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_CHECK_OFFSET UNITYSDK_OFFSET(0x1CB10200)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_CONNECT_OFFSET UNITYSDK_OFFSET(0x1CB0FB30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_DELETE_OFFSET UNITYSDK_OFFSET(0x1CB0F740)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_MAKEEDGE_OFFSET UNITYSDK_OFFSET(0x1CB0F5A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_MERGECONVEXFACES_OFFSET UNITYSDK_OFFSET(0x1CB0FE20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_ONFREE_OFFSET UNITYSDK_OFFSET(0x1CB0F450)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_RESET_OFFSET UNITYSDK_OFFSET(0x1CB0F400)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_SPLICE_OFFSET UNITYSDK_OFFSET(0x1CB0F620)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_SPLITEDGE_OFFSET UNITYSDK_OFFSET(0x1CB0F970)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_ZAPFACE_OFFSET UNITYSDK_OFFSET(0x1CB0FC60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0F2D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH___BASE_ONFREE_OFFSET UNITYSDK_OFFSET(0x1CB10300)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Mesh_TypeDefinitionIndex = 27451;

	class Mesh : public ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Pooled_1<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Mesh*>
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _eHead; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _eHeadSym; // 0x18
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _vHead; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* _fHead; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_RESET_OFFSET))(this);
		}

		::System::Void OnFree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_ONFREE_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* MakeEdge()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_MAKEEDGE_OFFSET))(this);
		}

		::System::Void Splice(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_SPLICE_OFFSET))(this, eOrg, eDst);
		}

		::System::Void Delete(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_DELETE_OFFSET))(this, eDel);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* AddEdgeVertex(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_ADDEDGEVERTEX_OFFSET))(this, eOrg);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* SplitEdge(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_SPLITEDGE_OFFSET))(this, eOrg);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* Connect(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrg, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDst)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_CONNECT_OFFSET))(this, eOrg, eDst);
		}

		::System::Void ZapFace(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* fZap)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_ZAPFACE_OFFSET))(this, fZap);
		}

		::System::Void MergeConvexFaces(::System::Int32 maxVertsPerFace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_MERGECONVEXFACES_OFFSET))(this, maxVertsPerFace);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH_CHECK_OFFSET))(this);
		}

		::System::Void __base_OnFree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESH___BASE_ONFREE_OFFSET))(this);
		}
	};
}
