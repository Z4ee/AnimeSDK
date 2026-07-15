#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/ProfilingSampler.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { template <typename T> class TProfilingSampler_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TProfilingSampler_1_TypeDefinitionIndex = 34117;

	template <typename TEnum>
	class TProfilingSampler_1 : public ::UnityEngine::Rendering::ProfilingSampler
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>** StaticGet_samples()
		{
			return (::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>**)Il2CppClass::FromTypeDefinitionIndex(TProfilingSampler_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
