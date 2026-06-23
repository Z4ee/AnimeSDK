#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_VFX_VISUALEFFECTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E887CB0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VisualEffectObject_TypeDefinitionIndex = 89816;

	class VisualEffectObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTOBJECT__CTOR_OFFSET))(this);
		}
	};
}
