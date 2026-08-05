#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EMaterialLodStatus.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/MatLodBaseData.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA_APPLYLOD_OFFSET UNITYSDK_OFFSET(0x1109EFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA_CALCULATEMATERIALLODSTATUS_OFFSET UNITYSDK_OFFSET(0x1109EDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA_FORCELOD_OFFSET UNITYSDK_OFFSET(0x1109F370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1109EBB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA___BASE_APPLYLOD_OFFSET UNITYSDK_OFFSET(0x1109F540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA___BASE_CALCULATEMATERIALLODSTATUS_OFFSET UNITYSDK_OFFSET(0x1109F550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA___BASE_FORCELOD_OFFSET UNITYSDK_OFFSET(0x1109F620)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MatCharacterSimplifyLodData_TypeDefinitionIndex = 27962;

	class MatCharacterSimplifyLodData : public ::UnityEngine::Rendering::Universal::Internal::MatLodBaseData
	{
	public:
		::System::Int32 m_TransitionPropertyHash; // 0x40
		::System::Single m_TransitionMaxDisSqr; // 0x44
		::System::Single m_TransitionProgress; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::EMaterialLodStatus CalculateMaterialLodStatus(::System::Single distanceSqr, ::System::Single LODDistRatioSqr)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::EMaterialLodStatus(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA_CALCULATEMATERIALLODSTATUS_OFFSET))(this, distanceSqr, LODDistRatioSqr);
		}

		::System::Void ApplyLod(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA_APPLYLOD_OFFSET))(this, mat);
		}

		::System::Void ForceLod(::UnityEngine::Material* mat, ::System::Boolean bHide)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA_FORCELOD_OFFSET))(this, mat, bHide);
		}

		::System::Void __base_ApplyLod(::UnityEngine::Material* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA___BASE_APPLYLOD_OFFSET))(this, P0);
		}

		::UnityEngine::Rendering::Universal::Internal::EMaterialLodStatus __base_CalculateMaterialLodStatus(::System::Single P0, ::System::Single P1)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::EMaterialLodStatus(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA___BASE_CALCULATEMATERIALLODSTATUS_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ForceLod(::UnityEngine::Material* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCHARACTERSIMPLIFYLODDATA___BASE_FORCELOD_OFFSET))(this, P0, P1);
		}
	};
}
