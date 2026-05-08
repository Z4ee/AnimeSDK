#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL_GETEXTRALIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1A6A11D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL_TRYGETEXTRAREFLECTIONPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1A6A12D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6A1700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A16F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CoreUtil_TypeDefinitionIndex = 30325;

	class CoreUtil : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_TypeDeferredReflectionProbe()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(CoreUtil_TypeDefinitionIndex)->GetStaticField(0x23F10);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>** StaticGet_s_CachedExtraReflectionProbeDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>**)Il2CppClass::FromTypeDefinitionIndex(CoreUtil_TypeDefinitionIndex)->GetStaticField(0x23F18);
		}
		static ::System::Type** StaticGet_s_TypeStreamingController()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(CoreUtil_TypeDefinitionIndex)->GetStaticField(0x23F20);
		}
		static ::System::Type** StaticGet_s_TypeUniversalAdditionalCameraData()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(CoreUtil_TypeDefinitionIndex)->GetStaticField(0x23F28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL__CCTOR_OFFSET))();
		}

		static ::System::Boolean GetExtraLightData(::UnityEngine::Light* light, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*& extraLightData)
		{
			return ((::System::Boolean(*)(::UnityEngine::Light*, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL_GETEXTRALIGHTDATA_OFFSET))(light, extraLightData);
		}

		static ::System::Boolean TryGetExtraReflectionProbeData(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*& extraData)
		{
			return ((::System::Boolean(*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COREUTIL_TRYGETEXTRAREFLECTIONPROBEDATA_OFFSET))(probe, extraData);
		}
	};
}
