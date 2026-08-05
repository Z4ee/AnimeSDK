#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_GETANDCLEARDRITY_OFFSET UNITYSDK_OFFSET(0x1E48E5D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_GET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x1E48E480)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E48E5B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E48E5A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E48E5C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E48E540)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_SET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x1E48E490)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48E640)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48E630)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeParameter_TypeDefinitionIndex = 6045;

	class VolumeParameter : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_g_Dirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VolumeParameter_TypeDefinitionIndex)->GetStaticField(0x2980);
		}
		::System::Boolean m_OverrideState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER__CCTOR_OFFSET))();
		}

		::System::Boolean get_overrideState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_GET_OVERRIDESTATE_OFFSET))(this);
		}

		::System::Void set_overrideState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_SET_OVERRIDESTATE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_RELEASE_OFFSET))(this);
		}

		static ::System::Void SetDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_SETDIRTY_OFFSET))();
		}

		static ::System::Boolean GetAndClearDrity()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPARAMETER_GETANDCLEARDRITY_OFFSET))();
		}
	};
}
