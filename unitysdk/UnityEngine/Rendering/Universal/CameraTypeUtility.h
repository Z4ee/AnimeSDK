#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY_GETNAME_OFFSET UNITYSDK_OFFSET(0x190909F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19090B20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraTypeUtility_TypeDefinitionIndex = 30255;

	class CameraTypeUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_CameraTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTypeUtility_TypeDefinitionIndex)->GetStaticField(0x24B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::String* GetName(::UnityEngine::NAPRenderPipeline0::CameraRenderType type)
		{
			return ((::System::String*(*)(::UnityEngine::NAPRenderPipeline0::CameraRenderType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERATYPEUTILITY_GETNAME_OFFSET))(type);
		}
	};
}
