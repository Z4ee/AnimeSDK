#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/LODFadeMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_LODGROUP_FORCELOD_OFFSET UNITYSDK_OFFSET(0x1B29CFA0)
#define UNITYENGINE_LODGROUP_GETLODS_OFFSET UNITYSDK_OFFSET(0x1B29CF70)
#define UNITYENGINE_LODGROUP_GET_ANIMATECROSSFADING_OFFSET UNITYSDK_OFFSET(0x1B29CF20)
#define UNITYENGINE_LODGROUP_GET_CROSSFADEANIMATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1B29CFB0)
#define UNITYENGINE_LODGROUP_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B29CF40)
#define UNITYENGINE_LODGROUP_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x1B29CF00)
#define UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29CEA0)
#define UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_OFFSET UNITYSDK_OFFSET(0x1B29CE50)
#define UNITYENGINE_LODGROUP_GET_LODCOUNT_OFFSET UNITYSDK_OFFSET(0x1B29CEF0)
#define UNITYENGINE_LODGROUP_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B29CED0)
#define UNITYENGINE_LODGROUP_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B29CF60)
#define UNITYENGINE_LODGROUP_SETLODS_1_OFFSET UNITYSDK_OFFSET(0x1B29CF90)
#define UNITYENGINE_LODGROUP_SETLODS_OFFSET UNITYSDK_OFFSET(0x1B29CF80)
#define UNITYENGINE_LODGROUP_SET_ANIMATECROSSFADING_OFFSET UNITYSDK_OFFSET(0x1B29CF30)
#define UNITYENGINE_LODGROUP_SET_CROSSFADEANIMATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1B29CFC0)
#define UNITYENGINE_LODGROUP_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B29CF50)
#define UNITYENGINE_LODGROUP_SET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x1B29CF10)
#define UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29CEC0)
#define UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_OFFSET UNITYSDK_OFFSET(0x1B29CEB0)
#define UNITYENGINE_LODGROUP_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B29CEE0)
#define UNITYENGINE_LODGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29CFD0)

namespace UnityEngine
{
	inline static constexpr unsigned int LODGroup_TypeDefinitionIndex = 4175;

	class LODGroup : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_localReferencePoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_OFFSET))(this);
		}

		::System::Void set_localReferencePoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_OFFSET))(this, a1);
		}

		::System::Single get_size()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_lodCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_LODCOUNT_OFFSET))(this);
		}

		::UnityEngine::LODFadeMode get_fadeMode()
		{
			return ((::UnityEngine::LODFadeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_FADEMODE_OFFSET))(this);
		}

		::System::Void set_fadeMode(::UnityEngine::LODFadeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LODFadeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_FADEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_animateCrossFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_ANIMATECROSSFADING_OFFSET))(this);
		}

		::System::Void set_animateCrossFading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_ANIMATECROSSFADING_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_RECALCULATEBOUNDS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::LOD>* GetLODs()
		{
			return ((::Il2CppArray<::UnityEngine::LOD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GETLODS_OFFSET))(this);
		}

		::System::Void SetLODS(::Il2CppArray<::UnityEngine::LOD>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::LOD>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETLODS_OFFSET))(this, a1);
		}

		::System::Void SetLODs_1(::Il2CppArray<::UnityEngine::LOD>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::LOD>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETLODS_1_OFFSET))(this, a1);
		}

		::System::Void ForceLOD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_FORCELOD_OFFSET))(this, a1);
		}

		static ::System::Single get_crossFadeAnimationDuration()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_CROSSFADEANIMATIONDURATION_OFFSET))();
		}

		static ::System::Void set_crossFadeAnimationDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_CROSSFADEANIMATIONDURATION_OFFSET))(a1);
		}

		::System::Void get_localReferencePoint_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_localReferencePoint_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_INJECTED_OFFSET))(this, a1);
		}
	};
}
