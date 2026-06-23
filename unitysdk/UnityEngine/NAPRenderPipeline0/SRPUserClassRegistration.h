#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SRPUSERCLASSREGISTRATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA2D9B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SRPUserClassRegistration_TypeDefinitionIndex = 6039;

	class SRPUserClassRegistration : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_VolumeProfileClass()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(SRPUserClassRegistration_TypeDefinitionIndex)->GetStaticField(0x5500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPUSERCLASSREGISTRATION__CCTOR_OFFSET))();
		}
	};
}
