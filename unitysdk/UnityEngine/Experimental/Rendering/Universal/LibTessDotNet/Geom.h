#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/WindingRule.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Vertex; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ADDWINDING_OFFSET UNITYSDK_OFFSET(0x1ACFF720)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEEVAL_OFFSET UNITYSDK_OFFSET(0x1ACFF120)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESLEFT_OFFSET UNITYSDK_OFFSET(0x1ACFF4D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESRIGHT_OFFSET UNITYSDK_OFFSET(0x1ACFF5B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEINTERSECT_OFFSET UNITYSDK_OFFSET(0x1ACFF8F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGESIGN_OFFSET UNITYSDK_OFFSET(0x1ACFF200)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0x1ACFF7B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ISWINDINGINSIDE_OFFSET UNITYSDK_OFFSET(0x1ACFEE70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_SWAP_OFFSET UNITYSDK_OFFSET(0x1ACFF890)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSEVAL_OFFSET UNITYSDK_OFFSET(0x1ACFF340)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSLEQ_OFFSET UNITYSDK_OFFSET(0x1ACFF2B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSSIGN_OFFSET UNITYSDK_OFFSET(0x1ACFF420)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTCCW_OFFSET UNITYSDK_OFFSET(0x1ACFEF60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTEQ_OFFSET UNITYSDK_OFFSET(0x1ACFF010)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTL1DIST_OFFSET UNITYSDK_OFFSET(0x1ACFF690)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTLEQ_OFFSET UNITYSDK_OFFSET(0x1ACFF090)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Geom_TypeDefinitionIndex = 29738;

	class Geom : public ::System::Object
	{
	public:
		static ::System::Boolean IsWindingInside(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule rule, ::System::Int32 n)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ISWINDINGINSIDE_OFFSET))(rule, n);
		}

		static ::System::Boolean VertCCW(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTCCW_OFFSET))(u, v, w);
		}

		static ::System::Boolean VertEq(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* lhs, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTEQ_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean VertLeq(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* lhs, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTLEQ_OFFSET))(lhs, rhs);
		}

		static ::System::Single EdgeEval(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEEVAL_OFFSET))(u, v, w);
		}

		static ::System::Single EdgeSign(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGESIGN_OFFSET))(u, v, w);
		}

		static ::System::Boolean TransLeq(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* lhs, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSLEQ_OFFSET))(lhs, rhs);
		}

		static ::System::Single TransEval(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSEVAL_OFFSET))(u, v, w);
		}

		static ::System::Single TransSign(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSSIGN_OFFSET))(u, v, w);
		}

		static ::System::Boolean EdgeGoesLeft(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* e)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESLEFT_OFFSET))(e);
		}

		static ::System::Boolean EdgeGoesRight(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* e)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESRIGHT_OFFSET))(e);
		}

		static ::System::Single VertL1dist(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v)
		{
			return ((::System::Single(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTL1DIST_OFFSET))(u, v);
		}

		static ::System::Void AddWinding(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDst, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eSrc)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ADDWINDING_OFFSET))(eDst, eSrc);
		}

		static ::System::Single Interpolate(::System::Single a, ::System::Single x, ::System::Single b, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_INTERPOLATE_OFFSET))(a, x, b, y);
		}

		static ::System::Void Swap(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*& a, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*& b)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*&, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_SWAP_OFFSET))(a, b);
		}

		static ::System::Void EdgeIntersect(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* o1, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* d1, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* o2, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* d2, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEINTERSECT_OFFSET))(o1, d1, o2, d2, v);
		}
	};
}
