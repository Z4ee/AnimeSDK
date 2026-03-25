#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemGameObjectFilter.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemForceField; }

#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92DB0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_OFFSET UNITYSDK_OFFSET(0x21200C0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92E60)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_OFFSET UNITYSDK_OFFSET(0x2120110)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92BE0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x211FF80)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92D70)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_OFFSET UNITYSDK_OFFSET(0x21200A0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92CD0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_OFFSET UNITYSDK_OFFSET(0x2120030)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92D20)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_OFFSET UNITYSDK_OFFSET(0x2120050)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92C90)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_OFFSET UNITYSDK_OFFSET(0x211FFC0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92C20)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x211FFA0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92D90)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_OFFSET UNITYSDK_OFFSET(0x21200B0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92E20)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_OFFSET UNITYSDK_OFFSET(0x21200F0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92DD0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_OFFSET UNITYSDK_OFFSET(0x21200D0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_1_OFFSET UNITYSDK_OFFSET(0x21200E0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92E00)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_OFFSET UNITYSDK_OFFSET(0x21200D0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92E40)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_OFFSET UNITYSDK_OFFSET(0x2120100)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92C00)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x211FF90)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92CF0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_OFFSET UNITYSDK_OFFSET(0x2120040)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92D50)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_OFFSET UNITYSDK_OFFSET(0x2120080)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92CB0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_OFFSET UNITYSDK_OFFSET(0x2120000)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92C40)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x211FFB0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ExternalForcesModule_TypeDefinitionIndex = 5458;

	struct alignas(8) ParticleSystem_ExternalForcesModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Single get_multiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_OFFSET))(this);
		}

		::System::Void set_multiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_multiplierCurve()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_multiplierCurve(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_OFFSET))(this, value);
		}
		*/

		::UnityEngine::ParticleSystemGameObjectFilter get_influenceFilter()
		{
			return ((::UnityEngine::ParticleSystemGameObjectFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_OFFSET))(this);
		}

		::System::Void set_influenceFilter(::UnityEngine::ParticleSystemGameObjectFilter value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemGameObjectFilter))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::LayerMask get_influenceMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_influenceMask(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_OFFSET))(this, value);
		}
		*/

		::System::Int32 get_influenceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_OFFSET))(this);
		}

		::System::Boolean IsAffectedBy(::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_OFFSET))(this, field);
		}

		::System::Void AddInfluence(::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_OFFSET))(this, field);
		}

		::System::Void RemoveInfluenceAtIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_OFFSET))(this, index);
		}

		::System::Void RemoveInfluence(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_OFFSET))(this, index);
		}

		::System::Void RemoveInfluence_1(::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_1_OFFSET))(this, field);
		}

		::System::Void RemoveAllInfluences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_OFFSET))(this);
		}

		::System::Void SetInfluence(::System::Int32 index, ::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_OFFSET))(this, index, field);
		}

		::UnityEngine::ParticleSystemForceField* GetInfluence(::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystemForceField*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_OFFSET))(this, index);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_multiplier_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_multiplier_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_multiplierCurve_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_multiplierCurve_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::UnityEngine::ParticleSystemGameObjectFilter get_influenceFilter_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemGameObjectFilter(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_influenceFilter_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::ParticleSystemGameObjectFilter value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::ParticleSystemGameObjectFilter))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_influenceMask_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::LayerMask& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_influenceMask_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::LayerMask& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Int32 get_influenceCount_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsAffectedBy_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_INJECTED_OFFSET))(_unity_self, field);
		}

		static ::System::Void AddInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_INJECTED_OFFSET))(_unity_self, field);
		}

		static ::System::Void RemoveInfluenceAtIndex_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::System::Void RemoveInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_INJECTED_OFFSET))(_unity_self, field);
		}

		static ::System::Void RemoveAllInfluences_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystemForceField* field)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::System::Int32, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_INJECTED_OFFSET))(_unity_self, index, field);
		}

		static ::UnityEngine::ParticleSystemForceField* GetInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystemForceField*(*)(::UnityEngine::ParticleSystem_ExternalForcesModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_INJECTED_OFFSET))(_unity_self, index);
		}
	};
}
