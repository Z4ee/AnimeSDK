#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Face; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Vertex; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACEAREA_OFFSET UNITYSDK_OFFSET(0x1AF4D0F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_KILLEDGE_OFFSET UNITYSDK_OFFSET(0x1AF4CE00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_KILLFACE_OFFSET UNITYSDK_OFFSET(0x1AF4D020)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_KILLVERTEX_OFFSET UNITYSDK_OFFSET(0x1AF4CF50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_MAKEEDGE_OFFSET UNITYSDK_OFFSET(0x1AF4C9C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_MAKEFACE_OFFSET UNITYSDK_OFFSET(0x1AF4CD00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_MAKEVERTEX_OFFSET UNITYSDK_OFFSET(0x1AF4CC30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_SPLICE_OFFSET UNITYSDK_OFFSET(0x1AF4CB80)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_TypeDefinitionIndex = 26667;

	class MeshUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 Undef = 0xFFFFFFFF; // 0x0

		static ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* MakeEdge(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eNext)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_MAKEEDGE_OFFSET))(eNext);
		}

		static ::System::Void Splice(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* a, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* b)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_SPLICE_OFFSET))(a, b);
		}

		static ::System::Void MakeVertex(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrig, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* vNext)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_MAKEVERTEX_OFFSET))(eOrig, vNext);
		}

		static ::System::Void MakeFace(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eOrig, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* fNext)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_MAKEFACE_OFFSET))(eOrig, fNext);
		}

		static ::System::Void KillEdge(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDel)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_KILLEDGE_OFFSET))(eDel);
		}

		static ::System::Void KillVertex(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* vDel, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* newOrg)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_KILLVERTEX_OFFSET))(vDel, newOrg);
		}

		static ::System::Void KillFace(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* fDel, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* newLFace)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_KILLFACE_OFFSET))(fDel, newLFace);
		}

		static ::System::Single FaceArea(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* f)
		{
			return ((::System::Single(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACEAREA_OFFSET))(f);
		}
	};
}
