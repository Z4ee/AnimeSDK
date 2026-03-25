#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCustomData.h"
#include "unitysdk/UnityEngine/ParticleSystemCustomDataMode.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92260)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x211F540)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92100)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_OFFSET UNITYSDK_OFFSET(0x211F450)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92140)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x211F470)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A921C0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x211F4B0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A920A0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x211F420)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A921E0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x211F500)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A920E0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_OFFSET UNITYSDK_OFFSET(0x211F440)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92120)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x211F460)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92160)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x211F480)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A920C0)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x211F430)
#define UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_CustomDataModule_TypeDefinitionIndex = 5464;

	struct alignas(8) ParticleSystem_CustomDataModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void SetMode(::UnityEngine::ParticleSystemCustomData stream, ::UnityEngine::ParticleSystemCustomDataMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystemCustomDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_OFFSET))(this, stream, mode);
		}

		::UnityEngine::ParticleSystemCustomDataMode GetMode(::UnityEngine::ParticleSystemCustomData stream)
		{
			return ((::UnityEngine::ParticleSystemCustomDataMode(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_OFFSET))(this, stream);
		}

		::System::Void SetVectorComponentCount(::UnityEngine::ParticleSystemCustomData stream, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_OFFSET))(this, stream, count);
		}

		::System::Int32 GetVectorComponentCount(::UnityEngine::ParticleSystemCustomData stream)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_OFFSET))(this, stream);
		}

		/*
		::System::Void SetVector(::UnityEngine::ParticleSystemCustomData stream, ::System::Int32 component, ::UnityEngine::ParticleSystem_MinMaxCurve curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_OFFSET))(this, stream, component, curve);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve GetVector(::UnityEngine::ParticleSystemCustomData stream, ::System::Int32 component)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_OFFSET))(this, stream, component);
		}
		*/

		/*
		::System::Void SetColor(::UnityEngine::ParticleSystemCustomData stream, ::UnityEngine::ParticleSystem_MinMaxGradient gradient)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_OFFSET))(this, stream, gradient);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient GetColor(::UnityEngine::ParticleSystemCustomData stream)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_OFFSET))(this, stream);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_CustomDataModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void SetMode_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream, ::UnityEngine::ParticleSystemCustomDataMode mode)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystemCustomDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETMODE_INJECTED_OFFSET))(_unity_self, stream, mode);
		}

		static ::UnityEngine::ParticleSystemCustomDataMode GetMode_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream)
		{
			return ((::UnityEngine::ParticleSystemCustomDataMode(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETMODE_INJECTED_OFFSET))(_unity_self, stream);
		}

		static ::System::Void SetVectorComponentCount_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTORCOMPONENTCOUNT_INJECTED_OFFSET))(_unity_self, stream, count);
		}

		static ::System::Int32 GetVectorComponentCount_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTORCOMPONENTCOUNT_INJECTED_OFFSET))(_unity_self, stream);
		}

		/*
		static ::System::Void SetVector_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream, ::System::Int32 component, ::UnityEngine::ParticleSystem_MinMaxCurve& curve)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETVECTOR_INJECTED_OFFSET))(_unity_self, stream, component, curve);
		}
		*/

		/*
		static ::System::Void GetVector_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream, ::System::Int32 component, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETVECTOR_INJECTED_OFFSET))(_unity_self, stream, component, ret);
		}
		*/

		/*
		static ::System::Void SetColor_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream, ::UnityEngine::ParticleSystem_MinMaxGradient& gradient)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_SETCOLOR_INJECTED_OFFSET))(_unity_self, stream, gradient);
		}
		*/

		/*
		static ::System::Void GetColor_Injected(::UnityEngine::ParticleSystem_CustomDataModule& _unity_self, ::UnityEngine::ParticleSystemCustomData stream, ::UnityEngine::ParticleSystem_MinMaxGradient& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_CustomDataModule&, ::UnityEngine::ParticleSystemCustomData, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CUSTOMDATAMODULE_GETCOLOR_INJECTED_OFFSET))(_unity_self, stream, ret);
		}
		*/
	};
}
