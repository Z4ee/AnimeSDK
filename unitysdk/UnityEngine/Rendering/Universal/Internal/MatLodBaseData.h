#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EMaterialLodStatus.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EMaterialLodType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_APPLYLOD_1_OFFSET UNITYSDK_OFFSET(0x1C5BAEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_APPLYLOD_2_OFFSET UNITYSDK_OFFSET(0x1C5BA890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_APPLYLOD_OFFSET UNITYSDK_OFFSET(0x1C5BA9E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_CALCULATEMATERIALLODSTATUS_OFFSET UNITYSDK_OFFSET(0x1C5BA460)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_FORCELOD_1_OFFSET UNITYSDK_OFFSET(0x1C5BB110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_FORCELOD_OFFSET UNITYSDK_OFFSET(0x1C5BAF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_GET_M_LODDISTANCESQR_OFFSET UNITYSDK_OFFSET(0x1C5BA400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_GET_M_LODDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C5BA390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_RECALCULATELODDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C5BA410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_RECORDMATERIALPASSINITIALSTATES_OFFSET UNITYSDK_OFFSET(0x1C5BB1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_SETMANAGEDPASSESENABLED_OFFSET UNITYSDK_OFFSET(0x1C5BAB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_SET_M_LODDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C5BA3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_UPDATEMATERIALLODSTATUS_OFFSET UNITYSDK_OFFSET(0x1C5BA4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_UPDATEMATERIALLOD_OFFSET UNITYSDK_OFFSET(0x1C5BA5D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BB590)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MatLodBaseData_TypeDefinitionIndex = 27955;

	class MatLodBaseData : public ::System::Object
	{
	public:
		::System::Single _LodDistance; // 0x10
		::System::Single _LodDistanceSqr; // 0x14
		::Il2CppArray<::System::String*>* m_PassNames; // 0x18
		::Il2CppArray<::System::String*>* m_Keywords; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Boolean>*>* m_MaterialPassInitialEnabledStates; // 0x28
		::UnityEngine::Rendering::Universal::Internal::EMaterialLodType m_MaterialLodType; // 0x30
		::UnityEngine::Rendering::Universal::Internal::EMaterialLodStatus m_MaterialLodStatus; // 0x34
		::System::Single m_lodUpdateThreshold; // 0x38
		::System::Single m_lastUpdatedSqrDist; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA__CTOR_OFFSET))(this);
		}

		::System::Single get_m_LodDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_GET_M_LODDISTANCE_OFFSET))(this);
		}

		::System::Void set_m_LodDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_SET_M_LODDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_m_LodDistanceSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_GET_M_LODDISTANCESQR_OFFSET))(this);
		}

		::System::Void RecalculateLodDistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_RECALCULATELODDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::EMaterialLodStatus CalculateMaterialLodStatus(::System::Single distanceSqr, ::System::Single LODDistRatioSqr)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::EMaterialLodStatus(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_CALCULATEMATERIALLODSTATUS_OFFSET))(this, distanceSqr, LODDistRatioSqr);
		}

		::System::Boolean UpdateMaterialLodStatus(::UnityEngine::Vector3 diffPos, ::System::Boolean m_force, ::System::Single LODDistRatioSqr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_UPDATEMATERIALLODSTATUS_OFFSET))(this, diffPos, m_force, LODDistRatioSqr);
		}

		::System::Void UpdateMaterialLod(::Il2CppArray<::UnityEngine::Renderer*>* renderers, ::UnityEngine::Vector3 diffPos, ::System::Boolean m_force, ::System::Single LODDistRatioSqr)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_UPDATEMATERIALLOD_OFFSET))(this, renderers, diffPos, m_force, LODDistRatioSqr);
		}

		::System::Void ApplyLod(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_APPLYLOD_OFFSET))(this, mat);
		}

		::System::Void ApplyLod_1(::Il2CppArray<::UnityEngine::Material*>* mats)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_APPLYLOD_1_OFFSET))(this, mats);
		}

		::System::Void ApplyLod_2(::System::Collections::Generic::List_1<::UnityEngine::Material*>* mats)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_APPLYLOD_2_OFFSET))(this, mats);
		}

		::System::Void ForceLod(::UnityEngine::Material* mat, ::System::Boolean IsHide)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_FORCELOD_OFFSET))(this, mat, IsHide);
		}

		::System::Void ForceLod_1(::Il2CppArray<::UnityEngine::Material*>* mats, ::System::Boolean IsHide)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_FORCELOD_1_OFFSET))(this, mats, IsHide);
		}

		::System::Void RecordMaterialPassInitialStates(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_RECORDMATERIALPASSINITIALSTATES_OFFSET))(this, mat);
		}

		::System::Void SetManagedPassesEnabled(::UnityEngine::Material* mat, ::System::Boolean lodVisible)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATLODBASEDATA_SETMANAGEDPASSESENABLED_OFFSET))(this, mat, lodVisible);
		}
	};
}
