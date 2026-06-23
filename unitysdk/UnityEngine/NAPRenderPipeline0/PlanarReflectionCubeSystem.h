#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PRCubeData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine::NAPRenderPipeline0 { class PlanarReflectionCubeManager_NativeSRP; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETBLENDCUBEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1D7B14C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETCUBEDATA_OFFSET UNITYSDK_OFFSET(0x1D7B16B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETPOINTNDFINBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D7B1300)
#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7B1C10)
#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETPROXYMESHES_OFFSET UNITYSDK_OFFSET(0x1D7B1E60)
#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D7B1220)
#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_ISPLANARREFLECTIONCUBECORRECTEDENABLE_OFFSET UNITYSDK_OFFSET(0x1D7B1FB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B12C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PlanarReflectionCubeSystem_TypeDefinitionIndex = 6014;

	class PlanarReflectionCubeSystem : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeSystem** StaticGet_m_Instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeSystem**)Il2CppClass::FromTypeDefinitionIndex(PlanarReflectionCubeSystem_TypeDefinitionIndex)->GetStaticField(0x54A0);
		}
		::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeManager_NativeSRP* m_PlanarReflectionCubeMan; // 0x10
		::UnityEngine::NAPRenderPipeline0::PRCubeData CubeData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeSystem* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeSystem*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GET_INSTANCE_OFFSET))();
		}

		::System::Single GetPointNDFInBounds(::UnityEngine::Vector3& Point, ::UnityEngine::Bounds& Bound)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETPOINTNDFINBOUNDS_OFFSET))(this, Point, Bound);
		}

		::System::Void GetBlendCubeWeights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETBLENDCUBEWEIGHTS_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::PRCubeData GetCubeData(::UnityEngine::Vector3 viewPos)
		{
			return ((::UnityEngine::NAPRenderPipeline0::PRCubeData(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETCUBEDATA_OFFSET))(this, viewPos);
		}

		::System::Boolean GetProxyMaterial(::UnityEngine::Material*& mat)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETPROXYMATERIAL_OFFSET))(this, mat);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* GetProxyMeshes()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_GETPROXYMESHES_OFFSET))(this);
		}

		::System::Boolean IsPlanarReflectionCubeCorrectedEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONCUBESYSTEM_ISPLANARREFLECTIONCUBECORRECTEDENABLE_OFFSET))(this);
		}
	};
}
