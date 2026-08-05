#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_CREATE_OFFSET UNITYSDK_OFFSET(0x1C5AE940)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_RESET_OFFSET UNITYSDK_OFFSET(0x90D9D0)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_EdgePair_TypeDefinitionIndex = 27936;

	struct alignas(8) MeshUtils_EdgePair
	{
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _e; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _eSym; // 0x18

		static ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_EdgePair Create()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_EdgePair(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_CREATE_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_RESET_OFFSET))(this);
		}
	};
}
