#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CLOUDUTILS_CREATECLOUDQUADMESH_OFFSET UNITYSDK_OFFSET(0x1B491810)
#define UNITYENGINE_NAPRENDERPIPELINE0_CLOUDUTILS_ENSURECLOUDUTILASSETS_OFFSET UNITYSDK_OFFSET(0x1B491650)
#define UNITYENGINE_NAPRENDERPIPELINE0_CLOUDUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B491C20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CloudUtils_TypeDefinitionIndex = 5977;

	class CloudUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_CloudQuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(CloudUtils_TypeDefinitionIndex)->GetStaticField(0x5460);
		}
		static ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Matrix4x4>*>** StaticGet_s_QuadToWorld()
		{
			return (::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Matrix4x4>*>**)Il2CppClass::FromTypeDefinitionIndex(CloudUtils_TypeDefinitionIndex)->GetStaticField(0x5468);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_instanceToVertexId()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CloudUtils_TypeDefinitionIndex)->GetStaticField(0x5470);
		}
		static ::System::Int32* StaticGet_s_CloudQuadMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudUtils_TypeDefinitionIndex)->GetStaticField(0x2D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLOUDUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureCloudUtilAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLOUDUTILS_ENSURECLOUDUTILASSETS_OFFSET))();
		}

		static ::UnityEngine::Mesh* CreateCloudQuadMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLOUDUTILS_CREATECLOUDQUADMESH_OFFSET))();
		}
	};
}
