#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCustomData.h"
#include "unitysdk/UnityEngine/ParticleSystemCustomDataMode.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12E060)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x3AD6A10)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DF00)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_OFFSET UNITYSDK_OFFSET(0x3AD6920)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DF40)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x3AD6940)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DFC0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x3AD6980)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DEA0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3AD68F0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DFE0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x3AD69D0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DEE0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_OFFSET UNITYSDK_OFFSET(0x3AD6910)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DF20)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x3AD6930)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DF60)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x3AD6950)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12DEC0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3AD6900)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x164FF0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_CustomDataModule_TypeDefinitionIndex = 5757;

	struct alignas(8) ParticleSystem_CustomDataModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Void SetMode(::UnityEngine::ParticleSystemCustomData a1, ::UnityEngine::ParticleSystemCustomDataMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystemCustomDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ParticleSystemCustomDataMode GetMode(::UnityEngine::ParticleSystemCustomData a1)
		{
			return ((::UnityEngine::ParticleSystemCustomDataMode(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_OFFSET))(this, a1);
		}

		::System::Void SetVectorComponentCount(::UnityEngine::ParticleSystemCustomData a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetVectorComponentCount(::UnityEngine::ParticleSystemCustomData a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_OFFSET))(this, a1);
		}

		/*
		::System::Void SetVector(::UnityEngine::ParticleSystemCustomData a1, ::System::Int32 a2, ::UnityEngine::ParticleSystem_MinMaxCurve a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_OFFSET))(this, a1, a2, a3);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve GetVector(::UnityEngine::ParticleSystemCustomData a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Void SetColor(::UnityEngine::ParticleSystemCustomData a1, ::UnityEngine::ParticleSystem_MinMaxGradient a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient GetColor(::UnityEngine::ParticleSystemCustomData a1)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CustomDataModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetMode_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2, ::UnityEngine::ParticleSystemCustomDataMode a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystemCustomDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ParticleSystemCustomDataMode GetMode_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2)
		{
			return ((::UnityEngine::ParticleSystemCustomDataMode(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetVectorComponentCount_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetVectorComponentCount_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void SetVector_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2, ::System::Int32 a3, ::UnityEngine::ParticleSystem_MinMaxCurve& a4)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Void GetVector_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2, ::System::Int32 a3, ::UnityEngine::ParticleSystem_MinMaxCurve& a4)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Void SetColor_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2, ::UnityEngine::ParticleSystem_MinMaxGradient& a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Void GetColor_Injected(::UnityEngine::ParticleSystem_CustomDataModule& a1, ::UnityEngine::ParticleSystemCustomData a2, ::UnityEngine::ParticleSystem_MinMaxGradient& a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/
	};
}
