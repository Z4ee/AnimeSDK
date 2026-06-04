#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B1972D0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B1972E0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1972C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeStack_RuntimeTypeHandleComparer_TypeDefinitionIndex = 33861;

	class VolumeStack_RuntimeTypeHandleComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
