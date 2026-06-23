#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Light; }
namespace UnityEngine::Experimental::GlobalIllumination { class Lightmapping_RequestLightsDelegate; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D84BE10)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTS_OFFSET UNITYSDK_OFFSET(0x1D84BED0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_RESETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D84BE70)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_SETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D84BD80)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D84BF80)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int Lightmapping_TypeDefinitionIndex = 6319;

	class Lightmapping : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate** StaticGet_s_RequestLightsDelegate()
		{
			return (::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate**)Il2CppClass::FromTypeDefinitionIndex(Lightmapping_TypeDefinitionIndex)->GetStaticField(0x5330);
		}
		static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate** StaticGet_s_DefaultDelegate()
		{
			return (::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate**)Il2CppClass::FromTypeDefinitionIndex(Lightmapping_TypeDefinitionIndex)->GetStaticField(0x5338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING__CCTOR_OFFSET))();
		}

		static ::System::Void SetDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* del)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_SETDELEGATE_OFFSET))(del);
		}

		static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* GetDelegate()
		{
			return ((::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_GETDELEGATE_OFFSET))();
		}

		static ::System::Void ResetDelegate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_RESETDELEGATE_OFFSET))();
		}

		static ::System::Void RequestLights(::Il2CppArray<::UnityEngine::Light*>* lights, ::System::IntPtr outLightsPtr, ::System::Int32 outLightsCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Light*>*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTS_OFFSET))(lights, outLightsPtr, outLightsCount);
		}
	};
}
