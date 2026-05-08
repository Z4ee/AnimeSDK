#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_NAPRENDERPIPELINE0_BASEMATERIALWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EF4A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int BaseMaterialWrapper_TypeDefinitionIndex = 5988;

	class BaseMaterialWrapper : public ::System::Object
	{
	public:
		::UnityEngine::Material* MaterialObject; // 0x10
		::System::Int32 MaterialID; // 0x18

		::System::Void _ctor(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASEMATERIALWRAPPER__CTOR_OFFSET))(this, mat);
		}
	};
}
