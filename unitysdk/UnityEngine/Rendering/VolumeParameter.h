#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_GET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x1A33B1A0)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_ISOBJECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A3381D0)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A33B1D0)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A33B1C0)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A33B1E0)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_SET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x1A33B1B0)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33B1F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeParameter_TypeDefinitionIndex = 33532;

	class VolumeParameter : public ::System::Object
	{
	public:
		// static const ::System::String* k_DebuggerDisplay; // 0x0
		::System::Boolean m_OverrideState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_overrideState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_GET_OVERRIDESTATE_OFFSET))(this);
		}

		::System::Void set_overrideState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_SET_OVERRIDESTATE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONDISABLE_OFFSET))(this);
		}

		static ::System::Boolean IsObjectParameter(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_ISOBJECTPARAMETER_OFFSET))(type);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_RELEASE_OFFSET))(this);
		}
	};
}
