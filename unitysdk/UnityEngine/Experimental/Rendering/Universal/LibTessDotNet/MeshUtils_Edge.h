#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/MeshUtils_EdgePair.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/MeshUtils_Pooled_1.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Face; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Vertex; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class Tess_ActiveRegion; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_ENSUREFIRST_OFFSET UNITYSDK_OFFSET(0x1BC53700)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DNEXT_OFFSET UNITYSDK_OFFSET(0x1BC54090)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DPREV_OFFSET UNITYSDK_OFFSET(0x1BC53F90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DST_OFFSET UNITYSDK_OFFSET(0x1BC53D90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__LPREV_OFFSET UNITYSDK_OFFSET(0x1BC53F10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__OPREV_OFFSET UNITYSDK_OFFSET(0x1BC53E90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RFACE_OFFSET UNITYSDK_OFFSET(0x1BC53DB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RNEXT_OFFSET UNITYSDK_OFFSET(0x1BC54130)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RPREV_OFFSET UNITYSDK_OFFSET(0x1BC54010)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_RESET_OFFSET UNITYSDK_OFFSET(0x1BC541D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DNEXT_OFFSET UNITYSDK_OFFSET(0x1BC540C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DPREV_OFFSET UNITYSDK_OFFSET(0x1BC53FB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DST_OFFSET UNITYSDK_OFFSET(0x1BC53E30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__LPREV_OFFSET UNITYSDK_OFFSET(0x1BC53F30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__OPREV_OFFSET UNITYSDK_OFFSET(0x1BC53EB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RFACE_OFFSET UNITYSDK_OFFSET(0x1BC53DD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RNEXT_OFFSET UNITYSDK_OFFSET(0x1BC54160)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RPREV_OFFSET UNITYSDK_OFFSET(0x1BC54030)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC54260)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Edge_TypeDefinitionIndex = 27939;

	class MeshUtils_Edge : public ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Pooled_1<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*>
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_EdgePair _pair; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _Sym; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _Org; // 0x28
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _Onext; // 0x30
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _Lnext; // 0x38
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* _Lface; // 0x40
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* _next; // 0x48
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* _activeRegion; // 0x50
		::System::Int32 _winding; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* get__Rface()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RFACE_OFFSET))(this);
		}

		::System::Void set__Rface(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RFACE_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* get__Dst()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DST_OFFSET))(this);
		}

		::System::Void set__Dst(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DST_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* get__Oprev()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__OPREV_OFFSET))(this);
		}

		::System::Void set__Oprev(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__OPREV_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* get__Lprev()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__LPREV_OFFSET))(this);
		}

		::System::Void set__Lprev(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__LPREV_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* get__Dprev()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DPREV_OFFSET))(this);
		}

		::System::Void set__Dprev(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DPREV_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* get__Rprev()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RPREV_OFFSET))(this);
		}

		::System::Void set__Rprev(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RPREV_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* get__Dnext()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DNEXT_OFFSET))(this);
		}

		::System::Void set__Dnext(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DNEXT_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* get__Rnext()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RNEXT_OFFSET))(this);
		}

		::System::Void set__Rnext(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RNEXT_OFFSET))(this, value);
		}

		static ::System::Void EnsureFirst(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*& e)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_ENSUREFIRST_OFFSET))(e);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_MESHUTILS_EDGE_RESET_OFFSET))(this);
		}
	};
}
