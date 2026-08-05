#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ProfilingSampler.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class TProfilingSampler_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TProfilingSampler_1_TypeDefinitionIndex = 5978;

	template <typename TEnum>
	class TProfilingSampler_1 : public ::UnityEngine::NAPRenderPipeline0::ProfilingSampler
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::NAPRenderPipeline0::TProfilingSampler_1<TEnum>*>** StaticGet_samples()
		{
			return (::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::NAPRenderPipeline0::TProfilingSampler_1<TEnum>*>**)Il2CppClass::FromTypeDefinitionIndex(TProfilingSampler_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
