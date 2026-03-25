#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x18902D10)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18902D20)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x18902D00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeStack_RuntimeTypeHandleComparer_TypeDefinitionIndex = 27955;

	class VolumeStack_RuntimeTypeHandleComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle x, ::System::RuntimeTypeHandle y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
