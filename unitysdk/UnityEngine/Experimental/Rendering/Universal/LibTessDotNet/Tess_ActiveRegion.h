#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class Dict_1_Node; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ACTIVEREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE1990)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Tess_ActiveRegion_TypeDefinitionIndex = 27118;

	class Tess_ActiveRegion : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Dict_1_Node<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*>* _nodeUp; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _eUp; // 0x18
		::System::Boolean _dirty; // 0x20
		::System::Boolean _fixUpperEdge; // 0x21
		::System::Boolean _inside; // 0x22
		::System::Boolean _sentinel; // 0x23
		::System::Int32 _windingNumber; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ACTIVEREGION__CTOR_OFFSET))(this);
		}
	};
}
