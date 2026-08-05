#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/MeshUtils_Pooled_1.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACE_GET_VERTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1D6DD0B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACE_RESET_OFFSET UNITYSDK_OFFSET(0x1D6DD110)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DD170)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Face_TypeDefinitionIndex = 27940;

	class MeshUtils_Face : public ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Pooled_1<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*>
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _anEdge; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* _next; // 0x18
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* _prev; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* _trail; // 0x28
		::System::Boolean _marked; // 0x30
		::System::Boolean _inside; // 0x31
		::System::Int32 _n; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_VertsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACE_GET_VERTSCOUNT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_FACE_RESET_OFFSET))(this);
		}
	};
}
