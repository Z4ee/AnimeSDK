#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_VFX_VFXSPAWNERSTATE_CREATESPAWNERSTATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1C558B20)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C558C90)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C558C10)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C558C00)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C558BD0)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_SETWRAPVALUE_OFFSET UNITYSDK_OFFSET(0x1C558B60)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C558B10)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXSpawnerState_TypeDefinitionIndex = 84236;

	class VFXSpawnerState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Boolean m_Owner; // 0x18

		::System::Void _ctor(::System::IntPtr ptr, ::System::Boolean owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE__CTOR_OFFSET))(this, ptr, owner);
		}

		static ::UnityEngine::VFX::VFXSpawnerState* CreateSpawnerStateWrapper()
		{
			return ((::UnityEngine::VFX::VFXSpawnerState*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_CREATESPAWNERSTATEWRAPPER_OFFSET))();
		}

		::System::Void SetWrapValue(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_SETWRAPVALUE_OFFSET))(this, ptr);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_RELEASE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_INTERNAL_DESTROY_OFFSET))(ptr);
		}
	};
}
