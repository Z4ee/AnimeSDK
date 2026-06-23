#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine::NAPRenderPipeline0 { class PlanarReflectionCubeProbe_NativeSRP; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBEMANAGER_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D730320)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PlanarReflectionCubeManager_NativeSRP_TypeDefinitionIndex = 6012;

	class PlanarReflectionCubeManager_NativeSRP : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeProbe_NativeSRP*>* CubeProbes; // 0x18
		::System::Boolean DebugMode; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* ProxyMeshes; // 0x28
		::UnityEngine::Material* ProxyMaterial; // 0x30
		::UnityEngine::LayerMask LayerMask; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBEMANAGER_NATIVESRP__CTOR_OFFSET))(this);
		}
	};
}
