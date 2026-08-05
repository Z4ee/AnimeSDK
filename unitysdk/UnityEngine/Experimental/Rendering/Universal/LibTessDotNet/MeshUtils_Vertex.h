#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/MeshUtils_Pooled_1.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/PQHandle.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/Vec3.h"

namespace System { class Object; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_VERTEX_RESET_OFFSET UNITYSDK_OFFSET(0x1D2FD360)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_VERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FD3D0)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Vertex_TypeDefinitionIndex = 27938;

	class MeshUtils_Vertex : public ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Pooled_1<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*>
	{
	public:
		::System::Object* _data; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _next; // 0x18
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _prev; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _anEdge; // 0x28
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 _coords; // 0x30
		::System::Single _t; // 0x3C
		::System::Single _s; // 0x40
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::PQHandle _pqHandle; // 0x44
		::System::Int32 _n; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_VERTEX__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_VERTEX_RESET_OFFSET))(this);
		}
	};
}
