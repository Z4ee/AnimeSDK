#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/MeshUtils_Pooled_1.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/PQHandle.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/Vec3.h"

namespace System { class Object; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_VERTEX_RESET_OFFSET UNITYSDK_OFFSET(0x1C1418D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_VERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C141950)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Vertex_TypeDefinitionIndex = 26670;

	class MeshUtils_Vertex : public ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Pooled_1<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*>
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _next; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _anEdge; // 0x18
		::System::Object* _data; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _prev; // 0x28
		::System::Int32 _n; // 0x30
		::System::Single _s; // 0x34
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 _coords; // 0x38
		::System::Single _t; // 0x44
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::PQHandle _pqHandle; // 0x48

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
