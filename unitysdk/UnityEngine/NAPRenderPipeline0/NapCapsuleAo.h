#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapCapsuleAoLightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapCapsuleAoNodeBinding.h"
#include "unitysdk/UnityEngine/Plane.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D2A2630)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2A2480)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A26C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A2570)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapCapsuleAo_TypeDefinitionIndex = 6015;

	class NapCapsuleAo : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::NapCapsuleAo** StaticGet__instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::NapCapsuleAo**)Il2CppClass::FromTypeDefinitionIndex(NapCapsuleAo_TypeDefinitionIndex)->GetStaticField(0x4B60);
		}
		static ::System::Collections::Generic::HashSet_1<::Il2CppArray<::UnityEngine::NAPRenderPipeline0::NapCapsuleAoNodeBinding>*>** StaticGet_m_Containers()
		{
			return (::System::Collections::Generic::HashSet_1<::Il2CppArray<::UnityEngine::NAPRenderPipeline0::NapCapsuleAoNodeBinding>*>**)Il2CppClass::FromTypeDefinitionIndex(NapCapsuleAo_TypeDefinitionIndex)->GetStaticField(0x4B68);
		}
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::NapCapsuleAoLightData>* lightListForCapAO; // 0x10
		::System::Int32 m_Kernel; // 0x18
		::Il2CppArray<::System::UInt32>* defaultCurrentLightIndexBuffer; // 0x20
		::UnityEngine::ComputeBuffer* m_LightListBuffer; // 0x28
		::UnityEngine::ComputeBuffer* m_LightIndexBuffer; // 0x30
		::UnityEngine::ComputeBuffer* m_CurrentLightIndexBuffer; // 0x38
		::Il2CppArray<::UnityEngine::Plane>* planes; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO__CCTOR_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::NapCapsuleAo* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapCapsuleAo*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO_GET_INSTANCE_OFFSET))();
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAO_CLEANUP_OFFSET))(this);
		}
	};
}
